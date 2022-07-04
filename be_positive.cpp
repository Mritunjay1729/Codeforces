#include <iostream>

using namespace std;

int main() {
    int n;
    float num;
    cin >> n;
    float negative, positive, zero, negative_max, positive_min;
    negative = positive = zero = 0;
    negative_max = 1 - 10000;
    positive_min = 10000;
    for(int i=0; i < n; i++) {
        cin >> num;
        if(num > 0) {
            positive++;
            positive_min = min(positive_min, num);
        } else if (num < 0) {
            negative++;
            negative_max = max(negative_max, num);
        } else {
            zero++;
        }
    }
    if(negative >= positive + zero) printf("%d\n", (int)negative_max);
    else if(positive >= negative + zero) printf("%d\n", (int)positive_min);
    else printf("%d\n", 0);
    return 0;
}