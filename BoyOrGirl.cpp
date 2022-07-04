#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int alpha[26] = {0};
    string name;
    cin >> name;
    for(int i=0; i < name.size(); i++){
            alpha[name[i]-97]++;
    }

    int count = 0;;
    for (int i=0; i< 26; i++){
        if(alpha[i]>0)
            count++;
    }
    if(count%2==0)
        cout << "CHAT WITH HER!";
    else    
        cout << "IGNORE HIM!";
        return 0;
}