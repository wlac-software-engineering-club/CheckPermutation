/*Check Permutation: Given two strings, write a method to decide if one is a permutation of the other. */

#include <iostream>
#include <string>
using namespace std;

bool isUnique(string x){
 bool flag = true;
 string cmpstring = "";
 int i = 0;

 while(flag && i < x.length()){
   char pos = x[i];
   for(int j = 0; j < cmpstring.length(); j++){
     if(pos == cmpstring[j]) {
       flag = false;
       break;
     }
   }
   cmpstring = cmpstring + pos;
   i++;
 }

 return flag;
}

bool checkPerm(string x, string y) {
 bool flag = true;
 if(x.length() != y.length()) {
   flag = false;
 } else {
   while(flag && x.length() > 0) {
     for(int i = 0; i < y.length(); i++) {
       cout << x << endl;
       cout << y << endl;
       if(x[0] == y[i]){
         cout << x.length() << endl;
         cout << y.length() << endl;
         x.erase(0,1);
         y.erase(i, 1);
       } else if (x.length() > 0){
         flag = false;
       }
     }
   }
 }

 return flag;
}

int main() {
 string x = "act";
 string y = "cat";
 cout << boolalpha << checkPerm(x, y) << endl;
 return 0;
}