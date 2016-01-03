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

class Item_base {
public:
    Item_base(const string isbn = "", const double price = 0.f)
        : isbn_  (isbn)
        , price_ (price) {
    }

    string book() const {
        return isbn_;
    }

    virtual double net_price(size_t num) const {
        return price_ * num;
    }
protected:
    double  price_;
    string  isbn_;
};

class Bulk_item : public Item_base {
public:
#if 1
    Bulk_item(const string isbn = "", const double price = 0.f) 
        : Item_base(isbn, price) {
    }
#else
    // error c2614
    Bulk_item(const string isbn = "", const double price = 0.f)
        : isbn_  (isbn)
        , price_ (price) {
    }
#endif

    virtual double net_price(size_t num) const {
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
    Item_base a("0-201-54848-8", 88.3);
    Bulk_item b("0-201-82470-1", 258.4);

    print_total(cout, a, 1);
    print_total(cout, b, 1);
    return 0;
}
