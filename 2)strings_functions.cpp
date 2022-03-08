#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string substring;
    getline(cin,s);//user input of a string
    transform(s.begin(),s.end(),s.begin(),::tolower); //changes entire string into lower case
    transform(s.begin(),s.end(),s.begin(),::toupper); //changes entire string into upper case
    sort(s.begin(),s.end());//sorts the string in alphabetical order
    substring=s.substr(1,3); //prints substring of a string
    reverse(s.begin(),s.end()); // reverse the whole string
  
}

	
