#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, error;
    cin >> n;
    map<int, int> errors, errors_deletion_1;
    for(int i=0; i < n; i++) {
        cin >> error;
        errors[error]+=1;
    }

    //First traversal
    for(int i=0; i < n-1; i++) {
        cin >> error;
        errors_deletion_1[error]++;
    }
    
    //Error check
    int error1, error2;
    for(auto error : errors) {
        if(errors_deletion_1.find(error.first) == errors_deletion_1.end() ||
        errors_deletion_1[error.first] != error.second) {
            error1 = error.first;
            break;
        }
    }

    for(int i=0; i < n-2; i++) {
        cin >> error;
        errors_deletion_1[error]-=1;
        if(errors_deletion_1[error] == 0) errors_deletion_1.erase(error);
    }

    // cout << endl;
    // for(auto error : errors_deletion_1) cout << error.first << " " << error.second << endl;
    // cout << endl;

    error2 = errors_deletion_1.begin()->first;
    printf("%d\n%d\n", error1, error2);
    return 0;
}