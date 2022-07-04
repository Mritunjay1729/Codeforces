#include <iostream>

using namespace std;
#define endl "\n"

int main(int argc, char const *argv[])
{
    int a, x=0;
    cin >> a;
    string b;
    while(a--){
        cin >> b;
        if(b == "++X"| b== "X++"){
            x++;
        }else{
            --x;
        }
    }
    cout << x;
    return 0;
}
