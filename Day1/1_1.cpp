#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    ifstream file;
    file.open("input.txt");

    int depth;
    int inc;
    int last;

    file >> last;
    while(file >> depth) {
        if(depth > last) {
            inc++;
        }
        last = depth;
    }

    cout << inc;

    file.close();

}
