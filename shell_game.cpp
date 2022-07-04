#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input("input.txt");
    string line;
    int target, a, b;
    getline(input, line);
    target = line[0]-'0';
    while(getline(input, line)) {
        a = line[0] - '0';
        b = line[2] - '0';
        if(target == a) target = b;
        else if(target == b) target = a;
    }
    input.close();

    ofstream output("output.txt");
    output << target;
    output.close();
    return 0;
}