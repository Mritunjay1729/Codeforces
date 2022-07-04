#include <iostream>
#include <vector>
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> grpA(n), grpB(n), countA(6), countB(6), countTotal(6);
    fl(n) {
        cin >> grpA[i];
        countA[grpA[i]]++;
        countTotal[grpA[i]]++;
    }
    fl(n) {
        cin >> grpB[i];        
        countB[grpB[i]]++;
        countTotal[grpB[i]]++;
    }

    // fl(6) cout << countA[i] << " ";
    // cout << endl;    
    // fl(6) cout << countB[i] << " ";
    // cout << endl;    
    // fl(6) cout << countTotal[i] << " ";
    // cout << endl;
    int swapA, swapB;
    swapA = swapB = 0;
    for(int i=1; i < 6; i++) {
        if(countTotal[i]%2 == 1) {printf("-1"); exit(0);}
        swapA += (countTotal[i]/2-countA[i] > 0)?countTotal[i]/2-countA[i]:0;
        swapB += (countTotal[i]/2-countB[i] > 0)?countTotal[i]/2-countB[i]:0;
    }
    // cout << swapA << " " << swapB << endl;
    (swapA==swapB)?printf("%d\n", swapA):printf("%d\n", -1);
    return 0;
}