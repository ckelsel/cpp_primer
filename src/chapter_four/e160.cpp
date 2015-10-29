
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char s[5] = "abcd";//ok
    char s[4] = "abcd";//error
    char s[3] = "abcd";//error

    return 0;
}
