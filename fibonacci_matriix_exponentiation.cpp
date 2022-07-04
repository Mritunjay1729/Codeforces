#include <iostream>
#include <vector>
#define ll long long int

using namespace std;

vector<vector<ll>> multiply(vector<vector<ll>> mat, vector<vector<ll>> mat2) {
    ll n = mat.size();
    ll m = mat2[0].size();
    vector<vector<ll>> res(n, vector<ll>(m, 0));
    for(ll i=0; i < n; i++) {
        for(ll j=0; j < m; j++) {
            for(ll k=0; k < m; k++) {
                res[i][j] += (mat[i][k]*mat2[k][j])%((ll)10E8+7);
                res[i][j]%=((ll)(10E8+7));
            }
        }
    }
    return res;
}

int main() {
    ll n;
    cin >> n;
    n%=(ll)(10E8+7);
    vector<vector<ll>> mat(2, vector<ll>(2));
    mat[0][0] = 1;
    mat[0][1] = 1;
    mat[1][0] = 1;
    mat[1][1] = 0;

    n--;
    vector<vector<ll>> temp = {{1, 0}, {0, 1}};
    while(n > 1) {
        if(n%2 == 1) {
            temp = multiply(temp, mat);
            n--;
        }else{
            n/=2;
            mat = multiply(mat, mat);
        }
    }
    mat = multiply(mat, temp);
    cout << mat[0][0] << endl;
    return 0;
}