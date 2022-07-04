#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string pattern;
    cin >> pattern;
    vector<int> pi(n+1, 0);
    string extra="#";
    extra.append(pattern);
    int i=1, j = 2;
    while(j < n+1) {
        if(extra[j] == extra[i]) {pi[j]=i; i++; j++;}
        else {
            if(i==1) j++;
            else i = pi[i-1]+1;
        }
    }
    
    string result = "";
    int last = pi[n];
    if(last == 0) for(int i=0; i < k; i++) result.append(pattern);
    else {
        for(int i=0; i < k; i++) result.append(pattern.substr(0, n-last));
        result.append(pattern.substr(n-last));
    }
    cout << result << endl;
}