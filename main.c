#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a2i(char* string)
{
   int num = 0; 
    int num_len; 
    int j; 

    for (num_len = 0; string[num_len]; num_len++); 
    
    for (j = 0; string[j]; j++)
    {
        num += (string[j] - '0') * pow(10, num_len-j-1); 
    }
    
    return num; 
}

int main(int argc, char** argv)
{
    int number = a2i(argv[1]);
    printf("Number is - %d\n", number);

    float l_lim = 0;
    float r_lim = number;
    float mid;

    do
    {
        mid = (r_lim + l_lim) / 2;  
        if (mid * mid < number)
        {
            l_lim = mid;
        }
        else
        {
            r_lim = mid;
        }
    }while (abs(number - (mid * mid)) > 0.1);
    

    printf("Square root is %.2f \n", mid);

    return 0;
}

