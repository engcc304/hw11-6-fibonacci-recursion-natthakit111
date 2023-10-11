/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    (จงเขียนในรูปแบบของ Recursion Function)

    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/

#include <stdio.h>

int fibonacci( int n ) ;
void printFibonacciSeries( int n ) ;

int main() {
    int num ;
    printf( "Enter a number: " ) ;
    scanf( "%d", &num ) ;

    if ( num < 1 ) {
        printf( "Invalid input. Please enter a positive number.\n" ) ;
    } else {
        printf( "Series = " ) ;
        printFibonacciSeries( num ) ;

        int sum = 0 ;
        for ( int i = 1 ; i <= num ; i++ ) {
            sum += fibonacci( i ) ;//end for
        }// end for
        printf( "Sum = %d\n", sum ) ;
    }//end if

    return 0 ;
}//end function main

int fibonacci( int n ) {
    if ( n <= 0 ) {
        return 0 ;
    } else if ( n == 1 ) {
        return 1 ;
    } else {
        return fibonacci( n - 1 ) + fibonacci( n - 2 ) ;
    }//end if 
}//end function fibonacci

void printFibonacciSeries( int n ) {
    for ( int i = 1 ; i <= n ; i++ ) {
        printf( "%d", fibonacci( i ) ) ;
        if ( i <= n - 1 ) {
            printf( " + " ) ;
        }//end if
    }//end for
    printf( "\n" ) ;
}//end void
