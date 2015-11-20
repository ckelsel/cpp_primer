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

void test1()
{
    const double const_pi = 3.14;
    double nonconst_pi = 3.14;

    const double *const_ptr;
    
    const_ptr = &const_pi;
    //*const_ptr = 1.0; //error

    const_ptr = &nonconst_pi;
    //*const_ptr = 1.0; //error
}

void test2()
{
    typedef string* pstring;

    string name = "123";
    string name2 = "123";
    const pstring ptr = &name;

    //can not modify, ptr is const
    ptr = &name2;
}

int main(int argc, char **argv)
{

    return 0;
}
