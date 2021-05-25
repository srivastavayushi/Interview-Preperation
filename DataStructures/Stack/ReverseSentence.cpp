#include <iostream>
#include <stack>
using namespace std;

// REVERSE STRING
void reverseString( string s){

    stack<string> st;

    for(int i=0;i<s.length();i++){

        string word = "";

        while(s[i]!=' ' &&  i<s.length()){
            word = word + s[i];
            i++;
        }
        st.push(word);

    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

// REVERSE THE WORD
void reverseWord(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char alphabet = s[i];
        st.push(alphabet);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
     
     string s ="Tina";
    // reverseString(s);
        reverseWord(s);
}