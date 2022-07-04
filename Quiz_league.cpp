#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    input.open("input.txt");
    int n, k;
    input >> n >> k;
    vector<int> status(n);
    for(int i=0; i <n; i++) input >> status[i];
    int start = k-1;
    while(status[start] != 1) {
        start++;
        start%=n;
    }
    ofstream output;
    output.open("output.txt");
    output << start+1 << endl;
    input.close();
    output.close();
    return 0;
}