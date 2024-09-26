#include <stdio.h>
/*- Un programme qui échange les contenus de deux données numérique si elles sont de même signe, sinon il met la somme des deux dans la première donnée et leur produit dans la seconde.*/
int main()  {

    int A,B,C,D;

    printf("Please enter a Number A : ");
    scanf("%d",&A);

    printf("Please enter a Number B : ");
    scanf("%d",&B);

    if (A*B>0)
    {
        C = A;
        A = B;
        B = C;
    }
    
    else{
        C = A + B;
        D = A * B;
        A = C ;
        B = D ;
    }

    printf("The New Value Of A Is ; %d \n",A);
    printf("The New Value Of B Is ; %d \n",B);

    return 0;
}