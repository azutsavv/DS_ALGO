#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s){
    int n = s.size();
    stack<char> st;

    bool ans = true;
    for(int i=0;i<n;i++){
        if(s[i]=='{' ||s[i]=='(' ||s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
            
       
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
       
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
       
        }


    }

    if(!st.empty()){
        return false;
    }   
    else
    return ans;


}

int main(){
    int t;
    cin>>t;


    while (t--)
    {
        string s;
        cin>>s;
        if(isBalanced(s)){
            cout<<"Valid String";
        }
        else{
            cout<<"Unbalnced String";
        }
    }
    
    return 0;
};
    
