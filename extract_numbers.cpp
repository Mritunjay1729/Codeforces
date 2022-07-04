#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;
    vector<string> numbers, others;
    string res ="";
    int flag = 0;
    for(int i=0; i < str.length(); i++) {
        if(str[i] == ',' || str[i] == ';') {
            if(flag == 1) {
                if(res[0] != '0' || res.length()==1) numbers.push_back(res);
                else others.push_back(res);
            }else others.push_back(res);
            res = "";
            flag = 0;
        } else {
            if(str[i] >= '0' && str[i] <= '9' && 
            (i == 0 || str[i-1] == ';' || str[i-1] == ',')) flag = 1;
            else if(flag == 1 && (str[i] < '0' || str[i] >'9')) flag = 0;
            res.push_back(str[i]); 
        }
    }
    if(flag == 1) {
        if(res[0] != '0' || res.length()==1) numbers.push_back(res);
        else others.push_back(res);
    }else others.push_back(res);
    string result = "\"";
    if(numbers.size() == 0) cout << "-" << endl;
    else {

        for(int i=0; i < numbers.size()-1; i++) {result.append(numbers[i]); result.push_back(',');}
        result.append(numbers[numbers.size()-1]);
        result.push_back('\"');
        cout << result << endl;
    }
    result = "\"";
    if(others.size() == 0) cout << "-" << endl;
    else {

        for(int i=0; i < others.size()-1; i++) {result.append(others[i]); result.push_back(',');}
        result.append(others[others.size()-1]);
        result.push_back('\"');
        cout << result << endl;
    }
    return 0;
}