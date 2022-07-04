#include <iostream>
#include <vector>

using namespace std;

int main() {
    string initial, final;
    cin >> initial >> final;
    int count = 0;
    vector<string> res;
    while(initial[0] < final[0] && initial[1] < final[1]) {
        res.push_back("RU");
        initial[0] += 1;
        initial[1] += 1;
        count+=1;
    }

    while(initial[0] > final[0] && initial[1] > final[1]) {
        res.push_back("LD");
        initial[0] -= 1;
        initial[1] -= 1;
        count+=1;
    }

    while(initial[0] < final[0] && initial[1] > final[1]) {
        res.push_back("RD");
        initial[0] += 1;
        initial[1] -= 1;
        count+=1;
    }

    while(initial[0] > final[0] && initial[1] < final[1]) {
        res.push_back("LU");
        initial[0] -= 1;
        initial[1] += 1;
        count+=1;
    }

    
    while(initial[0] < final[0]) {
        res.push_back("R");
        initial[0] += 1;
        count++;
    }
    
    while(initial[0] > final[0]) {
        res.push_back("L");
        initial[0] -= 1;
        count+=1;
    }
    
    while(initial[1] < final[1]) {
        res.push_back("U");
        initial[1] += 1;
        count+=1;
    }
    
    while(initial[1] > final[1]) {
        res.push_back("D");
        initial[1] -= 1;
        count+=1;
    }

    cout << count << endl;
    for(auto str : res) cout << str << endl;
    return 0;
}