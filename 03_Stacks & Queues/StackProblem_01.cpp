#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;
#include <stack>
bool isBalanced(string expr){
    stack<char> s;
    for (int i = 0; i < expr.length(); i++)
    {
        char current = expr[i];
        if (current == '(' || current == '{' ||current == '[')
        {
            s.push(current);
        }else if(current == ')'){
            if (s.empty())
            {
                return false;
            }
            char last = s.top();
            s.pop();
            if ( last != '('){
                return false;
            }
        }else if(current == '}'){
            if (s.empty())
            {
                return false;
            }
            char last = s.top();
            s.pop();
            if ( last != '{'){
                return false;
            }
        }else if(current == ']'){
            if (s.empty())
            {
                return false;
            }
            char last = s.top();
            s.pop();
            if ( last != '['){
                return false;
            }
        }
        
    }
    if (s.empty())
    {
        return true;
    }else return false;
    
}

int main(){
    // ##### Balanced Equation #######
    string str = "{a + [b-(c*d)]+g}";
    bool ans = isBalanced(str);
    if (ans == true){
        cout<<"Balanced"<<endl;
    }
    else cout<<"Not Balanced"<<endl;

    cout<<" 2nd Part"<<endl;
    // ######## Unbalanced Equation #####
    string exp = "{a+(b-c)+d";
    bool ans2 = isBalanced(exp);
    if (ans2 == true){
        cout<<"Balanced"<<endl;
    }
    else cout<<"Not Balanced"<<endl;

    return 0;
}