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
#include <algorithm>
#include <numeric>
#include <list>
#include <iterator>
#include <string>
using namespace std;

void GetData(list<string> &slist)
{
    const char *article[] = {"In","a","news","conference","Monday", "In","a","news","conference","Monday","CIA","Director","John","Brennan","said","he","doesn't","think","the","events","in","Paris","are","the","only","attacks","ISIS","has","planned", NULL};

    for (int i = 0; article[i] != NULL; ++i) {
        slist.push_back(article[i]);
    }
}

bool isShort(const string &s1, const string &s2)
{
    return s1.size() <= s2.size();
}

void dump(list<string> &slist)
{
    list<string>::iterator iter;

    for (iter = slist.begin();
         iter != slist.end();
         ++iter) {
        cout << iter->c_str() << " ";
    }
    cout << endl;
}

bool GT4(const string &str)
{
    return str.size() >= 4;
}

int main(int argc, char **argv)
{
    list<string> slist;

    GetData(slist);
    dump(slist);

    // sort
    stable_sort(slist.begin(), slist.end(), isShort);
    dump(slist);

    list<string>::iterator unique_end = 
        unique(slist.begin(), slist.end());

    // delete same
    slist.erase(unique_end, slist.end());
    dump(slist);

    list<string>::size_type num = count_if(slist.begin(),
            slist.end(), GT4);
    cout << num << endl;
    return 0;
}



