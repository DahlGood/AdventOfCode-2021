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

    while(file >> direction >> distance) {

        if(direction == "forward") {
            x += distance;
        }
        else if(direction == "up") {
            y -= distance;
        }
        else if(direction == "down") {
            y += distance;
        }

    }

    cout << x*y << endl;

} 