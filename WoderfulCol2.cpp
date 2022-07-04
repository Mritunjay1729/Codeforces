#include <iostream>
#include <map>
#define endl "\n"
using namespace std;


void beautiful_colouring(long arr[], int a, int b){
    map <long, int> count;
    map <long, int> :: iterator itr;
    for(int i=0; i < a; i++){
        if((itr = count.find(arr[i]))==count.end()){
            count.insert(pair<long, int>{arr[i], 1});
        }
        else{
            itr->second++;
        }
    }      
    itr = count.end();
    itr--;
    int vart[itr->first+1];
    for(int &i : vart) i = 1; 

    int s_count = 0, d_count = 0;
    for(itr = count.begin(); itr!=count.end(); itr++){
        if(itr->second < b)
            s_count+=itr->second;
        else
            d_count++;
    }   
    int num = 1;
    s_count/=b;

    for(int i = 0; i < a; i++){
        itr = count.find(arr[i]);
        if(itr->second >= b)
        {
            if( vart[itr->first] <= b)
            {
                cout << vart[itr->first]<< " ";
                ++vart[itr->first];
            }
            else if(vart[itr->first] <= itr->second){
                cout << 0 << " ";
                ++vart[itr->first];
            }
        }
        else if(s_count > 0){
            cout << num++ << " ";
            if(num == b+1){
                s_count--;
                num = 1;
            }
        }else{
            cout << 0 << " ";
        }
    }
}

int main(int argc, char const *argv[])
{
    long test;
    cin >> test;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(test--){
        long a, b;
        cin >> a >> b;
        long arr[a];
        for(long i=0; i < a; i++){
            cin >> arr[i];
        }

        beautiful_colouring(arr, a, b);
        cout << endl;
    }

    return 0;
}