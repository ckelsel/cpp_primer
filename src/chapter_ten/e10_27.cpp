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
using namespace std;

typedef multimap<string, string>::iterator db_iter;

void generateData(multimap<string, string> &db)
{
    db.insert(make_pair("xkm", "book1"));
    db.insert(make_pair("xkm", "book2"));

    db.insert(make_pair("cqf", "exercise1"));
    db.insert(make_pair("cqf", "exercise2"));
}

void deleteAuthor(multimap<string, string> &db, string author)
{
    pair<db_iter, db_iter> range = db.equal_range(author);

    if (range.first != range.second) {
        cout << "author: " << author << " found and del" << endl;
    } else {
        cout << "author: " << author << " not found" << endl;
    }

    db.erase(range.first, range.second);
}

int main(int argc, char **argv)
{
    multimap<string, string> db;

    generateData(db);

    deleteAuthor(db, "aa");
    deleteAuthor(db, "xkm");
    deleteAuthor(db, "xkm");

    return 0;
}
