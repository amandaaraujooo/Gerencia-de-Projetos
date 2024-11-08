int main(){
 
   int num,resul;
   
   printf("Digite um numero:");
   scanf("%d",&num);
   
   resul = num%2;
   
   if(resul == 0){
       printf("o numero é par:%d",num);
   }
   
   else{
       printf("o numero é impar:%d",num);
   }
    return 0;
}