#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    string str;
    cin >> str;
    vector<int> count;
    int i=0, n = str.length(); 
    while(str[i] == 'b') i++;
    if(i == n) {cout << 0 << endl; exit(0);}
    int cnt = 1;
    i++;
    while(i < n) {
        if(str[i] == str[i-1]) cnt++;
        else {
            count.push_back(cnt);
            cnt = 1;
        }
        i++;
    }
    count.push_back(cnt);

    // for(auto cnt : count) cout << cnt << " ";
    // cout << endl;
    ll result = 0;
    i = count.size()-count.size()%2-2;
    ll a=0, b = 0, t;
    while(i >= 0) {
        t = 0;
        a = count[i];
        b=(b+count[i+1])%(ll)(10E8+7);
        while(a > 0) {
            result = (result+b)%(ll)(10E8+7);
            b = (b*2)%(ll)(10E8+7);
            a--;
        }
        i-=2;
    }
    cout << result << endl;
    return 0;
}