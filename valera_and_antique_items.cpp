#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, v;
    cin >> n >> v;
    int count = 0, flag, seller, price;
    vector<int> sellers;
    for(int i=0; i < n; i++) {
        flag = 0;
        cin >> seller;
        while(seller--) {
            cin >> price;
            if(flag == 1) continue;
            if(price < v) {
                sellers.push_back(i+1); 
                flag =1;
                count++;
            }
        }
    }
    printf("%d\n", count);
    for(int i=0; i < sellers.size(); i++) cout << sellers[i] << " ";
    cout << endl;
    return 0;
}