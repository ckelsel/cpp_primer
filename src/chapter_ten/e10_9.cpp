
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    map<string, int> words;

    while ( 1 ) {
        string word;

        cin >> word;

        if (word == "eof") {
            break;
        }

        ++words[word];
    }

    for (map<string, int>::iterator iter = words.begin();
            iter != words.end();
            ++iter) {
        cout << iter->first << ": " << iter->second << endl;
    }

    return 0;
}
