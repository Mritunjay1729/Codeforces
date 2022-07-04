#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) cin >> arr[i];
    vector<int> positives, negatives;
    int pos =0, neg = 0;
    for(int i=0; i < n; i++) {
        if(arr[i] > 0) {
            if(arr[i]%2 == 1) positives.push_back(i);
            arr[i]/=2;
            pos+=arr[i];
        } else {
            if(arr[i]%2 == -1) negatives.push_back(i);
            arr[i]/=2;
            neg+=arr[i];
        }
    }

    // for(auto neg : negatives) cout << neg << " ";
    // cout << endl;
    // for(auto pos : positives) cout << pos << " ";
    // cout << endl;
    if(pos > -neg) {
        int i=0;
        while(i < negatives.size() && pos != -neg) {
            neg--;
            arr[negatives[i]]--;
            i++;
        }
    } else if(-neg > pos) {
        int i=0;
        while(i < positives.size() && pos != -neg) {
            pos++;
            arr[positives[i]]++;
            i++;
        }
    }
    for(auto num : arr) cout << num << " ";
    cout << endl;
    return 0;
}