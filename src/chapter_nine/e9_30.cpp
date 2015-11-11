
#include <iostream>
#include <vector>
using namespace std;

void add(vector<int> &ivec, int num)
{
    cout << "add " << num << endl;

    for (int i = 0; i < num; i++) {
        ivec.push_back(0);
    }
}

void dump(vector<int> &ivec)
{
    cout << "size " << ivec.size() << ", capacity " << ivec.capacity() << endl;
}

void fill(vector<int> &ivec)
{
    int length = ivec.capacity();
    for (int i = ivec.size(); i < length; i++) {
        ivec.push_back(0);
    }
}

int main(int argc, char **argv)
{
    vector<int> ivec;

    dump(ivec);

    add(ivec, 3);
    dump(ivec);

    fill(ivec);
    dump(ivec);

    add(ivec, 30);
    dump(ivec);

    fill(ivec);
    dump(ivec);

    add(ivec, 300);
    dump(ivec);

    fill(ivec);
    dump(ivec);

    add(ivec, 300);
    dump(ivec);

    return 0;
}
