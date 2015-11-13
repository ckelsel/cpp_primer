
#include <iostream>
#include <vector>
#include <string>
#include <string>
#include <utility>
using namespace std;

int main(int argc, char **argv)
{
    vector< pair<string, int> > vec;
    pair<string, int> val;

    cout << "example: ckelsel 101" << endl; 
    cout << "exit: end 0" << endl; 

    while (1) {
        cin >> val.first >> val.second;
        if (val.first == "end" && val.second == 0) {
            break;
        }
        vec.push_back(val);
    }

    cout << "eof, begin dump" << endl;
    for (vector< pair<string, int> >::iterator iter = vec.begin();
            iter != vec.end();
            ++iter) {
        cout << "<" << iter->first << ", " << iter->second << endl;
    }

    return 0;
}
