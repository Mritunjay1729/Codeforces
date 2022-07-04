#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    set<int> arr;
    for(int i=0; i < n; i++) {cin >> num; arr.insert(num);}
    if(arr.size() == 1) printf("%d\n", 0);
    else if(arr.size() == 2) {
        int a[2], i=0;
        for(auto num : arr) a[i++]=num;
        if((a[0]+a[1])%2==0) printf("%d\n", (a[0]+a[1])/2-a[0]);
        else printf("%d\n", abs(a[1]-a[0])); 
    } else if (arr.size() == 3) {
        int a[3], i=0;
        for(auto num : arr) a[i++] = num;
        if(a[0] > a[1]) swap(a[0], a[1]);
        if(a[1] > a[2]) swap(a[1], a[2]);
        if(a[0] > a[2]) swap(a[0], a[2]);
        if(2*a[1] == a[0]+a[2]) printf("%d\n", a[1]-a[0]);
        else printf("%d\n", -1);
    } else {
        printf("%d\n", -1);
    }
    return 0;
}