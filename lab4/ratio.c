// program to find the ratio
# include <stdio.h>
int main(){
    float male , female, ratio;
    printf("Enter the number of males in class:\n");
    scanf("%f",&male);
    printf("Enter the number of female in the class:\n");
    scanf("%f",&female);
    if (female!= 0){
        ratio = (male / female)* 100 ;
        printf("The ratio is %f\n",ratio);
    }
    else{
        printf("invalid");
    }
    
    return 0;
}
