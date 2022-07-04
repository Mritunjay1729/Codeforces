#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int sum = 0, time;
    for(int i=0; i < n; i++) {
        cin >> time;
        sum+=10+time;
    }
    sum-=10;
    if(sum > d) printf("%d\n", -1);
    else printf("%d\n", 2*(n-1) + (d-sum)/5); 
    return 0;
}