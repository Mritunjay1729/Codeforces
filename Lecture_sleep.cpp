#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> equations(n);
    vector<int> sleep(n);
    for(int i=0; i < n; i++) cin >> equations[i];
    for(int i=0; i < n; i++) cin >> sleep[i]; 
    int sum = 0, max_sum = 0;
    int l=0;
    for(int i=0; i < k; i++) sum+=(!sleep[i])*equations[i];
    max_sum = sum;
    for(int i=k; i < n; i++) {
        sum-=(!sleep[i-k])*equations[i-k];
        sum+=(!sleep[i])*equations[i];
        // cout << sum << " ";
        if(sum > max_sum) {
            max_sum = sum;
            l = i-k+1;
        }
    }
    // cout << endl;
    sum = 0;
    // cout << l << " " << l+k << " "  << max_sum << endl;
    for(int i=0; i < l; i++) sum+=sleep[i]*equations[i];
    for(int i=l+k; i < n; i++) sum+=sleep[i]*equations[i];
    for(int i=l; i<l+k; i++)  sum+=equations[i]; 
    printf("%d\n", sum);   
    return 0;
}