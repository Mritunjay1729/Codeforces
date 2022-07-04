#include <iostream>
#include <bitset>

using namespace std;

int main() {
    long check = 0, mask = 0;
    char chr;
    int n;
    cin >> n;
    while(n--) {
        cin >> chr;
        if(chr <= 90) chr+=32;
        mask = 1 << chr-'a';
        if(!(check & mask)) check |= mask;
        // std::cout << "check = " << std::bitset<32>(check) << std::endl;
    }

    int count = 0;
    while(check > 1) {
        // cout << (check&1) << " ";
        count+=(check&1); 
        check/=2;
    }
    // cout << endl;
    // cout << count << endl
    count+1==26?printf("YES\n"):printf("NO\n");
    return 0;
}