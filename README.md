## Aim:
to study and impliment arrays and string.

## software:
VS code, dev cpp, online compiler.

## Theory:
#### Arrays in C++
An array is a data structure of elements with same data type stored at contiguous memory locations.Arrays are used to store multiple values in a single variable, making it easier to manage large sets of data.

**Example:**
An array of 4 integers
```cpp
int x[10]; 
```
<br>

#### Strings in C++
Strings are sequences of characters used to store text. In C++, the `string` class is defined in the ```<string>``` header file. There are two types of strings in C++ : <br>
1. C style Strings
2. std : : string


**Example:**
An array of strings
```cpp
string str1 = "Hello"; 
```
## Algorithms
#### Checking Palindrome


1. **Input the String:**
   - Ask the user to enter a string.

2. **Initialize Variables:**
   - Store the input string in a variable, `a`.
   - Initialize an empty string, `revstr`.

3. **Determine the Length:**
   - Calculate the length of `a` and store it in `length`.

4. **Reverse the String:**
   - Loop from the end of the string to the beginning:
   - Append each character to `revstr`.

5. **Compare the Strings:**
   - Compare the original string `a` with the reversed `revstr`.
   - If `a` == `revstr`, the string is a palindrome.
   - Else not a palindrome.

6. **Output the Result:**
   - Print whether the string is a palindrome or not based on the comparison.

## Codes:
**array1:**

//Gayatri ratnaparkhi 23070123169
// Program to take elements as input of array and print it

#include <iostream>

using namespace std;

int main() {

    int size;
    
    cout << "Enter the number of elements in the array: ";
    
    cin >> size;
    
    int x[size];
    
    cout << "Enter a set of  integers:" << endl;
    
    for (int i = 0; i < size; i++) {
    
        cin >> x[i];
        
    }
    
    cout << "The array elements are:" << endl;
    
    for (int i = 0; i < size; i++) {
    
        cout << x[i] << " ";
        
    }
}


/*
*Output*

Enter the number of elements in the array: 6

Enter a set of  integers:

23

45

67

89

12

34

The array elements are:

23 45 67 89 12 34

*/

**array2:**

//Gayatri ratnaparkhi 23070123169

#include <iostream>

using namespace std;

int main(){

    string a,b;
    
    cout<<"Enter first sring: "<<endl;
    
    cin>>a;
    
    cout<<"Enter second sring: "<<endl;
    
    cin>>b;
    
    cout<<"Concatenated String is: "<<a+b<<endl;
    
}

/*

*output*

Enter first sring:

pune

Enter second sring:

city

Concatenated String is: punecity

 */

**array3:**

//Gayatri ratnaparkhi 23070123169

#include<iostream>

using namespace std;


int main(){

    int n = 5;
    
    int arr[5] = {1000,210,30,304,402};
    
    int max = arr[0], min = arr[0];
    
    for(int i = 1; i < n; i++) {
    
        if(arr[i] > max) {
        
            max = arr[i];
            
        }
        
        if(arr[i] < min) {
        
            min = arr[i];
            
        }
        
    }
    
    cout << "Maximum: " << max << endl;
    
    cout << "Minimum: " << min << endl;
    
}

/*

*Output*

Maximum: 1000

Minimum: 30

*/

**array4:**

//Gayatri ratnaparkhi 23070123169

#include <iostream>

using namespace std;

int main() {

    int key = 55;
    
    int x[5] = {34, 45, 65, 33, 55};
    
    int i;
    
    for (i = 0; i < 5; i++) {
    
        if (x[i] == key) {
        
            cout << "Element is found at position " << i << endl;
            
            break;
            
        }
        
    }
    
    if (i == 5) {
    
        cout << "Element is not found in the array" << endl;
        
    }
    
}

/*

    *Output*
    
Element is found at position 4

*/
**array5:**


//Gayatri Ratnaparkhi

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

*Output*

Enter a string:

gayatri

It is not a palindrome

*/

**array6:**

//GAYATRI RATNAPRKHI 23070123169

#include <iostream>

using namespace std;

int main(){

    string a,rev_str;
    
    int length,i;
    
    cout<<"Enter a string: "<<endl;
    
    cin>>a;
    
    length=a.length();
    
    for(i=length;i>=0;i--){
    
        rev_str+=a[i];
        
    }
    
    cout<<"Reversed string is: "<<rev_str<<endl;

}

/*

Enter a string:

gayatri

Reversed string is: irtayag

*/

**array7:**

//GAYATRI RATNAPARKHI 23070123169

//Basics Of String

#include <iostream>

using namespace std;

int main(){

    char str1[4]="C++";
    
    char str2[]={'C',' ','+','+','\0'};
    
    char str3[4]={'C','+','+','\0'};
    
    string str4 ="C++";
    
    cout<<str1<<endl;
    
    cout<<str2<<endl;
    
    cout<<str3<<endl;
    
    cout<<str4<<endl;

}

/*

*Output*

C++

C ++

C++

C++

*/





