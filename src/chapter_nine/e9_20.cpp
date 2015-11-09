
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int compare(vector<int> &iv, list<int> &il)
{
    int i;
    int length;
    vector<int>::iterator viter = iv.begin();
    list<int>::iterator liter = il.begin();

    if (iv.size() >= il.size()) {
        length = il.size();
    } else {
        length = iv.size();
    }

    i = 0;
    while (i < length) {
        if (*viter != *liter) {
            return *viter - *liter;
        }

        ++viter;
        ++liter;
        ++i;
    }

    return 0;
}

int main(int argc, char **argv)
{
    int t1[] = {0, 23, 3, 1, 2};
    int t2[] = {3, 2, 4};
    vector<int> iv(t1, t1 + sizeof(t1) / sizeof(int));
    list<int> il(t2, t2 + sizeof(t2) / sizeof(int));
    list<int> il2(t1, t1 + sizeof(t1) / sizeof(int));
    int ret;

    ret = compare(iv, il);
    if (ret < 0) {
        printf("iv < il\n");
    } else if (ret > 0) {
        printf("iv > il\n");
    } else {
        printf("iv = il\n");
    }

    ret = compare(iv, il2);
    if (ret < 0) {
        printf("iv < il2\n");
    } else if (ret > 0) {
        printf("iv > il2\n");
    } else {
        printf("iv = il2\n");
    }


    return 0;
}
