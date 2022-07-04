#include <iostream>

using namespace std;

int main() {
    int pages;
    cin >> pages;
    int week[7];
    for(int i=0; i < 7; i++) cin >> week[i];
    int k = 0;
    while(pages > 0) {
        pages-=week[k++];
        if(k == 7) k=0;
    }
    printf("%d\n", k!=0?k:7);
    return 0;
}