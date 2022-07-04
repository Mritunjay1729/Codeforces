#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> arr;
    int mn, mx;
    mx = 0, mn = 101;
    for(int i=0; i <n; i++) {
        cin >> num; 
        arr.push_back(num);
        if(mn > num) mn = num;
        if(mx < num) mx = num;
    }
    // if(n == 1) {
    //     if(arr[0] < 1000) printf("%d %d\n", arr[0]+1, 0);
    //     else if(arr[0] > 1) printf("%d %d\n", arr[0]-1, 0);
    //     exit(0);
    // }
    // if(mn == mx) {
    //     if(mn < 1000) printf("%d %d\n", mn+1, 0);
    //     else if(mn > 1) printf("%d %d\n", mn-1, 0);
    //     exit(0);
    // }
    // int min_cost = INT32_MAX, t, cost, abs_cost;
    // int l = mn, r = mx, mid;
    // while(l < r) {
    //     cost = abs_cost = 0;
    //     mid = (l+r)/2;
    //     for(int i=0; i<arr.size(); i++) {
    //         cost+=mid-arr[i]; 
    //         abs_cost+=min(abs(mid-arr[i]), min(abs(mid-arr[i]+1), abs(mid-arr[i]-1)));
    //     }
    //     if(abs_cost < min_cost) {min_cost = abs_cost; t = mid;}
    //     // cout << mid << " " << cost << endl;
    //     if(cost < cost/n) l = mid+1;
    //     else r = mid-1;
    // }

    // int range = n/10;
    int abs_cost, min_cost = INT32_MAX, t;
    for(int i=mn; i<=mx; i++) {
        abs_cost = 0;
        for(int j=0; j<arr.size(); j++) {
            abs_cost+=min(abs(i-arr[j]), min(abs(i-arr[j]+1), abs(i-arr[j]-1)));
        }
        if(abs_cost < min_cost) {min_cost = abs_cost; t = i;}
    }
    printf("%d %d\n",  t, min_cost);
    return 0;
}