#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int arr[10] = {0};
    for(int i=0; i < 9; i++) cin>>arr[i+1];
    int flag = 0;
    for(int i=0; i < str.length(); i++) {
        if(arr[str[i]-'0'] > str[i]-'0') {
            str[i] = arr[str[i]-'0']+'0';
            flag = 1;
        }else if(flag == 1 && arr[str[i]-'0'] < str[i]-'0') {
            // cout << arr[str[i]-'0'] << " " << str[i]-'0' << endl;
            break;
        }
    }
    cout << str << endl;
}