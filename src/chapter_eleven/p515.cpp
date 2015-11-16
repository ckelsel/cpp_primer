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
#include <iterator>
#include <algorithm>
using namespace std;

string mytoupper(string in)
{
    string out;
    transform(in.begin(), in.end(), back_inserter(out), toupper);

    // out is empty and no room for store element;
    //transform(in.begin(), in.end(), out.begin(), toupper);

    return out;
}

int main(int argc, char **argv)
{
    string out = mytoupper("aA");

    cout << "out = " << out << endl;
    return 0;
}

