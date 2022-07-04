#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    string str;
    for(int i=0; i < n; i++) {
        cin >> str;
        if(str == "Tetrahedron") count+=4;
        else if(str == "Cube") count+=6;
        else if(str == "Octahedron") count+=8;
        else if(str == "Dodecahedron") count+=12;
        else count+=20;
    }
    cout << count << endl;
    return 0;
}