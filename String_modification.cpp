#include <iostream>
#include <vector>

using namespace std;

string reverse(string str) {
    string rev = "";
    int i = 0, j = str.length()-1;
    while(j >= i) {
        rev.push_back(str[j]);
        j--;
    }
    return rev;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, n;
    cin >> t;
    int min;
    char min_chr;
    string str, res;
    vector<int> min_index;
    while(t--) {
        min_index.clear();
        min_chr = 'z';
        cin >> n >> str;
        for(int i=0; i < n; i++) {
            if(str[i] < min_chr) {
                min_chr = str[i];
            }
        }

        for(int i=0; i < n; i++) {
            if(str[i] == min_chr) min_index.push_back(i);
        }

        res = "";
        int prev = 0;
        string res1, result = str;
        int count = 0;
        for(int i=0; i < min_index.size(); i++) {
            res = res + str.substr(prev, min_index[i]-prev);
            if(min_index[i]%2+n%2==1) res1 = reverse(res);
            else res1 = res;
            if(str.substr(min_index[i]) + res1 < result) {
                result = str.substr(min_index[i])+res1 ;
                count = min_index[i];
            }
            prev = min_index[i];
            // cout << res1 << " " << min_index[i] << endl;
        }
        cout << result << endl;
        cout << count+1 << endl;
    }
    return 0;
}