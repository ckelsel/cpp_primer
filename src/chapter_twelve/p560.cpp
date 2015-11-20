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

class Screen {
public:
    Screen &set(std::string str) 
    {
        contents_ = str;
        return *this;
    }

    Screen &display(std::ostream &out)
    {
        out << contents_;
        return *this; 
    }

    const Screen &display(std::ostream &out) const
    {
        out << contents_;
        return *this;
    }

private:
    std::string contents_;

};

int main(int argc, char **argv)
{
    Screen screen;

    screen.set("aa").display(std::cout);

    screen.display(std::cout).set("bb").display(std::cout);

    return 0;
}



