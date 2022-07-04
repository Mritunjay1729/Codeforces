#include <iostream>

using namespace std;

int main() {
    string curr, last;
    cin >> curr >> last;
    int curr_hr = stoi(curr.substr(0, 2)), curr_min = stoi(curr.substr(3, 2));
    int last_hr = stoi(last.substr(0, 2)), last_min = stoi(last.substr(3, 2));
    if(curr_hr > last_hr || (curr_hr == last_hr && curr_min >= last_min)) {
        int hr = curr_hr-last_hr;
        int min;
        if(curr_min >= last_min) min = curr_min-last_min;
        else {hr--; min = 60-(last_min-curr_min);}
        if(hr < 10) cout << "0" << hr;
        else cout << hr;
        cout << ":";
        if(min < 10) cout << "0" << min;
        else cout << min;
        cout << endl;
    }else{
        int hr = 24-(last_hr-curr_hr);
        int min;
        if(last_min > curr_min) {min = 60-last_min+curr_min; hr--;}
        else min=curr_min-last_min;
        if(min >= 60) {min%=60; hr+=1;}
        if(hr < 10) cout << "0" << hr;
        else cout << hr;
        cout << ":";
        if(min < 10) cout << "0" << min;
        else cout << min;
        cout << endl;
    }
    return 0;
}