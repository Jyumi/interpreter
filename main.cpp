#include <cstdio>
#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main () {
    //change file name here depending on file you want to test
    ifstream inFile("Test.txt");

    //check for the file
    if (inFile.fail()) {
        cerr << "Unable to open file for reading." << endl;
        exit(1);
    }

    //
    string nextToken;
    while (inFile >> nextToken) {

        cout << "Type: " << nextToken << "\t****\t";
        cout << "Token: " << nextToken << endl;
    }

    inFile.close();

    return 0;
//    return 0;
    cout << "Tokenizing output: " << endl;
    //tokenize and push files into the right spacing
    char str[] = "This is a sample string.";
    char * lexem;
    printf ("Token\t\tLexem\n");
    lexem = strtok (str," ,.-");
    while (lexem != nullptr)
    {
        printf ("%s", "keyword\t\t");
        printf ("%s\n",lexem);
        lexem = strtok (nullptr, " ,.-");
    }
    return 0;
}
