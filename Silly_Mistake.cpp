#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    set<int> office, visited;
    int staff, count=0, flag = 0;
    vector<int> partitions;
    int number_of_patitions = 0;
    for(int i=0; i < n; i++) {
        cin >> staff;
        count++;
        if(staff > 0) {
            if(visited.find(staff) == visited.end()) {
                visited.insert(staff);
                office.insert(staff);
            }else{
                flag = 1;
                break;
            }
        }else{
            staff*=-1;
            if(office.find(staff) != office.end()) {
                office.erase(staff);
            }else{
                flag = 1;
                break;
            }
        }
        if(office.size() == 0) {
            number_of_patitions++;
            partitions.push_back(count);
            count = 0;
            visited.clear();
        }
    }

    if(flag == 1) cout << -1 << endl;
    else {
        if(office.size() > 0) cout << -1 << endl;
        else {
            cout << number_of_patitions << endl;
            for(int i=0; i < partitions.size(); i++) cout << partitions[i] << " ";
            cout << endl;
        }
    }
    return 0;
}