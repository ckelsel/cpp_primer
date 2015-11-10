
#include <algorithm>
#include <list>
#include <string>
#include <deque>
#include <iostream>
using namespace std;

void delete_string(list<string> & l, string target)
{
    list<string>::iterator iter;

    iter = find(l.begin(), l.end(), target);
    if (iter != l.end()) {
        printf("%s del\n", (*iter).c_str());
        l.erase(iter);
    } else {
        printf("%s not found\n", target.c_str());
    }
}

void delete_string2(deque<string> &q, string target)
{
    deque<string>::iterator iter;

    iter = find(q.begin(), q.end(), target);
    if (iter != q.end()) {
        printf("%s del\n", (*iter).c_str());
        q.erase(iter);
    } else {
        printf("%s not found\n", target.c_str());
    }
}

int main(int argc, char **argv)
{
    char *str[] = {"abc", "ased"};
    list<string> l(str, str+sizeof(str)/sizeof(char *));
    deque<string> q(str, str+sizeof(str)/sizeof(char *));

    delete_string(l, "abc");
    delete_string(l, "abc2");

    delete_string2(q, "abc2");
    delete_string2(q, "abc");
    return 0;
}
