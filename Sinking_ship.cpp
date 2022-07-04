#include <iostream>
#include <vector>
#define pr pair<string, string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pr> crew;
    string name, status;
    for(int i=0; i < n; i++) {
        cin >> name >> status;
        crew.push_back({name, status});
    }

    for(int i=0; i < n; i++) {if(crew[i].second == "rat") cout << crew[i].first << endl;}
    for(int i=0; i < n; i++) {if(crew[i].second == "woman" || crew[i].second == "child") cout << crew[i].first << endl;}
    for(int i=0; i < n; i++) {if(crew[i].second == "man") cout << crew[i].first << endl;}
    for(int i=0; i < n; i++) {if(crew[i].second == "captain") {cout << crew[i].first << endl; break;}}
    return 0;
}