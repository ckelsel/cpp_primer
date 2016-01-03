/**-------------------------------------------------------------------------
 * 
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
using namespace std;

class Item_base {
private:
    string isbn_;
    double price_;

public:
    Item_base() {
    }

    Item_base(string isbn, double price) {
        isbn_ = isbn;
        price_ = price;
    }

    string book() {
        return isbn_;
    }
    
    virtual double net_price(size_t num) {
        return price_ * num;
    }
};

class Bulk_item : public Item_base {
private:
    string isbn_;
    double price_;

public:
    Bulk_item(string isbn, double price) {
        isbn_ = isbn;
        price_ = price;
    }
    virtual double net_price(size_t num) {
        return 0.8 * price_ * num;
    }
};

void print_total(ostream &os, const Item_base &item, size_t count)
{
    os << "ISBN:" << item.book();
    os << ", number sold:" << count;
    os << ", total price:" << item.net_price(count) << endl;
}

int main(int argc, char **argv)
{
    return 0;
}
