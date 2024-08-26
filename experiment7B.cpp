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
