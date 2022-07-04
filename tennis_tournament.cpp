#include <iostream>

using namespace std;

int main(){
    int n, b, p;
    cin >> n >> b >> p;
    int towels = n*p;
    int bottles = 0;
    int rem = 0;
    while(n > 0) {
        rem = rem + n%2;
        n/=2;
        if(rem == 2) {n+=1; rem = 0;}
        bottles += n*(b*2+1);
        // cout << n << " " <<  rem  << " " << bottles << endl;
    }
    printf("%d %d\n", bottles, towels);
    return 0;
}