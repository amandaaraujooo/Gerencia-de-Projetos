

int main(){
 
    int num1,num2,num3;

    printf("Digite o primeiro numero:");
    scanf("%d",&num1);

    printf("Digite o segundo numero:");
    scanf("%d",&num2);

    printf("Digite o terceiro numero:");
    scanf("%d",&num3);

    if(num1>0){
        printf("%d numero é maior que 0.\n",num1);
    }
    if(num2>0){
        printf("%d numero é maior que 0.\n",num2);
    }
    if(num3>0){
        printf("%d numero é maior que 0.\n",num3);
    }
    
    
    if(num1==0){
        printf("%d numero igual a 0.\n",num1);
    }
    if(num2==0){
        printf("%d numero igual a 0.\n",num2);
    }
    if(num3==0){
        printf("%d numero igual a 0.\n",num3);
    }
    if(num1<0){
        printf("%d numero menor que 0.\n",num1);
    }
    if(num2<0){
        printf("%d numero menor que 0.\n",num2);
    }
    if(num3<0){
        printf("%d numero menor que 0.\n",num3);
    }

    return 0;
}