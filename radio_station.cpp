#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> serverip;
    int m, n;
    cin >> m >> n;
    string server, ip;
    while(m--){
        cin >> server >> ip;
        serverip[ip] = server;
    }
    string name;
    while(n--) {
        cin >> name >> ip;
        cout << name << " " << ip << " #" << serverip[ip.substr(0, ip.length()-1)] << endl;
    }
    return 0;
}