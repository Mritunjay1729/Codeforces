#include <iostream>
#include <vector>

using namespace std;

int prime[] = {2, 3, 5, 7, 11, 13, 17, 23, 29, 31};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> num;
    int sum = 0;
    for(int i=0; i < n; i++) {sum+=str[i]-'0'; num.push_back(sum);}
    for(int i=0; i < 10; i++) {
        if(sum%prime[i] == 0) {
            int alpha = sum/prime[i], k=1;
            for(int j=0; j < n; j++) {
                if(num[j] == k*alpha) k++;
            }
            if(k == prime[i]+1) {cout << "YES\n"; exit(0);}
        }
    }
    cout << "NO\n";
    return 0;
}