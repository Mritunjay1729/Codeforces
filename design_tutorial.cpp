#include <iostream>

using namespace std;

bool checkComposite(int num) {
    if(num <= 3) return false;
    for(int i=2; i < num; i++) {
        if(num % i == 0) return true;
    }
    return false;
}

int main() {
    int number;
    cin >> number;
    int a = number/2;
    int b = (number+1)/2;
    while(!checkComposite(a) || !checkComposite(b)) {a--; b++;}
    cout << a << " " << b << endl;
}