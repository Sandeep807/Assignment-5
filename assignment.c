                                     More on Iterative Control Statements
1. Write a program to print MySirG N times on the screen

#include<stdio.h>
int main(){
    int n,i;
    printf("How many time you want prinft MySirG: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("MySirG\n\n");
    }
    return 0;
}

2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main(){
    int n,i;
    printf("How many time you want to N natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}


3. Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
int main(){
    int n,i;
    printf("How many time you want to N natural number in reverse: ");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        printf("%d\n",i);
    }
    return 0;
}


4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter first N odd natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",(2*i-1));
    }
    return 0;
}


5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter first N odd natural numbers: ");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        printf("%d\n",(2*i-1));
    }
    return 0;
}


6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter first N even natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",(2*i));
    }
    return 0;
}


7. Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter first N even natural numbers: ");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        printf("%d\n",(2*i));
    }
    return 0;
}


8. Write a program to print squares of the first N natural numbers

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter squares of the first N natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",(i*i));
    }
    return 0;
}

9. Write a program to print cubes of the first N natural numbers


#include<stdio.h>
int main(){
    int n,i;
    printf("Enter squares of the first N natural numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",(i*i*i));
    }
    return 0;
}


10. Write a program to print a table of N.



#include<stdio.h>
int main(){
    int n,i;
    printf("Enter table of n numbers: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d\n",(n*i));
    }
    return 0;
}
