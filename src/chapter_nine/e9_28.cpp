
#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main(int argc, char **argv)
{
    char *names[] = {"abc", "cba", "aa"};
    list<char*> l(names, names + 3);
    vector<string> v;

    v.assign(l.begin(), l.end());

    for(vector<string>::iterator iter = v.begin();
            iter != v.end();
            ++iter) {
        cout << iter->c_str() << endl;
    }
    return 0;
}
