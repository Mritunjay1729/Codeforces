#include <iostream>

using namespace std;

int main() {
    int s, m, l, xl ,xxl;
    cin >> s >> m >> l >> xl >> xxl;
    int n;
    cin >> n;
    string size;
    for(int i=0; i < n; i++) {
        cin >> size;
        if(size == "S") {
            if(s > 0) {s--; cout << "S" << endl;}
            else if(m > 0) {m--; cout << "M" << endl;}
            else if(l > 0) {l--; cout << "L" << endl;}
            else if(xl > 0) {xl--; cout << "XL" << endl;}
            else {xxl--; cout << "XXL" << endl;}
        }
        else if(size == "M") {
            if(m > 0) {m--; cout << "M" << endl;}
            else if(l > 0) {l--; cout << "L" << endl;}
            else if(s > 0) {s--; cout << "S" << endl;}
            else if(xl > 0) {xl--; cout << "XL" << endl;}
            else {xxl--; cout << "XXL" << endl;}
        }
        else if(size == "L") {
            if(l > 0) {l--; cout << "L" << endl;}
            else if(xl > 0) {xl--; cout << "XL" << endl;}
            else if(m > 0) {m--; cout << "M" << endl;}
            else if(xxl > 0){xxl--; cout << "XXL" << endl;}
            else {s--; cout << "S" << endl;}
        }
        else if(size == "XL") {
            if(xl > 0) {xl--; cout << "XL" << endl;}
            else if(xxl > 0){xxl--; cout << "XXL" << endl;}
            else if(l > 0) {l--; cout << "L" << endl;}
            else if(m > 0) {m--; cout << "M" << endl;}
            else {s--; cout << "S" << endl;}
        }
        else {
            if(xxl > 0) {xxl--; cout << "XXL" << endl;}
            else if(xl > 0) {xl--; cout << "XL" << endl;}
            else if(l > 0) {l--; cout << "L" << endl;}
            else if(m > 0) {m--; cout << "M" << endl;}
            else {s--; cout << "S" << endl;}
        }
    }
    return 0;
}