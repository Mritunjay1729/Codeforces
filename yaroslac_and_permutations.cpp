#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    int n, num;
    cin >> n;
    map<int, int> frequency;
    for(int i=0; i < n; i++) {
        cin >> num;
        frequency[num]++;
    }
 
    int max_frequency = 0;
    for(auto num : frequency)  {
        // cout << num.first << " " << num.second << endl;
        max_frequency = max(max_frequency, num.second);
    }

    if(max_frequency <= (n+1)/2) printf("YES\n");
    else printf("NO\n");
    return 0;
}