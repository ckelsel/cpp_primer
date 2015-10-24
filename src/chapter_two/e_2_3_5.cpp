
#include <iostream>
using namespace std;


//declares and init, ok
extern int m = 0;

//declares, ok
extern int n;

//define, ok
int sum;

int main(int argc, char **argv)
{
    //define, ok
    int t;

    //declares, ok
    extern int i;

    //declares and init , error in function
    extern int j = 0;

    return 0;
}
