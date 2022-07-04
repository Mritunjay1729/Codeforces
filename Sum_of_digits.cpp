#include <iostream>

using namespace std;

int main() {
    string number;
    cin >> number;
    int sum = 0, count = 0;
    if(number.length() > 1) count++;
    for(int i=0; i < number.length(); i++) {sum+=number[i]-'0';}
    int n;
    while(sum >= 10) {
        count++;
        n = sum;
        sum = 0;
        while(n > 0) {
            sum+=n%10;
            n/=10;
        }
    } 
    cout << count << endl;
    return 0;
}