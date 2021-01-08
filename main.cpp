#include <iostream>

int power(int i, int i1);

int factor( int i1);


int factor( int i1) {

    if(i1 >1)
    {
       return ( i1 *factor(i1-1));
    }
    else
        return 1;
}

int power(int i, int i1) {
    if(i1!=0) {
        return (i * power(i, i1 - 1));

    }
else
    return 1;
}






