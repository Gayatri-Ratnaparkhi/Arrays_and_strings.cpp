
//Gayatri Ratnaparkhi
//PRN:23070123169
#include <iostream>
using namespace std;
int main(){
    string a,rev_str;
    int length,i;
    cout<<"Enter a string: "<<endl;
    cin>>a;
    length=a.length();
    for(i=length-1;i>=0;i--){
        rev_str+=a[i];
    }
if(a==rev_str){
    cout<<"It is a palindrome.";
} 
else{
    cout<<"It is not a palindrome";
}
}
/*
**Output**
Enter a string:
gayatri
It is not a palindrome
*/


