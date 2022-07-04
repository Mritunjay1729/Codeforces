#include <iostream>

using namespace std;

int main() {
    string palindrome;
    cin >> palindrome;
    int n = palindrome.length();
    int target = -1, count = 0;
    int i=0, j = n-1, flag = 0;
    while(i < j) {
        if(palindrome[i] == palindrome[j]) {i++, j--;}
        else {
            count++;
            if(flag == 0 && j > i+1 && palindrome[i] == palindrome[j-1]) {
                flag = 1;
                target = j;
                j--;
            }else if(i < j-1 && palindrome[i+1] == palindrome[j] && (flag == 0 || flag == 2)) {
                flag = 3;
                target = i;
                i++;
            }else if(i+1 == j && count == 1) {target = i; i++;}
            else if(flag == 1) {flag = 2; i=n-target-1; j=target;} 
            else {cout << "NA" << endl; exit(0);}
        }
    }
    // cout << target << endl;
    if(count == 0) {
        if(n%2 == 0) cout << palindrome.substr(0, n/2) << "a" << palindrome.substr(n/2) << endl;
        else cout << palindrome.substr(0, (n+1)/2) << palindrome[n/2] << palindrome.substr((n+1)/2) << endl;
    }else{
        if(target <= n/2) cout << palindrome.substr(0, n-target)  << palindrome[target] << palindrome.substr(n-target) << endl;
        else  cout << palindrome.substr(0, n-target-1)  << palindrome[target] << palindrome.substr(n-target-1) << endl;
    }
    return 0;
}