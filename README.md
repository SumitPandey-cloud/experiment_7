# EXPERIMENT 7 
# ARRAYS AND STRINGS IN C++

## AIM
To study and implement C++ Arrays 

## THEORY
In computer science, an array is a data structure consisting of collection of elements functions each identified by at least one key index. You cannot change or extend arrays because of they are contiguous block whenever new memory allocated. You can decompose the matrix and increase its size in C++ language. Since the array is statically allocated and can only be destroyed by the compiler, it cannot even resize. An array of integer type contains only variables and values that are integers. The memory location of the first element is 1000, while the second one will have 1004 as an address. We call this either via by the presence of the 0 since array indexing in Javascript starts at indebendently from zero.

1. applications of data:-
   - data storage
   - memory allocation
   - Image processing
## CODE
```
#include <iostream>
using namespace std;

int main()
{
    int a[100] = {78, 890, 67, 34, 13};
    int b[5] = {56, 78, 12, 90, 97};
    int c[100] = {19, 10, 100, 45, 47};

    cout << "Printing elements using traditional loop:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;

    // Modern method printing
    cout << "Printing elements using modern range-based for loop:" << endl;
    for(int j : b)
    {
        cout << j << " ";
    }
    cout << endl;

    cout << "--------------------------------" << endl;

    // User-defined array
    cout << "Creating and displaying a user-defined array:" << endl;
    int array[100], n;
    cout << "Specify the number of elements:" << endl;
    cin >> n;
    cout << "Enter the elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "You entered the following elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "-----------------------------------" << endl;

    // Reversing an array
    cout << "Displaying elements in reverse order:" << endl;
    for(int j = n - 1; j >= 0; j--)
    {
        cout << array[j] << endl;
    }
    cout << endl;

    // Finding marks
    cout << "-----------------------------------" << endl;
    cout << "Finding the position of a specific element:" << endl;
    int mark, marks[100], flag = 0, count = 0;
    cout << "Enter 5 elements:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    cout << "Enter the element to find:" << endl;
    cin >> mark;

    for(int i = 0; i < 5; i++)
    {
        if(mark == marks[i])
        {
            cout << "Element found at index: " << i << endl;
            count++;
            flag = 1;
        }
    }

    if(count == 0)
    {
        cout << "Element not found in the array." << endl;
    }
    else if(flag == 1)
    {
        cout << "Element appears " << count << " times in the array." << endl;
    }

    cout << "-----------------------------------" << endl;

    // Sum of an array
    cout << "Calculating the sum of array elements:" << endl;
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    cout << "Total sum of elements: " << sum << endl;

    // Average of an array 
    float avg;
    avg = sum / 5.0;  // To ensure floating-point division

    cout << "Average value of the array elements: " << avg << endl;

    cout << "-----------------------------------------" << endl;

    // Minimum of an array
    int min = marks[0], max = marks[0];

    for(int i = 0; i < 5; i++)
    {
        if(min > marks[i])
        {
            min = marks[i];
        }
    }
    cout << "The smallest value in the array is: " << min << endl;

    for(int i = 0; i < 5; i++)
    {
        if(max < marks[i])
        {
            max = marks[i];
        }
    }
    cout << "The largest value in the array is: " << max << endl;

    cout << "-----------------------------" << endl;
    
    return 0;
}
```

## OUTPUT
![WhatsApp Image 2024-08-11 at 18 25 43_4b1374c7](https://github.com/user-attachments/assets/a48abd57-941d-4225-8d63-89da24b4f02c)
![WhatsApp Image 2024-08-11 at 18 26 11_0572ffba](https://github.com/user-attachments/assets/941999b1-3c6f-46ff-8f3d-e55cdd62a74d)

## CONCLUSION

We learnt how to implement arrays and its operations in C++ programming languages


 
