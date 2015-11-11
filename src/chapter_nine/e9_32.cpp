
#include <iostream>
#include <vector>
using namespace std;

void test(vector<string> &svec, int num)
{
    svec.reserve(1024);
    string s;
    int i;

    for (i = 0; i < num; i++) {
        svec.push_back(s);
    }
    svec.resize(svec.size() + svec.size() / 2);
    cout << num << ": size " << svec.size() << ", capacity " << svec.capacity() << endl;
}

int main(int argc, char **argv)
{
    vector<string> svec1;
    vector<string> svec2;
    vector<string> svec3;
    vector<string> svec4;

    test(svec1, 256);
    test(svec2, 512);
    test(svec3, 1000);
    test(svec4, 1048);
    return 0;
}
