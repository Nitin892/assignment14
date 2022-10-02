
// Assignment 14 is completed.
//  1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//  array values from the user.

#include <stdio.h>
int main()
{
    int num[10] = {};
    int sum = 0;
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("%d", sum);
    return 0;
}

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include <stdio.h>
int main()
{
    int num[10] = {};
    float sum = 0;
    float avg;
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("%.2f", avg);

    return 0;
}

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int num[10] = {};
    int sumOfEven = 0;
    int sumOfOdds = 0;
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            sumOfEven += num[i];
        }
        else
            sumOfOdds += num[i];
    }
    printf("sum of even numbers is %d\n", sumOfEven);
    printf("sum of odd numbers is %d\n", sumOfOdds);

    return 0;
}

// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include <stdio.h>
int main()
{
    int num[10] = {};
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = num[0];
    for (int i = 1; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("%d", max);
    return 0;
}

// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

#include <stdio.h>
int main()
{
    int num[10] = {};

    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int min = num[0];

    for (int i = 1; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    printf("sum of even numbers is %d\n", min);
    return 0;
}

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.

#include <stdio.h>
int main()
{
    int num[10] = {};
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("after sorting.\n");

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (num[i] >= num[i + 1])
            {
                int t = num[i];
                num[i] = num[i + 1];
                num[i + 1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}

// 7. Write a program to find second largest in an array.Take array values from the user.

int secondlargest(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++) // find maximum and storing in variable max.
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++) // this for loop is for finding second max in an array.
    {
        for (int j = 0; i < n; j++)
        {
            if (a[j] == max - 1)
            {
                return a[j];
            }
        }
    }
}

#include <stdio.h>
int main()
{
    int num[10] = {};
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("%d", secondlargest(num, n));
    return 0;
}

// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.

int secondlargest(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++) // find minimum and storing in variable min.
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++) // this for loop is for finding second min in an array.
    {
        for (int j = 0; i < n; j++)
        {
            if (a[j] == min + 1)
            {
                return a[j];
            }
        }
    }
}

#include <stdio.h>
int main()
{
    int num[10] = {};
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("%d", secondlargest(num, n));
    return 0;
}

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include <stdio.h>
int main()
{
    int num[5] = {};
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return 0;
}

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

#include <stdio.h>
int main()
{
    int num[5] = {};
    int arr[] = {};
    int n = sizeof(num) / sizeof(num[0]);
    printf("\nEnter 10 elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = num[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
