#include <stdio.h>

//  trying to obtain the squre and squre root  by using the arithmatic progression
//  i mean i want to find a way to know the squre of a particual number without squring it
//  by the using arithmatic progressive difference.

// generates squre series by using the 1 
void squre_series_generator();
int main()
{

    // creating the loop from 0 to 1000 for doing further operation.
    for (int i = 0; i < 1000; i++)
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
        printf("difference between   %d and %d squres of  the numbers are %d \n",first_number,secoand_number,difference);
        first_number++;
                 
    }
}

    // result , see see that this is arithmatic series with a = 1 and d  is 2 
    // and the difference is always be a the sum of first num and secoand num
    // which is  n^2 - (n-1)^2  = 2n + 1 
    // n^2 = (2n+1) + (n-1)^2
    // by using this equation we can generate sq series just we have to know sq of previous number
    // creating the squre generating function 
    void squre_series_generator(){
     // generate the squre series by using that equation 
    }



