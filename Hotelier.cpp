#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> rooms(10, 0);
    int left = 0, right = 9;
    string order;
    cin >> order;
    for(int i=0; i < order.length(); i++){
        if(order[i] == 'L') {
            while(rooms[left] != 0) left++;
            if(left>right) swap(right, left);
            rooms[left]=1;
        }else if(order[i] == 'R') {
            while(rooms[right] != 0) right--;
            if(left>right) swap(right, left);
            rooms[right]=1;
        }else{
            if(left>right) swap(right, left);
            int no = order[i]-'0';
            rooms[no]=0;
            if(left > no) left = no;
            else if(right < no) right = no;
        }
    }    
    for(auto room : rooms) cout << room;
    cout << endl;
    return 0;
}