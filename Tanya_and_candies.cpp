#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    int left_n, left_o, right_n=0, right_o=0;
    left_n = left_o = 0;
    vector<int> arr(n);
    for(int i=0; i < n; i++) {
        cin >> arr[i];
        if(i%2==0) right_o+=arr[i];
        else right_n+=arr[i];
    }
    
    int equal = 0;
    for(int i=0; i < n; i++) {
        if(i%2==0) right_o-=arr[i];
        else right_n-=arr[i];
        // cout << arr[i] << " " << left_n << " " << left_o << " " << right_n << " " << right_o << endl;
        if(left_n+right_n == left_o+right_o) equal++;
        // cout << left_n << " " << left_o << " " << arr[i] << endl;
        if(i%2 == 0) left_n+=arr[i];
        else left_o+=arr[i];
    }
    printf("%d\n", equal);
    return 0;
}