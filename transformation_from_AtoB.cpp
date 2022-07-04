#include <iostream>
#include <vector>

using namespace std;

int main() {
    int start, target;
    cin >> start >> target;
    int temp = target, k;
    vector<int> path; //0 for 2*x, 1 for 10*x+1
    while(temp > start) {
        if((temp-1)%10 == 0) {
            temp = (temp-1)/10;
            path.push_back(1);
        }else if(temp%2 == 0) {
            temp/=2;
            path.push_back(0);
        }else {
            printf("NO\n");
            exit(0);
        }
    }
    if(temp != start) {printf("NO\n"); exit(0);}
    cout << "YES\n" << path.size()+1 << endl;
    cout << start << " ";
    for(int i=path.size()-1; i >= 0; i--) {
        if(path[i] == 0) start*=2;
        else start = start*10+1;
        cout << start << " ";
    }
    return 0;
}