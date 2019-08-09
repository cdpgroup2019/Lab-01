#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (int argc , char *argv[])
{

  ifstream file(argv[1]);
  string str,word;
  int x=1,i,c;
  cout<<"Enter string to search : ";
  cin>>word;
  while (getline(file, str)) {
    c=0;
    i=0;
    while (str[i]!='\0')
	  {
		  if (str[i]==word[c] && word[c]!='\0' && str[i]!=' ')
		    c++;
		  else{
        if (c==word.length()){
          break;
        }
        c=0;
      }
		i++;
	  }
    if (c==word.length()){
        cout << x<<" : "<< str << "\n";    
    }
    x++;  
  }
}
