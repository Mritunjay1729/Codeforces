#include <iostream>
#define endl '\n'

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int num[101] = {0};
    for(int i=0; i<a; i++){
        int c;
        cin >> c;
        num[100 - c]++;
    }

    int sum = 0;
    int k=0, j=0;
    while(k < b && j < 100){
        if(num[j]!=0){
            sum += num[j];
            k+=num[j];
        }
        j++;
    }
    cout << sum;
    return 0;
}
