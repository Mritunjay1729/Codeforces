#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<int> alphabets(26, -1);
    string str;
    cin >> str;
    if(str.length() < 26) {cout << -1 << endl; exit(0);}
    int count = 0, start = 0, length, flag = 0;
    for(ll i=0; i < str.length(); i++) {
        if(i-start == 26) {flag = 1; break;}
        if(str[i] != '?' && alphabets[str[i]-'A']!=-1) {
            // cout << str[i] << " " <<  i << " " << alphabets[str[i]-'A'] << endl;
            int begin = start;
            start = alphabets[str[i]-'A']+1;
            for(int i=begin; i < start; i++) if(str[i] != '?') alphabets[str[i]-'A'] = -1;
            alphabets[str[i]-'A'] = i;
        } else if(str[i] == '?'){
            continue;
        } else {
            alphabets[str[i]-'A'] = i;
        }
    }
    if(str.length()-start == 26) {flag = 1;}
    // cout << start << " " << flag << endl;
    // for(int i=0; i < alphabets.size(); i++) printf("(%c, %d) ", 'A'+i, alphabets[i]);
    // cout << endl;
    if(flag == 1) {
        for(int i=0; i < start; i++) if(str[i] == '?') str[i] = 'A';
        int end = start+26, j= 0;
        while(j < 26 && alphabets[j] != -1) j++;
        while(start < end) {
            if(str[start] != '?') {start++; continue;}
            str[start] = 'A'+j;
            alphabets[j] = j;
            while(j < 26 && alphabets[j] != -1) j++;
            start++;           
        }
        for(int i=start; i < str.length(); i++) if(str[i] == '?') str[i] = 'B';
        cout << str << endl;
    }else{
        cout << "-1" << endl;
    }
    return 0;
}