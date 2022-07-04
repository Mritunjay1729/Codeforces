#include <iostream>

using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    
    int t;
    cin >> t;
    int n;
    string str1, str2;
    while(t--) {
        cin >> n; 
        cin >> str1 >> str2;
        if(str1.compare(str2) == 0) cout << "YES" << endl;
        else {
            int flag = 0;
            for(int i=0; i < n-1; i++) {
                if(str1[i] == str2[i]) continue;
                else {
                    if(str1[i] == 'a' && str2[i] == 'b') {
                        int j = i+1;
                        while(j < n && str1[j] == 'a') j++;
                        if(j == n || str1[j] != 'b') {flag = 1; break;}
                        else swap(str1[i], str1[j]);
                    }else if(str1[i] == 'b' && str2[i] == 'c') {
                        int j = i+1;
                        while(j < n && str1[j] == 'b') j++;
                        if(j == n || str1[j] !='c') {flag = 1; break;}
                        else swap(str1[i], str1[j]);
                    }
                }
            }
            // cout << str1 << endl;
            if(flag == 1) cout << "NO" << endl;
            else if(str1.compare(str2) == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}