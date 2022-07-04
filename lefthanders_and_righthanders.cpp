#include <iostream>
#include <set>
#include <fstream>
using namespace std;

int main() {
    int n;
    string n1, hand_style;

    ifstream input;
    input.open("input.txt");
    if (input.is_open()){
        getline(input, n1);
        getline(input, hand_style);
        input.close();
    }

    FILE *output;
    output = fopen("output.txt", "w");
    n = hand_style.length();
    for(int i=0, j=n/2; j<n; i++, j++) {
        if(hand_style[i] == 'R' && hand_style[j] == 'L') fprintf(output, "%d %d\n", j+1, i+1);
        else fprintf(output, "%d %d\n", i+1, j+1);
    }
    fclose(output);
    return 0;
}