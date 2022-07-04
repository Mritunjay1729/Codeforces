#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, bill;
    cin >> n;
    int twenty_five, fifty;
    twenty_five = fifty = 0;
    for(int i=0; i <n; i++) {
        cin >> bill;
        if(bill == 25) twenty_five++;
        else if(bill == 50) {
            if(twenty_five == 0) {printf("NO\n"); exit(0);}
            else {fifty++; twenty_five--;}
        } else {
            if(fifty > 0 && twenty_five > 0) {fifty--; twenty_five--;}
            else if(twenty_five >= 3) {twenty_five-=3;}
            else {printf("NO\n"); exit(0);}
        }
    }
    printf("YES\n");
    return 0;
}