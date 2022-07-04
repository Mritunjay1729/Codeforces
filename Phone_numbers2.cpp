#include <iostream>
#include <vector>
#include <map>

using namespace std;

int checkType(string str) {
    string phone;
    for(int i=0; i < str.length(); i++) {if(str[i] != '-') phone.push_back(str[i]);}
    int type = 0;
    for(int i=1; i < phone.length(); i++) {
        if(phone[i] != phone[i-1] && type == 0) {
            if(i == 1) type = 1;
            else type = 2; 
        }else if(phone[i] >= phone[i-1] && type == 1) type = 2;
    }
    return type;
}

int main() {
    int n;
    cin >> n;
    int m, type;
    string name;
    vector<vector<int>> phones(n, vector<int>(3));
    int taxi = 0, pizza = 0, girls = 0, t, p, g;
    string phn;
    map<int, string> names;
    for(int k=0; k <n; k++) {
        cin >> m >> name;
        t = p = g = 0;
        for(int i=0; i < m; i++) {
            cin >> phn;
            type = checkType(phn);
            if(type == 0) t++;
            else if(type == 1) p++;
            else g++;
        }
        taxi = max(t, taxi);
        pizza = max(p, pizza);
        girls = max(g, girls);
        phones[k] = {t, p, g};
        names[k] = name;
    }

    vector<string> ftaxi, fpizza, fgirls;
    for(int i=0; i < n; i++) {
        if(phones[i][0] == taxi) ftaxi.push_back(names[i]);
        if(phones[i][1] == pizza) fpizza.push_back(names[i]);
        if(phones[i][2] == girls) fgirls.push_back(names[i]);
    }
    
    cout << "If you want to call a taxi, you should call: ";
    for(int i=0; i < ftaxi.size(); i++) {
        cout << ftaxi[i];
        if(i == ftaxi.size()-1) cout << "." << endl;
        else cout << ", ";
    }
    cout << "If you want to order a pizza, you should call: ";
     for(int i=0; i < fpizza.size(); i++) {
        cout << fpizza[i];
        if(i == fpizza.size()-1) cout << "." << endl;
        else cout << ", ";
    }   
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i=0; i < fgirls.size(); i++) {
        cout << fgirls[i];
        if(i == fgirls.size()-1) cout << "." << endl;
        else cout << ", ";
    }    
    return 0;
}