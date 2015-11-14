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
#include <map>
#include <string>
#include <vector>
using namespace std;

char* myitoa(int value, char *buffer /* 10 */)
{
    sprintf(buffer, "%d", value);
    return buffer;
}

int main(int argc, char **argv)
{
    map<string, vector<int> > myMap;
    map<string, vector<int> >::iterator iter;
    string base("aKey");
    string key;
    vector<int> value;
    char buffer[32];

    // init
    for (int i = 0; i < 10; i++) {
        key = base + myitoa(i, buffer);
        value.push_back(i);

        myMap.insert(make_pair(key, value));
    }

    iter = myMap.find(base);
    if (iter != myMap.end()) {
        cout << "found key: " << base << endl;
    } else {
        cout << "not found key: " << base << endl;
    }

    iter = myMap.find("nofound");
    if (iter != myMap.end()) {
        cout << "found key: nofound" << endl;
    } else {
        cout << "not found key: nofound" << endl;
    }

    return 0;
}


