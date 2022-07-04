#include <iostream>
#include <vector>
#define ll long long int
#define fl(start, n) for(int i=start; i < n; i++)
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

ll HCF(ll a, ll b) {
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return HCF(a%b, b);
    else if(b > a) return HCF(a, b%a);
    else return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, prev, count = 0;
    cin >> n;
    vector<ll> arr(n);
    cin >> arr[0];
    prev = arr[0];
    ll hcf = arr[0];
    fl(1, n) {
        cin >> arr[i];
        if(prev == arr[i]) count++;
        if(arr[i]%hcf!=0) hcf=HCF(hcf, arr[i]);
        prev = arr[i];
    }
    // cout << "HCF : " << hcf << endl;
    if(count == n-1) {printf("Yes\n"); exit(0);}
    if(hcf == 1) {
        fl(0, n) if(arr[i] != 0) {
            while(arr[i]%6==0) arr[i]/=6;
            while(arr[i]%2==0) arr[i]/=2;
            while(arr[i]%3==0) arr[i]/=3;
            if(arr[i] != 1) {printf("NO\n"); exit(0);}
        }
        printf("YES\n");
        exit(0);
    }
    fl(0, n) arr[i]/=hcf;
    fl(0, n) {
        if(arr[i] != 1) {
            while(arr[i]%6==0) arr[i]/=6;
            while(arr[i]%2==0) arr[i]/=2;
            while(arr[i]%3==0) arr[i]/=3;
            if(arr[i] != 1) {printf("NO\n"); exit(0);}
        }
    } 
    printf("Yes\n");
    return 0;
}
