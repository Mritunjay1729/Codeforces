#include <iostream>

using namespace std;

int HCF(int a, int b){
    if(a > b) return HCF(a-b, b);
    else if(b > a) return HCF(a, b-a);
    else return a;
}

int main() {
    int n, num;
    cin >> n;
    int hcf;
    cin >> hcf;
    for(int i=1; i < n; i++){
        cin >> num;
        hcf = HCF(num, hcf);
    }
    printf("%d\n", hcf*n);
    return 0;
}