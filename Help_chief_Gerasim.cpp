#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    int sum = 0;
    vector<int> arr(n);
    for(int i=0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum%n == 0) sum/=n;
    else {cout << "Unrecoverable configuration." << endl; exit(0);}
    vector<int> indices;
    int count = 0;
    for(int i=0; i < n; i++) {
        if(arr[i] != sum) {
            count++; indices.push_back(i);}
    }
    if(count == 0) cout << "Exemplary pages." << endl;
    else if(count > 2) cout << "Unrecoverable configuration." << endl;
    else {
        if(arr[indices[0]] > arr[indices[1]]) swap(indices[0], indices[1]);
        printf("%d ml. from cup #%d to cup #%d.\n", sum-arr[indices[0]], indices[0]+1, indices[1]+1);
    }
    return 0;
}