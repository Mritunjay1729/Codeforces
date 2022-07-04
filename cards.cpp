#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, num, share= 0, count = 0;
    map<int, int> mp;
    cin >> n;
    vector<int> numList;
    for(int i=0; i < n; i++) {
        cin >> num;
        numList.push_back(num);
        share+=num;
    }
    share/=(n/2);
    
    for(int i=0; i < n; i++) {
        if(numList[i] == -1) continue;
        for(int j = i+1; j <n; j++) {
            if(numList[j] == -1) continue;
            if(numList[i] + numList[j] == share) {
                numList[j] = -1;
                printf("%d %d\n", i+1, j+1);
                break;
            }
        }
    }
    return 0;
}