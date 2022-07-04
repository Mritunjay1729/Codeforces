#include <iostream>
#include <map>
#define long long long int

using namespace std;

long min(long a, long b, long c){
    if(a < b && a < c)
        return a;
    else if(b < c)
        return b;
    else return c;
}

long BakingTime(long friends){
    static map<long , long > time;
    static map<long , long > :: iterator itr;
    if((itr = time.find(friends)) != time.end())
        return itr->second;
    while(friends > 0){
        int minimum = min(25 + BakingTime(friends-10), 20 + BakingTime(friends-8), 15 + BakingTime(friends-6));
        time.insert({friends, minimum});
        return minimum;
    }
    return 0;
}


int main(){
    long test_cases;
    cin >>  test_cases;
    long friends;
    for(int i=0; i< test_cases ; i++){
        cin >> friends;
        if(friends == 9999999999999999)
            cout << 25000000000000000 << endl;
        else
        cout << BakingTime(friends) << endl;
    }
}