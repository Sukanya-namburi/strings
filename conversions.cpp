//conversion of integer to string
//METHOD-1
#include<iostream>
#include<sstream>//in order to use stringstream we have to include this header file
using namespace std;
int main(){
    //conversion of integer to string using stringstream
    int value;
    cin>>value;
    stringstream ss;
    ss<<value;
    string str;
    ss>>str;
    cout<<"integer value is:"<<value<<endl;
    cout<<"string is:"<<str<<endl;//prints the string integer
}

//METHOD-2
#include<bits/stdc++.h>
using namespace std;
int main() {
    int value=56;
    string s=to_string(value); //to_string is used to change any data type to string data type
    cout<<s<<endl; //prints the string integer
}

//conversion of string to integer
//METHOD-1
#include <iostream>
#include<sstream>
using namespace std;
int main() {
	string s="45";
	stringstream ss;
	ss<<s;
	int value;
	ss>>value;
	cout<<value<<endl; //prints the integer value
}

//METHOD-2
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="45";
    int value=stoi(s);//by using stoi() we can change string to integer value
    cout<<value+1;
}
	
