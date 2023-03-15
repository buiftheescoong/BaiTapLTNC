#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
   string s1, s2;
   cin >> s1 >> s2;

   int length2 = s2.size();
   int length1 = s1.size();
   string prefix[length2];

   int cnt = 0;
   if(length2 >length1){
    for(int i = 0;i <= length2 - length1; i++){
        if(s2[i] == s1[0]){
           bool temp = true;
           for(int j = i + 1, k = 1; j <= length2 - length1, k < length1; j++, k++ ){
            if(s2[j] != s1[k]) {temp = false; break;}
           }
           if(temp) cnt++;

        }
    }
   }
   cout << cnt;
   return 0;

}
