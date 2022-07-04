#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> ranks(101, 0);
    int rank;
    for(int i=0; i < n; i++) {cin >> rank; ranks[rank]++;}
    int count = 0,training=0;
    do{
        count = 0;
        training++;
        for(int i=k-1; i >= 0; i--) {
            if(ranks[i] == 0) continue;
            count+=ranks[i];
            ranks[i]--;
            ranks[i+1]++;
        }
    }while(count != 0);
    cout << training-1 << endl;
    return 0;
}