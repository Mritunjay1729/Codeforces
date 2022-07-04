#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> alcohol;
    vector<string> beverage = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    alcohol.insert(beverage.begin(), beverage.end());
    string drink;
    int suspected = 0;
    while(n--) {
        cin >> drink;
        if(drink[0] >= 48 && drink[0] <= 57) {
            int age = stoi(drink);
            if(age < 18) suspected++;
        } else { 
            if(alcohol.find(drink) != alcohol.end()) suspected++;
        }
    }
    printf("%d\n", suspected);
    return 0;
}