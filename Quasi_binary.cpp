#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> result;
    int n;
    cin >> n;
    int i = 0, rem, p = 1;
    while(n > 0) {
        i = 0;
        rem = n%10;
        if(rem > 0) {
            while(i < result.size() && rem)  {result[i]+=p; rem--; i++;}
            if(i == result.size()) {
                for(int j=0; j < rem; j++) result.push_back(p); 
                rem = 0;
            }
        }
        p*=10;
        n/=10;
    }

    cout << result.size() << endl;
    for(int i=0; i < result.size(); i++) cout << result[i] << " ";
    cout << endl;
    return 0;
}