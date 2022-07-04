#include <iostream>
#include <map>
#include <vector>
#define pr pair<int, int>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, l;
    cin >> n;
    map<int, int> language;
    for(int i=0; i < n; i++) {cin >> l; language[l]++;}
    int q;
    cin >> q;
    int mx = 0;
    vector<int> audio(q), subtitles(q);
    for(int i=0; i < q; i++) {cin >> audio[i]; if(language[audio[i]] > mx) mx = language[audio[i]];}
    for(int i=0; i < q; i++) {cin >> subtitles[i];}
    map<int, int> results;
    for(int i=0; i < q; i++) {
        if(language[audio[i]] == mx) {
            results[i+1] = subtitles[i];
        }
    }

    int max_index, max_subtitle=-1;
    for(auto result : results) {
        if(language[result.second] > max_subtitle) {
            max_subtitle = language[result.second];
            max_index = result.first;
        }
    }
    cout << max_index << endl;
    return 0;
}