//Applications of a stringstream
//1)program to count number of words in a string using string stream 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="satya kamala sukanya namburi";
    int count=0;
    vector<string>ans;
    stringstream ss(str);//used for breaking words
    string word;
    while(ss>>word){
        ans.push_back(word);//stores the words in vector
        count++;
    }
    cout<<count<<endl;
    //prints the words in a vector
    for(auto it:ans){
        cout<<it<<" ";
    }
}

//2)To count the frequencies of the words in a string using stringstream
#include <iostream>
#include<sstream>//this header file should include if we use the stringstream 
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="geeks for geeks";
    map<string,int>mpp;
    stringstream ss(s);//to break the words
    string word; //to store individual words
    while(ss>>word){
        mpp[word]++;
    }
    for(auto it:mpp){
        cout<<it.first<<" ->";
        cout<<it.second;
    }
}

//3.1)program to remove the spaces in a string without using stringstream

#include<bits/stdc++.h>
using namespace std;
int main() {
	string s="c o d i n g";
	s.erase(remove(s.begin(),s.end(),' '),s.end()); //to remove the spaces in a string
	cout<<s;
}

//3.2)program to remove the spaces in a string without using stringstream

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s="c o d i n g";
    int l=s.length(); //to find thge length of the string
    int c=count(s.begin(),s.end(),' '); //to count the white spaces count
    remove(s.begin(),s.end(),' '); //removing all the spaces from the string
    s.resize(l-c);//resize the string by subtracting the white space count
    cout<<s;
}

//3.3)program to remove the spaces in a string by using stringstream

#include<bits/stdc++.h>
using namespace std;
int main() {
    string str="c o d i n g";
    stringstream ss;
    ss<<str;//storing the whole string into stringstream
    str="";//making string empty
    string temp;
    //running loop till end of the string
    while(!ss.eof()){
        ss>>temp; //extracting word by word from stream
        str=str+temp;
    }
    cout<<str;
}
