#include <iostream>
#include <vector>

using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    vector<int> dancers(d+1, -1);
    int x, y, z;
    for(int i=0; i < n; i++) {
        cin >> x >> y >> z;
        if(dancers[x]+dancers[y]+dancers[z] == -3) {
            dancers[x] = 1;
            dancers[y] = 2;
            dancers[z] = 3;
        }else if(dancers[x]+dancers[y] >=3) dancers[z] = 6-dancers[x]-dancers[y];
        else if(dancers[y]+dancers[z] >=3) dancers[x] = 6-dancers[y]-dancers[z];
        else if(dancers[z]+dancers[x] >=3) dancers[y] = 6-dancers[z]-dancers[x];
        else if(dancers[x] != -1 ){
            dancers[y] = dancers[x]+1; if(dancers[y] > 3) dancers[y]%=3;
            dancers[z] = dancers[x]+2; if(dancers[z] > 3) dancers[z]%=3;
        }else if(dancers[y] != -1 ){
            dancers[z] = dancers[y]+1; if(dancers[z] > 3) dancers[z]%=3;
            dancers[x] = dancers[y]+2; if(dancers[x] > 3) dancers[x]%=3;
        }else if(dancers[z] != -1 ){
            dancers[x] = dancers[z]+1; if(dancers[x] > 3) dancers[x]%=3;
            dancers[y] = dancers[z]+2; if(dancers[y] > 3) dancers[y]%=3;
        }
    } 

    for(int i=1; i <= d; i++) cout << dancers[i] << " ";
    cout << endl;
    return 0;
}