#include <iostream>
#define ll long long int

using namespace std;

int main() {
    string balance;
    cin >> balance;
    ll left, right;
    left = right = 0;
    int pivot = 0;
    while(balance[pivot] != '^') pivot++;
    int i=pivot-1, j=pivot+1;
    while(i>=0) {
        if(balance[i] != '=') left+=(balance[i]-'0')*(pivot-i);
        i--;
    }
    while(j < balance.length()) {
        if(balance[j] != '=') right+=(balance[j]-'0')*(j-pivot);
        j++;
    }
    if(left == right) printf("balance\n");
    else if(left > right) printf("left\n");
    else printf("right\n");
    return 0;
}