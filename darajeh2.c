#include<stdio.h>
#include<conio.h>
main(){
float a,b,c,delta,x1,x2;
printf("enter zarayeb");
scanf("%f %f %f", &a,&b,&c);
if(a==0){
    printf("moadele daraje 2 nist");
}else{
    delta=(b*b)-(4*a*c);
}
if(delta<0){
    printf("moadele javab nadarad");
    break;

}else{
    x1=((-b)+sqrt(delta))/(2*a);
    x2=((-b)-sqrt(delta))/(2*a);
    printf("javab moadele barabar ast ba")
    printf("%f %f",&x1,&x2)
}
getch();
}