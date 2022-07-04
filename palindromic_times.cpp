#include <iostream>

using namespace std;

int main() {
    string time;
    cin >> time;
    string hr, hr_rev, min;
    hr = time.substr(0, 2);
    min = time.substr(3, 2);
    if(hr >= "06" && hr < "10") {printf("10:01\n");}
    else if(hr == "15" && min >= "51") {printf("20:02\n");}
    else if(hr >= "16" && hr < "20") printf("20:02\n");
    else if(hr == "23" && min >= "32") {printf("00:00\n");}
    else {
        hr_rev.push_back(hr[1]);
        hr_rev.push_back(hr[0]);
        if(hr_rev > min) cout << hr << ":" << hr_rev << endl;
        else {
            hr[1] = hr[1]+1;
            hr_rev[0] = hr_rev[0]+1;
            cout << hr << ":" << hr_rev << endl;
        }
    }
    return 0;
}