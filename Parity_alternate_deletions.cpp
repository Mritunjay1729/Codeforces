#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> even, odd;
    int num;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num%2) odd.push_back(num);
        else even.push_back(num);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    int sum = 0;
    if(even.size() >= odd.size()-1 && even.size() <= odd.size()+1) sum = 0;
    else if(even.size() > odd.size()+1) {
        for(int i=0; i < even.size()-odd.size()-1; i++) sum+=even[i];
    }else{
        for(int i=0; i < odd.size()-even.size()-1; i++) sum+=odd[i];
    }
    cout << sum << endl;
    return 0;
}