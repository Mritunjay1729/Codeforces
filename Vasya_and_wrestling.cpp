#include <iostream>
#include <vector>
#define ll long long 

using namespace std;

int main() {
    ll w1, w2;
    w1 = w2 = 0;
    vector<int> wres1, wres2;
    ll last = 0;
    int n;
    int score;
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> score;
        if(score > 0) {w1+=score; wres1.push_back(score); last = 0;} 
        else {w2-=score; wres2.push_back(-score); last = 1;}
    }

    if(w1 > w2) cout << "first" << endl;
    else if(w2 > w1) cout << "second" << endl;
    else{
        for(int i=0; i < min(wres1.size(), wres2.size()); i++) {
            if(wres1[i] > wres2[i]) {cout << "first" << endl; exit(0);}
            else if(wres2[i] > wres1[i]) {cout << "second" << endl; exit(0);}
        }
        if(wres1.size() > wres2.size()) {cout << "first" << endl; exit(0);}
        else if(wres2.size() > wres1.size()) {cout << "second" << endl; exit(0);}
        else {cout << (last==0?"first":"second") << endl;}
    }
    return 0;
}