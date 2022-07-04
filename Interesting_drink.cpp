#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, money;
    cin >> n;
    vector<int> price(n);
    for(int i=0; i < n; i++) cin >> price[i];
    sort(price.begin(), price.end());
    int d, count;
    cin >> d;
    int i, j, mid, flag = 0;
    while(d--) {
        count = 0;
        flag = 1;
        cin >> money;
        i=0; j = n-1;
        while(i <= j) {
            mid = (i+j)/2;
            if(price[mid] <= money) {i = mid+1; flag = 1;}
            else j = mid-1;
        }
        if(flag == 1) printf("%d\n", i);
        else printf("%d\n", 0);
    }
    return 0;
}