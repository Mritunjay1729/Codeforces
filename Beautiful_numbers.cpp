#include <bits/stdc++.h>
using namespace std;


//Time Limit Exceeded
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    int n, num, sum;
    int arr[200001], sum_arr[200001], index[200001];
    char result[200000];
    int flag, required;
    while(t--) {
        cin >> n;
        arr[0] = -11;
        sum_arr[0] = 0;
        sum = 0;
        memset(result, n+1, '?');
        for(int i=1; i <= n; i++) {
            cin >> num; 
            sum+=num;
            index[num] = i;
            arr[i] = num;
            sum_arr[i] = sum;
        }

        for(int i=1; i < n+1; i++) {
            flag = 0;
            if(arr[i] == 1) {result[arr[i]-1]='1';}
            else {
                required = (arr[i]*(arr[i]+1))/2;
                // cout << required << endl;
                for(int j=i; j<=min(n, i+arr[i]); j++) {
                    // cout << arr[j-arr[i]] << " " << arr[j] << " ";
                    if(j-arr[i] < 0) continue;
                    else if(sum_arr[j]-sum_arr[j-arr[i]] == required) {
                        flag = 1;
                        break;
                    }
                }
                // cout << endl;
                if(flag == 0) result[arr[i]-1] = '0';
                else result[arr[i]-1] = '1';
            }
        }
        for(int i=0; i < n; i++) cout << result[i];
        cout << endl;
    }
    return 0;
}