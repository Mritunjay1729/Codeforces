#include <iostream>
 
using namespace std;
 
int main() {
    int t, num;
    cin >> t;
    while(t--) {
        cin >> num;
        if(num <= 1399) printf("Division 4\n");
        else if(num <= 1599) printf("Division 3\n");
        else if(num <= 1899) printf("Division 2\n");
        else printf("Division 1\n");
    }
    return 0;
}