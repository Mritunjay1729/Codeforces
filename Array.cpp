#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> pos, neg, zero;
    while(n--) {
        cin >> num;
        if(num > 0) pos.push_back(num);
        else if(num == 0) zero.push_back(num);
        else neg.push_back(num);
    }
    if(neg.size()%2==0) {zero.push_back(neg[neg.size()-1]); neg.pop_back();}
    if(pos.size() == 0) {
        pos.push_back(neg[neg.size()-1]);
        neg.pop_back();
        pos.push_back(neg[neg.size()-1]);
        neg.pop_back();
    }
    cout << neg.size() << " ";
    for(auto num : neg) cout << num << " ";
    cout << endl;

    cout << pos.size() << " "; 
    for(auto num : pos) cout << num << " "; 
    cout << endl;

    cout << zero.size() << " ";
    for(auto num : zero) cout << num << " "; 
    cout << endl;
    return 0;
}