#include <iostream>

using namespace std;

int main() {
    int n, m, grp_count;
    cin >> n >> m;
    int number_of_buses = 0, count= 0;
    for(int i=0; i < n; i++) {
        cin >> grp_count;
        if(count + grp_count <= m) count+=grp_count;
        else {
            number_of_buses++;
            count = grp_count;
        }
    }
    printf("%d\n", number_of_buses+1);
    return 0;
}