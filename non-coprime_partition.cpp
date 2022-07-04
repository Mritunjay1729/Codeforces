#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n==1 || n==2) printf("No");
    else {
        printf("Yes\n");
        printf("%d ", n/2);
        for(int i=2; i <= n; i+=2) printf("%d ", i);
        printf("\n%d ", (n+1)/2);
        for(int i=1; i <= n; i+=2) printf("%d ", i);
        cout << endl;
    }
}