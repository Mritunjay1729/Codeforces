#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> planes(n);
    for(int i=0; i < n; i++) cin >> planes[i];
    sort(planes.begin(), planes.end(), greater<int>());
    int min_cost = 0, k =  m;
    for(int i=n-1; i >= 0; i--) {
        if(k >= planes[i]) {
            min_cost+=(planes[i]*(planes[i]+1))/2;
            k-=planes[i];
        }else{
            k = planes[i]-k;
            min_cost+=(planes[i]*(planes[i]+1))/2 - (k*(k+1))/2;
            break;
        }
    }

    planes.push_back(0);
    int max_cost = 0, i = 0, flag = 0;
    k = m;
    while(k > 0) {
        if(planes[i] > planes[i+1]) {
            while(planes[i] > planes[i+1]) {
                for(int j=0; j <= i; j++) {
                    max_cost+=planes[j];
                    planes[j]--;
                    k--;
                    if(k == 0) {flag = 1; break;}
                }
                if(flag == 1) break;
            }
        }
        i++;
        if(flag == 1) break;
    }

    cout << max_cost << " " << min_cost << endl;
    return 0;
}