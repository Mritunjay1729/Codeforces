#include <iostream>

using namespace std;

int main(){
    /* n = the number of cakes needed, 
    t = the time needed for one oven to bake k cakes, 
    k = the number of cakes baked at the same time, 
    d = the time needed to build the second oven.*/
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    n=n/k+(n%k!=0);
    int left_cakes = n-d/t;
    left_cakes = left_cakes/2 + left_cakes%2;
    if(n*t <= d+left_cakes*t) printf("NO\n");
    else printf("YES\n");
    return 0;
}