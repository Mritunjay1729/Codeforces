#include <iostream>
#include <vector>
#include <map>

using namespace std;

int diff(int a, int b) {
    int c = (a<b)?b-a:12-(a-b);
    return c;
}

int main() {
    vector<string> tones = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
    map<string, int> rank;
    for(int i=1; i <=tones.size(); i++) rank[tones[i-1]] = i; 
    string a, b, c;
    cin >> a >> b >> c;
    // cout << diff(rank["B"], rank["C#"]) << " " << diff(rank["C#"], rank["F"]) << endl;  
    if(rank[a] > rank[b]) swap(a, b);
    if(rank[a] > rank[c]) swap(a, c);
    if(rank[b] > rank[c]) swap(b, c);
    // cout << a << " " << b << " " << c << endl;
    if((diff(rank[a], rank[b]) == 3 && diff(rank[b], rank[c]) == 4) ||
        (diff(rank[b], rank[c]) == 3 && diff(rank[c], rank[a]) == 4) ||
        (diff(rank[c], rank[a]) == 3 && diff(rank[a], rank[b]) == 4))
    printf("minor\n");
    else if((diff(rank[a], rank[b]) == 4 && diff(rank[b], rank[c]) == 3) ||
        (diff(rank[b], rank[c]) == 4 && diff(rank[c], rank[a]) == 3) ||
        (diff(rank[c], rank[a]) == 4 && diff(rank[a], rank[b]) == 3))
    printf("major\n");
    else printf("strange\n");
    return 0;
}