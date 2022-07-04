#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n, k, type=0, cnt;
    string pattern;
    char prev;
    vector<int> count;
    while(t--) {
        cin >> n >> k;
        cin >> pattern;
        cnt = 1;
        if(pattern[0] == 'W') type = -1;
        else type = 1;
        prev = pattern[0];
        for(int i=1; i < n; i++) {
            if(pattern[i] == prev) cnt++;
            else {
                count.push_back(cnt*type);
                if(pattern[i] == 'W') type = -1;
                else type = 1;
                cnt = 1;
            }
            prev = pattern[i];
        }
        count.push_back(cnt*type);
        int sum, white;
        int max_sum = 0, min_white = INT32_MAX;
        for(int i=0; i < count.size(); i++) {
            sum = white = 0;
            for(int j=0; j <= i; j++) {
                sum+=abs(count[i]);
                white+=(count[i]<0?-count[i]:0);
                if(sum>=k && white < min_white) {
                    max_sum = sum;
                    min_white = white;
                    sum = white = 0;
                }
            }
        }
        cout << min_white << endl;
    }
    return 0;
}