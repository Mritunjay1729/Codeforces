#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string command;
    getline(cin, command);
    string lexeme="";
    int flag = 0;
    // cout << command << endl;
    int i=0;
    while(command[i] == ' ') i++;
    for(;i < command.length(); i++) {
        if(command[i] == '\"' && flag == 0 ) {
            flag = 1; 
            lexeme.push_back('<');
        }else if(command[i] == '\"' && flag == 1) {
            lexeme.push_back('>');
            cout << lexeme << endl;
            lexeme = "";
            flag = 0;
            i++;
            while(command[i] == ' ') i++;
            i--;
        }else if(command[i]!='\"' && flag == 0) {
            while(i < command.length() && command[i] == ' ') i++;
            lexeme.push_back('<');
            i--;
            flag = 2;  
        }else if(command[i]==' ' && flag == 2) {
            while(i < command.length() && command[i] == ' ') i++;
            i--;
            lexeme.push_back('>');
            cout << lexeme << endl;
            lexeme = "";
            flag = 0;
        } else lexeme.push_back(command[i]);
    }
    if(lexeme != "" && lexeme != "<") cout << lexeme << '>' << endl;
    return 0;
}