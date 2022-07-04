#include <iostream>
#include <map>
#define fl(n) for(int i=0; i < n; i++)

using namespace std;

int main() {
    int q;
    cin >> q;
    string s, t, p;
    map<char, int> pcount;
    while(q--) {
        pcount.clear();
        cin >> s >> t >> p;
        fl(p.length()) pcount[p[i]]++;
        int i=0, j =0, flag =0;
        while(j < t.length()) {
            if(i ==  s.length() || s[i] != t[j]) {
                if(pcount.find(t[j]) != pcount.end() && pcount[t[j]] > 0) {
                    pcount[t[j]]--;
                    j++;
                } else {
                    flag = 1;
                    break;
                }
            }else {i++; j++;}
        }
        if(flag || i != s.length()) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}