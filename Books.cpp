#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> books(n);
    for(int i=0; i < n; i++) cin >> books[i];
    int max_books=0, time;
    int i=0;
    for(i=0; i < n; i++) {
        if(time+books[i] > t) break;
        else time+=books[i];
    }
    max_books = i;
    int j = i;
    i = 0;
    while(j < n) {
        if(j == i) j++;
        else time-=books[i];
        i++;
        while(j < n && books[j]+time <= t) {time+=books[j]; j++;}
        max_books=max(max_books, j-i);
    }
    max_books=max(max_books, j-i);
    cout << max_books << endl;
    return 0;
}