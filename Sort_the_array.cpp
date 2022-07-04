#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &arr, int i, int j) {
    while(i < j) {
        swap(arr[i], arr[j]);
        i++, j--;
    }
}

int main() {
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    if(n == 1) {cout << "yes" << endl; cout << 1 << " " << 1 << endl; exit(0);}
    int i=0;
    while(i < n-1 && arr[i] < arr[i+1]) i++;
    int j = n-1;
    while(j > 0 && arr[j] > arr[j-1]) j--;
    reverse(arr, i, j);
    for(int i=1; i < n; i++) {
        if(arr[i] < arr[i-1]) {cout << "no" << endl; exit(0);}
    }
    cout << "yes" << endl;
    if(j < i) cout << j+1 << " " << j+1 << endl;
    else cout << i+1 << " " << j+1 << endl;
    return 0;
}