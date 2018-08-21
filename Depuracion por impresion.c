#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>=b)? a:b
int absoluto(int x) 
{ 
    return (x>0)? x:-x; 
    
}


int main(int argc, char *argv[])
{
int A,B,R; A=-10; B=725;
 A=absoluto(A);  
 B=absoluto(B);
   printf("%d\t%d\n",A,B);
   R=A;
   A=max(A,B); B=(A-R!=0)?R:B;
   printf("%d\t%d\n",A,B);
 inicio:
       system("pause");
       R=A%B;
       A=B;
       B=(R==0)? B:R;
       printf("R=%d\",R);
       goto inicio;
       
salida: 
  
   
  system("PAUSE");	
  return 0;
}
