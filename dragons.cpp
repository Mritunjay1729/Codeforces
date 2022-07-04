#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int s, d;
    cin >> s >> d;
    map<int, vector<int>> dragons;
    int sd, b;
    while(d--)  {
        cin >> sd >> b;
        dragons[sd].push_back(b);
    }       
    for(auto dragon : dragons) {
        for(int i=0; i < dragon.second.size(); i++) {   
            if(s <= dragon.first) {printf("NO\n"); exit(0);}
            s+=dragon.second[i];
        }
    }
    printf("YES\n");
    return 0;
}