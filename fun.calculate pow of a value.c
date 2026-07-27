For also for negative values 
#include <stdio.h>

// Function declaration
float power ( float x, int y );

int main( )
{
    float x, pow ;
    int y ;

    printf ( "\nEnter number and power: " );
    scanf ( "%f %d", &x, &y );

    // Check for division by zero error (0 raised to a negative power)
    if ( x == 0 && y < 0 )
    {
        printf ( "Error: Zero cannot be raised to a negative power!\n" );
        return 1;
    }

    pow = power ( x, y ) ;

    printf ( "\n%.2f to the power %d = %f\n", x, y, pow ) ;
    return 0 ;
}

// Function definition
float power ( float x, int y )
{
    int i ;
    float p = 1.0 ;

    // Convert negative power to positive for the multiplication loop
    int exp = y ;
    if ( exp < 0 )
        exp = -exp ;

    // Multiply base 'x', 'exp' times
    for ( i = 1 ; i <= exp ; i++ )
    {
        p = p * x ;
    }

    // If original power was negative, convert the result  1 / p
    if ( y < 0 )
    {
        return ( 1.0 / p ) ;
    }
    else
    {
        return p ;
    }
}