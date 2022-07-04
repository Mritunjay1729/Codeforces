#include <iostream>
#include <set>

using namespace std;

int main() {
    string program;
    cin >> program;
    set<char> identifiers;
    for(int i=0; i < program.length(); i++) {
        if(identifiers.find(program[i]) != identifiers.end()) continue;
        else {
            if(program[i] != 'a' &&
            identifiers.find(program[i]-1) == identifiers.end()) {
                printf("NO\n");
                exit(0);
            } else {
                identifiers.insert(program[i]);
            }
        }
    }
    printf("YES\n");
    return 0;
}