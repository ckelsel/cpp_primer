
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
        string key;
        int value;
        cin >> key >> value;
        if (key == "end" && value == 0) {
            break;
        }
        vec.push_back(make_pair(key, value));
    }

    cout << "eof, begin dump" << endl;
    for (vector< pair<string, int> >::iterator iter = vec.begin();
            iter != vec.end();
            ++iter) {
        cout << "<" << iter->first << ", " << iter->second << endl;
    }

    return 0;
}
