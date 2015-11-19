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
using namespace std;

class Persion {
private:
    string name_;
    string address_;

public:
    Persion(){}
    ~Persion(){}

    Persion(string name, string address);

    string getName() const;
    string getAddress() const;
};

Persion::Persion(string name, string address)
{
    name_ = name;
    address_ = address;
}

string Persion::getName() const
{
    return name_;
}

string Persion::getAddress() const
{
    return address_;
}

int main(int argc, char **argv)
{
    return 0;
}
