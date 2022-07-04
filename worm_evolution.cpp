#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> arr;
    map<int, vector<int>> indices;
    for(int i=0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
        indices[num].push_back(i+1);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int i, j, k;
    for(i=0; i < n-1; i++) {
        j = i+1, k = n-1;
        while(j < k) {
            if(arr[j]+arr[k] == arr[i]) {
                int r, s, t;
                r = indices[arr[i]][indices[arr[i]].size()-1];
                indices[arr[i]].pop_back();
                s = indices[arr[j]][indices[arr[j]].size()-1];
                indices[arr[j]].pop_back();
                t = indices[arr[k]][indices[arr[k]].size()-1];
                indices[arr[k]].pop_back();
                printf("%d %d %d\n", r, s, t); exit(0);}
            else if(arr[j]+arr[k] < arr[i]) k--;
            else j++;
        }
    }
    printf("%d\n", -1);
    return 0;
}