#include <iostream>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    int even_count = 0, odd_count = 0;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num%2 == 0) even_count++;
        else odd_count++;
    }
    cout << min(even_count, odd_count);
    return 0;
}