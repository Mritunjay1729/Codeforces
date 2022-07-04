#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 0;
    vector<int> res_front, res_last;
    int i=0, j = str.length()-1;
    while(str[i] != '(') i++;
    while(str[j] != ')') j--;
    while(i < j) {
        if(str[i] == '(' && str[j] == ')') {
            res_front.push_back(i++);
            res_last.push_back(j--);
        } else {
            count++;
            while(i < j && str[i] != '(') i++;
            while(i < j && str[j] != ')') j--;
        }
    }

    if(res_front.size() == 0) printf("%d\n", 0);
    else {
        printf("%d\n", 1);
        cout << 2*res_front.size() << endl;
        for(int i=0; i < res_front.size(); i++) cout << res_front[i]+1 << " ";
        for(int i=res_last.size()-1; i >= 0; i--) cout << res_last[i]+1 << " ";
        cout << endl;
    }
    return 0;
}