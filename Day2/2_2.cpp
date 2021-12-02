#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream file;
    file.open("input.txt");

    string direction;
    int distance;

    int x = 0;
    int y = 0;
    int z = 0;

    while(file >> direction >> distance) {

        if(direction == "forward") {
            x += distance;
            y += distance*z;
        }
        else if(direction == "up") {
            z -= distance;
        }
        else if(direction == "down") {
            z += distance;
        }

    }

    cout << x*y << endl;

} 