// creating the program to find distance formula and cordinates

#include <stdio.h>
#include <math.h>

int main(void)
{
    // creating two points
    int first_point[2] = {10, 5};
    int second_point[2] = {4, 5};

    // finding the distance between two points

    int distance = pow(first_point[0] - first_point[1], 2) + pow(second_point[0] - second_point[1], 2);
    distance = sqrt(distance);

    // trying to obtain the distance just by doing arith operations between abcissa and ordinate

    int diffference_of_abcissa = first_point[0] - second_point[0];
    int difference_of_ordinate = first_point[1] - second_point[1];

    int attempt_distance = difference_of_ordinate+ diffference_of_abcissa;

    printf("Distance between the points: %d\n", distance);
    // 5
    printf("Distance between the ponts with pythorogos theorm,%d\n",attempt_distance);

    // 6 

    // con: arith operations between abcissa and ordinate is faild here 

    


    return 0;
}