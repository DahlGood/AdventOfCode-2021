#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string fileName = "input.txt";

    ifstream file;
    file.open(fileName);
    int A, B, C, D = 0;
    int next;
    int inc = 0;;
    int i = 1;
    int sum1;
    int sum2;

    while(file >> D) {

        sum1 = A + B + C;
        sum2 = B + C + D;

        A = B, B = C, C = D;

        if(i > 3 && sum1 < sum2) {
            inc++;
        }

        i++;
    }

    cout << inc << endl;

    file.close();

}
