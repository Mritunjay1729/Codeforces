#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string emotions = "", start, end;
    start = "I hate "; end = "I love ";
    for(int i=1; i <= n; i++) {
        if(i%2==1) emotions.append(start);
        else emotions.append(end);
        if(i < n) emotions.append("that ");
    }
    emotions.append("it");
    cout << emotions << endl;
    return 0;
}