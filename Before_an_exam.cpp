#include <iostream>
#include <vector>
#define pr pair<int, int>

using namespace std;

int main() {
    int d, sumTime;
    cin >> d >> sumTime;
    vector<pr> dayTime;
    int l, r;
    for(int i=0; i < d; i++) {
        cin >> l >> r;
        dayTime.push_back({l ,r});
    }

    for(int i=0; i < d; i++) {
        if(sumTime < dayTime[i].first) {cout << "NO" << endl; exit(0);}
        sumTime-=dayTime[i].first;
    }
    for(int i=0; i < d; i++) {
        if(sumTime == 0) break;
        if(sumTime >= dayTime[i].second-dayTime[i].first) {
            sumTime-=dayTime[i].second-dayTime[i].first;
            dayTime[i].first = dayTime[i].second;
        }else{
            dayTime[i].first += sumTime;
            sumTime=0;
        }
    }

    if(sumTime > 0) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i=0; i < d; i++) cout << dayTime[i].first << " ";
        cout << endl;
    }
    return 0;
}