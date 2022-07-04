#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, s, d;
    cin >> n >> s >> d;
    string flights;
    cin >> flights;
    if(flights[s-1] == flights[d-1]) printf("%d\n", 0);
    else printf("%d\n", 1);
    return 0;
}