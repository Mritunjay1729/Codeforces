#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int is_prime(int n) {
    for(int i=2; i*i <= n; i++) {
        if(n%i == 0) return i;
    }
    return 0;
}

int main() {
    int n, num, k, flag = 0;
    cin >> n;
    vector<int> numbers;
    for(int i=0; i < n; i++) {cin >> num; numbers.push_back(num);}
    //sorted the numbers
    sort(numbers.begin(), numbers.end());

    //Special case to handle 1
    if(numbers[0] == 1) {printf("%d\n", 1); exit(0);}
    
    set<int> check;
    for(int i=0; i < n; i++) {
        k = is_prime(numbers[i]);
        // cout << numbers[i] << " : " << k << endl;
        if(!k && check.find(numbers[i]) == check.end()) {
            check.insert(numbers[i]);
        }else if(k) {
            flag = 0;
            for(int j=2; j < numbers[i]; j++) {
                if(numbers[i] % j == 0 && check.find(j) != check.end()) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) check.insert(numbers[i]);
        }
    }
    // for(auto num : check) printf("%d ", num);
    // cout << endl;
    printf("%ld\n", check.size());
    return 0; 
}