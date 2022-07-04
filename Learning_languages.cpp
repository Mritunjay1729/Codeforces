#include <iostream>
#include <vector>
#include <set>

using namespace std;

int find(vector<int> &parent, int a) {
    if(parent[a] < 0) return a;
    else return find(parent, parent[a]);
}

void Union(vector<int> &parent, int a, int b) {
    int pa = find(parent, a), pb = find(parent, b);
    if(pa == pb) return;
    else if(parent[pa] <= parent[pb]) {
        parent[pa]+=parent[pb];
        parent[pb] = pa;
    } else {
        parent[pb]+=parent[pa];
        parent[pa] = pb;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<int> language(m, -1);
    vector<int> employee(n, -1);
    int l, lang;
    for(int i=0; i < n; i++) {
        cin >> l;
        for(int j=0; j < l; j++) {
            cin >> lang;
            if(employee[i] == -1) {
                employee[i] = lang-1;
                if(language[lang-1] == -1) language[lang-1]+=-1;
            }
            else Union(language, employee[i], lang-1);
        }
    }
    // for(int i=0; i < language.size(); i++) printf("(%d, %d)", i, language[i]);
    // cout << endl;
    int count1 = 0; //count of employees who do not know any language
    for(int i=0; i < employee.size(); i++) if(employee[i] == -1) count1++;
    //count of disjoint languages
    int count2= 0;
    for(int i=0; i < language.size(); i++) if(language[i] < -1) count2++;
    cout << count1 + max(0, count2-1) << endl;
    return 0;
}