#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, report;
    cin >> n;
    int neg = 0, record = 0, count = 0;
    vector<int> sep;
    while(n--) {
        cin >> report;
        if(report < 0) neg++;
        if(neg == 3)  {
            sep.push_back(count);
            record++;
            neg = 1;
            count = 0;
        }
        count++;
    }
    if(count != 0) sep.push_back(count);
    printf("%d\n", record+1);
    for(auto num : sep) printf("%d ", num);
    cout << endl;
    return 0;
}