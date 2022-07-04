#include <iostream>
#include <map>

using namespace std;

int main() {
    string num;
    cin >> num;
    int n = num.length();
    if((num[n-1]-'0')%2 == 1) {
        int i = 0;
        while(i < n-1 && ((num[i]-'0')%2 == 1 || (num[i]-'0')%2 == 0 && num[i] > num[n-1])) i++;
        if(i != n-1) {swap(num[n-1], num[i]); cout << num << endl; exit(0);}
        i = n-1;
        while(i >= 0 && (num[i]-'0')%2 == 1) i--;
        if(i != -1) {swap(num[i], num[n-1]); cout << num << endl; exit(0);}
        cout << -1 << endl;
    }else{
        map<int, int, greater<int>> digits; 
        int odd = 0, even = 0;
        for(int i=0; i < n; i++) {
            digits[num[i]-'0']++;
            if((num[i]-'0')%2==0) even++;
            else odd++;
        }
        if(even == 1) digits.erase(num[n-1]-'0');
        int i=0;
        for(auto &d : digits) {
            while(i < n && d.second > 0) {
                if(d.first == num[i]-'0') {d.second--; i++;}
                else{
                    int j = n-1;
                    while(j > 0 && num[j]-'0' != d.first) j--;
                    if(j == n-1) {while((num[i]-'0')%2 != 0) i++;}
                    swap(num[i], num[j]);
                    cout << num << endl;
                    exit(0);
                }
            }
        }
    }
    return 0;
}