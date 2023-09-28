#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortString(string &str){

int temp;
int length = str.length();

for(int i=0; i<length; i++){
   for(int j=0; j<length-1; j++){
    if(str[j]>str[j+1]){

       temp = str[j];
       str[j] = str[j+1];
       str[j+1] = temp;

      }
    }
  }
}

int main(){
string str;
getline(cin, str);
sortString(str);
cout<<"Sort String : "<<str;
}
