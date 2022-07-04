#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    int coord, apples;
    map<int, int> left, right;
    for(int i=0; i < n; i++) {
        cin >> coord >> apples;
        if(coord > 0) right[coord] = apples;
        else left[-coord] = apples;
    }

    int collected_apples = 0;
    map<int, int> :: iterator itr1, itr2;
    for(itr1 = left.begin(), itr2 = right.begin(); 
        itr1 != left.end() && itr2 != right.end(); 
        itr1++, itr2++) {
            collected_apples += itr1->second + itr2->second;
    }
    if(itr1 != left.end()) collected_apples += itr1->second;
    if(itr2 != right.end()) collected_apples += itr2->second;
    printf("%d\n", collected_apples);
    return 0;
}