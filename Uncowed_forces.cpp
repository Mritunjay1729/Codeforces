#include <iostream>
#include <vector>

using namespace std;

int main() {
    double score = 0;
    vector<int> scores = {500, 1000, 1500, 2000, 2500};
    vector<double> time(5), wrong(5);
    for(int i=0; i < 5; i++) cin >> time[i];
    for(int i=0; i < 5; i++) {
        cin >> wrong[i];
        score+=max(0.3*scores[i], (1-(time[i]/250))*scores[i]-50*wrong[i]);
    }
    int hs, hu;
    cin >> hs >> hu;
    score+=100*hs-50*hu;
    cout << (int)score << endl;
    return 0;
}