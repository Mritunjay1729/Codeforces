#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, type1, type2, type3, type4;
    type1 = type2 = type3 = type4 = 0;
    for(int i=0; i < n; i++) {
        cin >> a >> b;
        if(a%2 == 0 && b%2 == 0) type1++;
        else if(a%2 == 1  && b%2 == 1) type2++;
        else if(a%2 == 0 && b%2 == 1) type3++;
        else type4++;
    }
    int time = 0;
    if(type2%2 == 1) {
        if(type3 >= 2) {type3-=2; time+=1; type2--;}
        else if(type4 >= 2) {type4-=2; time+=1; type2--;}
    }

    // cout << type1 << " " << type2 << " " << type3 << " " << type4 << endl;
    if(type2%2 == 1) printf("-1\n");
    else if((type3%2 == 0) ^ (type4%2 == 0)) printf("-1\n");
    else if(type3%2 == 1 && type4%2 == 1) {printf("%d\n", (time+1)%2);}
    else printf("%d\n", time);
    return 0;
}