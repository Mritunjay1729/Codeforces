#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i=0; i < n; i++) cin >> height[i];

    int max_difficuty = 0, min_difficulty= INT32_MAX;
    for(int i=1; i < n; i++) max_difficuty = max(max_difficuty, height[i]-height[i-1]);
    // cout << "MAx : " << max_difficuty << endl;
    int difficulty = 0;
    for(int i=1; i < n-1; i++) {
        difficulty = height[i+1]-height[i-1];
        if(max_difficuty > difficulty)
            min_difficulty = min(max_difficuty, min_difficulty);
        else
            min_difficulty = min(min_difficulty, difficulty);
    }
    printf("%d\n", min_difficulty);
    return 0;
}