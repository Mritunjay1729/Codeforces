#include <iostream>
#include <map>
#define long int long
#define endl "\n"
using namespace std;


void beautiful_colouring(long arr[], int a, int b){
    map<long, int> colors;
    map <long, int> :: iterator itr;

    for(long i=0; i< a; i++){
        itr = colors.find(arr[i]);
        if(itr == colors.end()){
            colors.insert({arr[i], 1});
        }
        else{
            itr->second++;
        }
    }

    int d_count = 0, s_count =0;
    for(itr = colors.begin(); itr != colors.end(); itr++){
        if(itr->second >= b) d_count++;
        else s_count += itr->second;
    }

    cout << "\n" << d_count + s_count/b;
}


int main(int argc, char const *argv[])
{
    long test;
    cin >> test;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(test-- > 0){
        long a, b;
        cin >> a >> b;
        int tab[11][2] = {0};
        long arr[a];
        for(long i=0; i < a; i++){
            cin >> arr[i];
            tab[arr[i]][0]++;
        }

        beautiful_colouring(arr, a, b);
    }

    return 0;
}
