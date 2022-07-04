#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    input.open("input.txt");
    string entry;
    int rail;
    input >> entry >> rail;
    ofstream output;
    output.open("output.txt");
    if(entry == "front" && rail == 2 || entry == "back" && rail == 1) output << 'R' << endl;
    else output << 'L' << endl;
    return 0;
}