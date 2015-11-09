
#include <iostream>
#include <vector>
using namespace std;

void first(vector<int> &iv)
{
    int val;
    int val2;
    int val3;
    int val4;

    val = *iv.begin();
    val2 = iv.front();
    val3 = iv[0];
    val4 = iv.at(0);

    printf("%d %d %d %d\n",
            val, val2, val3, val4);
}

void modify(vector<int> &iv)
{
    vector<int>::reference val = iv.front();
    // iv[0]: 3 -> 2
    val = 2;

    first(iv);
}

int main(int argc, char **argv)
{
    vector<int> iv(1, 3);
    vector<int> iv2;

    first(iv);

    modify(iv);

    //first(iv2);

    return 0;
}
