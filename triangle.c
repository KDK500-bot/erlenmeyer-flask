#include <cs50.h>
#include <stdio.h>

// function declaration
bool valid_triangle (float a, float b, float c);

// function definition
bool valid_triangle (float a, float b, float c)
    {
        //check that the sum of any two sides is greater than the third and that all floats are bigger than 0 
        if (a + b >= c && a + c >= b && b + c >= a && a > 0 && b > 0 && c > 0)
        {
            return true;   
        
        }
    
    return false;
    }

int main(void)
    
{
        //asking the user for input
        float a = get_float("Side a: ");
        float b = get_float("Side b: ");
        float c = get_float("Side c: ");
                      
        //function call
        bool d = valid_triangle (a, b, c);
        
        //printing the value of the boolean expression
        if (d == true)
        {
            printf("The triangle is possible.\n");
        }                     

        if (d == false)
        {
            printf("The triangle is not possible.\n ");
        }                         
}
