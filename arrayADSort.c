//Brianna Hill bhill28@student.gsu.edu
#include<stdio.h>

//to swap two elements using a  pointer
void swap_double( double *a, double *b )
{
        double _t = *a;
        *a = *b;
        *b = _t;

}

//sort the array
void sort_numeric( double *a, char x )
{
        int i, o;
    int size=11;

    //two nested iterations to sort the array
                for( i = 0; i < size; i++ ) {
                for( o = 1; o < size - i;o++ ) {
         //scanning array in ascending order
if( (*(a + o - 1)) > (*(a + o)) && (x=='A'|| x=='a'))
                                swap_double( (a + o - 1), (a + o) );

        //scanning array in descending order
            else if(( *(a + o - 1)) < (*(a + o)) && (x=='D'||x=='d'))
                                swap_double( (a + o - 1), (a + o) );

                }

        }

}
int main()
{
    double arr[11]={10,0.25,-2342.0,12123,3.145435,6,6,5.999,-2,-5,-109.56}; //array

    printf("Sort in asscending order:   A or a\n"); //Prompt user for ascending 
    printf("Sort in descending order:   D or d\n"); //Prompt user for decending 


        char x;
    scanf("%c",&x);
    sort_numeric(arr,x);
    printf("Following the  sorting\n"); //Following user chose of sort input

    int i;
    for(i=0;i<11;i++)
        printf(" %lf",arr[i]); //display results


}
