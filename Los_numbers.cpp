#include <iostream>
#include <map>
#include <vector>
#define pr pair<int, int>

using namespace std;

int ask(int a, int b) {
    int p;
    printf("? %d %d\n", a, b);
    cin >> p;
    return p;
}

int main() {
    map<int, pr> mp;
    map<int, int> pairs;
    int arr[] = {4, 8, 15, 16, 23, 42};
    for(int i=0; i < 5; i++) {
        for(int j= i+1; j < 6; j++) {
            mp[arr[i]*arr[j]] = {arr[i], arr[j]};
        }
    }
    
    int p;
    p = ask(1, 4);
    vector<int> result(6, -1);
    result[0] = mp[p].first;
    result[3] = mp[p].second;
    for(int i=0; i < 6; i++) if(arr[i] == mp[p].first || arr[i] == mp[p].second) arr[i]*=-1; 
    
    p = ask(2, 5);
    result[1] = mp[p].first;
    result[4] = mp[p].second;
    for(int i=0; i < 6; i++) if(arr[i] == mp[p].first || arr[i] == mp[p].second) arr[i]*=-1;
    
    for(int i=0; i < 6; i++) {
        if(arr[i] > 0) {
            if(result[2] == -1) {result[2] = arr[i]; arr[i]*=-1;}
            else {result[5] = arr[i]; arr[i]*=-1;}
        }
    }

    for(int i=0; i < 6; i++) arr[i]*=-1;
    p = ask(1, 2);
    if(result[0]*result[1] != p) {
        if(result[0]*result[4] == p) swap(result[1], result[4]);
        else if(result[3]*result[1] == p) swap(result[0], result[3]);
        else{
            swap(result[1], result[4]);
            swap(result[0], result[3]);
        }
    }

    p = ask(3, 4);
    if(result[2]*result[3] != p) {
        if(result[2]*result[0] == p) swap(result[0], result[3]);
        else if(result[3]*result[5] == p) swap(result[2], result[5]);
        else{
            swap(result[0], result[3]);
            swap(result[2], result[5]);
        }
    }

    cout << "! ";
    for(int i=0; i < 6; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    fflush(stdout);
    return 0;
}