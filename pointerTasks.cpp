// 1. Create two integer variables named x and y
// 2. Create an int pointer named p1
// 3. Store the address of x in p1
// 4. Use p1 to set the value of x to 99
// 5. Using cout and x, display the value of x
// 6. Using cout and the pointer p1, display the value of x
// 7. Store the address of y into p1
// 8. Use p1 to set the value of y to -300
// 9. Create two new variables: an int named temp, and an int pointer named p2
// 10. Use temp, p1, and p2 to swap the values in x and y (this will take a few statements)
// 11. Write a function with the following signature: void noNegatives(int *x). The function should accept the address of an int variable. If the value of this integer is negative then it should set it to zero.  Note: you should declare the noNegatives function BEFORE main, not inside of main.
// 12. Call the function twice: once with the address of x as the argument, and once with the address of y
// 13. Use p2 to display the values in x and y (this will require both assignment statements and cout statements)
// 14. Create an int array with two elements. The array should be named ‘a’
// 15. Use p2 to initialize the first element of a with the value of x
// 16. Use p2 to initialize the second element of a with the value of y
// 17. Using cout, display the address of the first element in a
// 18. Using cout, display the address of the second element in a
// 19. Use p1, p2, and temp to swap the values in the two elements of array ‘a’. (first point p1 at a[0], then point p2 at a[1]. After this the swapping steps should look very similar to step 10.)
// 20. Display the values of the two elements. (The first element should be 99, the second 0).
// 21. Write a function named ‘swap’ that accepts two integer pointers as arguments, and then swaps the two integers that the pointers point to.  This function must be pass by pointer, i.e. int *, not pass by reference, i.e. int &.  Note: you should declare the swap function BEFORE main, not inside of main.
// 22. Call your swap function with the addresses of x and y, then print their values. (x should be 99, y should be 0).
// 23. Call your swap function with the address of the two elements in array ‘a’, then print their values. (a[0] should be 0, a[1] should be 99)

#include <iostream>
using namespace std;

// 11
void noNegatives(int *x)
{
    if (*x < 0)
    {
        *x = 0;
    }
}

// 21
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    int *p1;
    p1 = &x;
    *p1 = 99;
    cout << "x: " << x << endl;
    cout << "Using p1: " << *p1 << endl;
    p1 = &y;
    *p1 = -300;
    int temp;
    int *p2;

    // 10
    p1 = &x;
    p2 = &y;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    // 12
    noNegatives(&x);
    noNegatives(&y);
    // 13 use p2 to display the values in x and y
    p2 = &x;
    cout << "x after noNegatives" << *p2 << endl;
    p2 = &y;
    cout << "y after noNegatives" << *p2 << endl;

    // 14
    int a[2];
    p2 = &a[0];
    *p2 = x;

    p2 = &a[1];
    *p2 = y;

    cout << "Address of a[0]: " << &a[0] << endl;
    cout << "Address of a[1]: " << &a[1] << endl;

    // 19 Swap the values in the two elements of array 'a'
    p1 = &a[0];
    p2 = &a[1];
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    // 20
    cout << "a[0]: " << a[0] << ", a[1]: " << a[1] << endl;

    swap(&x, &y);
    cout << "After swap function - x: " << x << ", y: " << y << endl;

    // 23 call swap function on elements of array 'a'
    swap(&a[0], &a[1]);
    cout << "After swapping array elements - a[0]: " << a[0] << ", a[1]: " << a[1] << endl;

    return 0;
}

/* Sample Result 
[cchen584@hills ~]$ ./a.out
x: 99
Using p1: 99
x after noNegatives0
y after noNegatives99
Address of a[0]: 0x7ffec8182a5c
Address of a[1]: 0x7ffec8182a60
a[0]: 99, a[1]: 0
After swap function - x: 99, y: 0
After swapping array elements - a[0]: 0, a[1]: 99
*/