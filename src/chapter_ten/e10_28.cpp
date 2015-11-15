/**-------------------------------------------------------------------------
 * Copyright (C) 2015 KunMing Xie <ckelsel@hotmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

typedef multimap<string, string>::iterator db_iter;

void generateData(multimap<string, string> &db)
{
    db.insert(make_pair("xkm", "book1"));
    db.insert(make_pair("xkm", "book2"));

    db.insert(make_pair("xxx", "book2"));
    db.insert(make_pair("xxx2", "book21"));

    db.insert(make_pair("cqf", "exercise1"));
    db.insert(make_pair("cqf", "exercise2"));
}

string mytoupper(string in)
{
    transform(in.begin(), in.end(), in.begin(), toupper);

    return in;
}

void displayAuthor(multimap<string, string> &db)
{
    string a_z = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    multimap<string, string> authorMap;
    multimap<string, string>::iterator iter;
    set<string> authorSet;

    for (iter = db.begin();
        iter != db.end();
        ++iter) {
        string author = iter->first;
        string index = mytoupper(author).substr(0, 1);

        if (authorSet.count(author) == 0) {
            cout << "insert " << index << ":" << author << endl;
            authorMap.insert(make_pair(index, author));
            authorSet.insert(author);
        }
    }

    for (int i = 0; i < 26; ++i) {
        string index = a_z.substr(i, 1);
        //cout << index << ": " << authorMap.count(index) << endl;

        pair<db_iter, db_iter> range = authorMap.equal_range(index);
        while (range.first != range.second) {
            string author = range.first->second;
            cout << author << ": ";

            pair<db_iter, db_iter> range2 = db.equal_range(author);
            while (range2.first != range2.second) {
                cout << "<<" << range2.first->second << ">> ";
                ++range2.first;
            }
            cout <<endl;
            ++range.first;
        }

    }
}

int main(int argc, char **argv)
{
    multimap<string, string> db;

    generateData(db);

    displayAuthor(db);

    return 0;
}
