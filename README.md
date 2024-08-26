# ARRAYS AND STRINGS IN C++

# EXPERIMENT 7 ARRAYS

## AIM
To study and implement C++ Arrays 

## THEORY

In computer science, an array is a data structure comprising a collection of elements (values or variables) of uniform memory size, each identified by at least one array index or key.

Arrays feature contiguous memory allocation.

In C++, arrays have a fixed size. Once declared, this size cannot be altered - neither increased nor decreased. This limitation stems from two factors:

1. Expansion: Increasing the size is problematic because there's no guarantee that the adjacent memory locations are available for allocation.

2. Reduction: Decreasing the size is not feasible because arrays in C++ are statically allocated at compile-time. Only the compiler has the authority to deallocate this memory.

This immutable nature of array sizes in C++ is a consequence of its low-level memory management approach, which prioritizes efficiency and direct control over hardware resources.
For example: -
If an array is of the integer datatype, then: -
1. The array will contain only integer datatype values and variables
2. If the first element memory address is allocated at 1000 then the 2nd element will have the memory address as 1004
3. The array indexing will start at 0, so if u want ot access the first element of lets say array arr, it will have to be called at either the value of arr[0] or via reference(address of the first element)

### Applications of Array Data Structure: -
1. To represent data in matrix form, a vector or a tabular form
2. To store data for processing
3. Implementing data structures such as queues and stacks as well dynamic memeory allocation like linked lists and trees




### Types of arrays: -
1. One dimensional arrays
2. Multi dimensional arrays


### Advaantages of arrays
1. Arrays allow random access to elements. This makes accessing elements by position faster.
2. Arrays have better cache locality which makes a pretty big difference in performance.
3. Arrays represent multiple data items of the same type using a single name.
4. Arrays are used to implement the other data structures like linked lists, stacks, queues, trees, graphs, etc.


### Initialization of arrays 
#### 1. Fixed Size, fixed Value arrays
~~~
int arr[5]; 
// Another way (creation and initialization both)
int arr2[5] = {1, 2, 3, 4, 5};
~~~

#### 2. Dynamical memory allocation, but fixed size
~~~
int *arr = new int[5];
~~~

#### 3. Dynamic size
-This is one of the differences between C and C++
~~~
vector<int> v;
~~~


## CODE

~~~
#include <iostream>
using namespace std;

int main()
{
    int a[100] = {78, 890, 67, 34, 13};
    int b[5] = {56, 78, 12, 90, 97};
    int c[100] = {19, 10, 100, 45, 47};

    cout << "Traditional method" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;

    //modern method printing 
    cout<<"Modern method of printing of an array"<<endl;
    for(int j: b)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    cout<<"--------------------------------"<<endl;
    // user defined array
    cout<<"user defined array"<<endl;
    int array[100],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>array[i];
    }

    cout<<"The array is as follows: "<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    cout<<"-----------------------------------"<<endl;

    // reversing an array
    cout<<"Reversing an array"<<endl;
    for(int j = n-1;j>= 0;j--)
    {
        cout<<array[j]<<endl;
    }
    cout<<endl;

    //finding marks 
    cout<<"-----------------------------------"<<endl;
    cout<<"Finding an element in a array"<< endl;
    int mark,marks[100],flag = 0,count = 0;
    cout<<"Enter 5 elements "<<endl;
    for(int i =0;i<5;i++)
    {
        cin>>marks[i];
    }
    cout<<"Which element position do u want"<<endl;
    cin>>mark;

    for(int i =0;i<5;i++)
    {
        if(mark == marks[i])
        {
            cout<<"position of the element is at: "<<i<<endl;
            count++;
            flag = 1;
        }
    }

    if(count == 0)
    {
        cout<<"No elements found"<<endl;
    }
    else if(flag == 1)
    {
        cout<<"Element is present at: "<< count << "times" << endl;
    }

    cout<<"-----------------------------------"<<endl;
    // sum of an array
    cout<<"The sum of array elements "<<endl;
    int sum = 0;
    for(int i = 0;i<5;i++)
    {
        sum = sum+marks[i];
    }
    cout<<"Sum of elements: "<<sum<< endl;

    //average of an array 

    float avg;
    avg = sum/5;

    cout<<"The average of the array is: "<<avg<<endl;

    cout<<"-----------------------------------------"<<endl;

    // minimum of an array

    int min=marks[0],max=marks[0];

    for(int i =0;i<5;i++)
    {
        if(min<marks[i])
        {
            min = marks[i];
        }
    }
    cout<<"\nThe least value of the array is: "<<min<<endl;

    for(int i =0;i<n;i++)
    {
        if(max>marks[i])
        {
            max = marks[i];
        }
    }
    cout<<"\nThe highest value of the array is: "<<max<<endl;

    cout<<"-----------------------------"<<endl;
    
    return 0;
}
~~~

