#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, time;
    cin >> n >> m;
    int correct_min = INT32_MAX, correct_max=0, wrong_min=INT32_MAX;
    while(n--) {
        cin >> time;
        if(time > correct_max) correct_max = time;
        if(time < correct_min) correct_min = time;
    }
    int time_limit ;
    if(2*correct_min < correct_max) time_limit = correct_max;
    else time_limit = 2*correct_min;

    while(m--) {
        cin >> time;
        if(time < wrong_min) wrong_min = time;
    }
    if(time_limit < wrong_min) printf("%d\n", time_limit);
    else printf("-1\n");
    return 0;
}