#include <stdio.h>

//  trying to obtain the squre and squre root  by using the arithmatic progression
//  i mean i want to find a way to know the squre of a particual number without squring it
//  by the using arithmatic progressive difference.

// generates squre series by using the 1
void squre_series_generator();
int main()
{

    // creating the loop from 0 to 10 for doing further operation.

    for (int i = 0; i < 10; i++)
    {
        // created the first number 10
        static int first_number = 1;
        // creating the secoand number  which will be n - 1
        int secoand_number = first_number - 1;

        // now we well show  the difference between the (n)^2 - (n-1)^2
        int squre_of_first_number = first_number * first_number;
        int squre_of_secoand_number = secoand_number * secoand_number;
        // difference of squres are
        int difference = squre_of_first_number - squre_of_secoand_number;
        printf("difference between   %d and %d squres of  the numbers are %d \n", first_number, secoand_number, difference);
        first_number++;
    }

    // running the squre series generator which we have creadted
    // recurtion is not recommend for doing long operation , to avoid stack overflow
    // using for  loop to demonstrate the generated series from 1 to 20
    for (int number = 1; number < 100; number++)
    {
        squre_series_generator();
    }
}

// result , see see that this is arithmatic series with a = 1 and d  is 2
// and the difference is always be a the sum of first num and secoand num
// which is  n^2 - (n-1)^2  = 2n + 1
// n^2 = (2n+1) + (n-1)^2
// by using this equation we can generate sq series just we have to know sq of previous number
// creating the squre generating function

void squre_series_generator()
{
    // generate the squre series by using that equation

    // natural number , using default one when we have to calculate the series from the start
    static int natural_number = 2;

    // implement the squre series formula
    int squre_of_the_natural_number = (2 * natural_number - 1) + ((natural_number -1) * (natural_number - 1)); 
    // we can also place the squre of the previous number as n-1 sq to minimize the operation 

    // increasing the natural number by 1
    printf("the squre of %d series,%d \n", natural_number,squre_of_the_natural_number);
    natural_number++;
}
