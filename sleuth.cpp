#include <iostream>

using namespace std;

int main() {
    string question;
    getline(cin, question);
    int i = question.length()-1;
    while(question[i] == '?' || question[i] == ' ') i--;
    if(question[i] <= 90) question[i]+=32;
    if(
        question[i] == 'a' 
        || question[i] == 'i' 
        || question[i] == 'o' 
        || question[i] == 'e' 
        || question[i] == 'u' 
        || question[i] == 'y'
    )
        printf("YES\n");
    else printf("NO\n");
    return 0;
}