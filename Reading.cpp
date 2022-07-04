#include <iostream>
#include <vector>
#include <algorithm>
#define pr pair<int, int>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    input.open("input.txt");
    string str;

    int n, t;
    input >> n >> t;
    vector<pr> light;
    int l;
    for(int i=0; i < n; i++) {
        input >> l;
        light.push_back({l, i+1});
    }
    sort(light.begin(), light.end(), greater<pr>());

    ofstream output;
    output.open("output.txt");
    output << light[t-1].first << endl;
    for(int i=0; i < t; i++) output << light[i].second << " ";
    output << endl;
    
    return 0;
}