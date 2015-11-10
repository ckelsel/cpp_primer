
#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 9};
    list<int> ilist(ia, ia+sizeof(ia)/sizeof(int));
    vector<int> ivec(ia, ia+sizeof(ia)/sizeof(int));

    for ( list<int>::iterator liter = ilist.begin();
          liter != ilist.end();
          ) {
        printf(" %d ", *liter);
        if (*liter % 2) {
            printf(" del\n");

            //must return next iter
            liter = ilist.erase(liter);
        } else {
            ++liter;
            printf(" \n");
        }
    }

    printf(" \n");
    for ( vector<int>::iterator viter = ivec.begin();
          viter != ivec.end();
          ) {
        printf(" %d ", *viter);
        if (*viter % 2 == 0) {
            printf(" del\n");
            viter = ivec.erase(viter);
        } else {
            ++viter;
            printf(" \n");
        }
    }

    return 0;
}
