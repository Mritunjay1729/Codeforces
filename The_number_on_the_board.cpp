#include <iostream>
#include <map>

using namespace std;

int main() {
    int k;
    string str;
    cin >> k >> str;
    int sum = 0;
    map<int, int> digits;
    for(int i=0; i < str.length(); ++i) {
        sum += str[i]-'0';
        digits[str[i]-'0']++;
    }
    if(k <= sum) {printf("0\n"); exit(0);}
    int count = 0;
    for(auto digit : digits) {
        if(sum+(9-digit.first)*digit.second < k) {
            count+=digit.second;
            sum-=digit.first*digit.second;
            sum+=9*digit.second;
        } else {
            for(int i=1; i <= digit.second; i++) {
                if(sum+(9-digit.first)*i >= k) {
                    count += i;
                    printf("%d\n", count);
                    exit(0);
                }
            }
        }
    }
    return 0;
}