## CODE OUTPUT
![image](https://github.com/user-attachments/assets/502b8e37-9143-4dc9-847c-3d86c6f838f6)


## CONCLUSION

We learnt how to implement arrays and its operations in C++ programming languages


----------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------


# EXPERIMENT 7 STRINGS 

## AIM

To study and implement C++ strings

## THEORY

A string is a datatype having a sequence of characters used to represent text. Strings are commonly used for storing and manipulating textual data in computer programs. They can be manipulated using various operations like concatenation, substring extraction, and comparison.

In most programming languages, strings are treated as a distinct data type. This means that strings have their own set of operations and properties. They can be declared and manipulated using specific string-related functions and methods.

### Application of strings

1. Hashing and encryption of data: - Random strings are generated to secure data or encrypt data
2. Data representation
3. Database operation
4. Web developmenent

### Operations of strings: -
1. Find the length of a string 
2. Accessing Characters	from a string using its indexing value
3. Concating or merging of 2 strings 
4. Appending and Concatenating Strings	
5. comparing 2 strings
6. Making substrings	
6. Searching a character from a string  
7. replacing a character or substring from the orignal string 
8. inserting a character into a string
9. deleting or erasing a character from a string 
10. Coversion to obtain a C_type string (character array)


The above operations can be directly accessed in C++ programming language that has been stored in String header file for example __length()__ to find the length of a string, __at()__, __append()__ , __compare()__ , __substring()__ , find(), etc.

## CODE
~~~
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    cout<<"Enter any string"<<endl;
    cin>> a;
    cout<<"The entered string is: "<<a<<endl;

    cout<<"-----------------"<<endl;

    cout<<"Concatenation of 2 strings: "<<endl;
    cout<<"\nEnter 2 strings to concatenate: "<<endl;
    string str1,str2,str3,str4;
    cin>> str1>> str2;
    cout<<"\nConcatenation of the 2 strings: "<<str1+str2<<endl;

    cout<<"-------------------"<<endl;
    cout<<"\nReversing a string"<<endl;
    cout<<"\nEnter a string to reverse"<<endl;
    cin>> str3;
    for(int i = str3.length()-1;i>=0;i--)
    {
        cout<<str3[i];
    }

    cout<<"\n-------------------------"<<endl;
    cout<<"\nTo check whether the given string is a Palindrome"<<endl;
    cout<<"Enter a string to check whether a given string is a Palindrome"<<endl;
    cin>>str4;
    int len = str4.length();
    bool flag = true;
    for (int i = 0; i < len / 2; i++)
    {
        if (str4[i] != str4[len - 1 - i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout<<"The given string is  a palindrome"<<endl;
    }
    else 
    {
        cout<<"The given string is not a palindrome"<<endl;
    }


    return 0;
}
~~~

## CODE OUTPUT
![image](https://github.com/user-attachments/assets/1bdf0ed1-973b-43a3-8791-f24ab41f5eb1)
![image](https://github.com/user-attachments/assets/ff496725-70bb-4035-853e-9a21af35a701)



## CONCLUSION: -
In this experiment we learnt how to implement string and its operations like sorting, searching, etc.



