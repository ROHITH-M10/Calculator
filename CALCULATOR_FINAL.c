#include<stdio.h>
 
#include <math.h>  
#include <stdlib.h>  
#include<time.h>
/*1*/     
int addition();  
int subtract();  
int multi();  
int divi();  
int sqr();  
int sqrt1(); 
double sin_v();
double cos_v();
int Loga();
int POW();
int power(int x, int y);



void exit();  

/*2*/
void findGp(int a, int n, int r);
int GP();
void findAp(int a, int n, int tn, int i, int d);
int AP() ;
void fib();
void hp();
void LCM();
void HCF();


/*3*/
void complex();
void operations(int ,float , float ,float ,float );

/*4*/
void DOTPRODUCT(  int x1,int x2,int y1,int y2,int z1,int z2);
void CROSSPRODUCT( int x1,int x2,int y1,int y2,int z1,int z2);
void ADDVECTOR( int x1,int x2,int y1,int y2,int z1,int z2);
void SUBVECTOR( int x1,int x2,int y1,int y2,int z1,int z2);
/*5*/
int dectobin(int n);
int bintodec(int n);
int dectohex(int decimalNumber);
int dectoct(int decimalnum);
/*6*/
void add(float a,float b,float c,float d);
void sub(float a,float b,float c,float d);
void multiply(float a,float b,float c,float d);
void divide(float a,float b,float c,float d);
/*7*/
long int fact(int n);
void permutation(int n, int r);
void c(int n, int r);
/*8*/
int matrixaddition();
int  matrixsubtraction();
int matrixmultiplication();
int transpose();
int Matrix();
/*9*/
int lineareq();
int rootqudratic();



int main()
{
    printf("\n\n\t\tTopic : CALCULATOR \n\t\t Group : 10\n");
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("\t\tDate and time: %d-%02d-%02d %02d:%02d\n",tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900, tm.tm_hour, tm.tm_min);
    int choice,flag=1;
    int vx1,vx2,vy1,vy2,vz1,vz2,op=0,n,re,r1,option;;
    float p,q,r,s;
    
    while(flag)
    {   printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
        printf("\n\n1. Arithmetic Operations:\n");  
        printf("2. Sequence and Series:\n"); 
        printf("3. Complex Operations \n"); 
        printf("4. Vector Operations\n");
        printf("5. Number Systerm Conversion:\n");
        printf("6. Fraction Operations\n");
        printf("7. Permutation and Combinations\n");
        printf("8. Matrix Operations\n");
        printf("9. Solving Linear Equation\n");
        
        printf("10. Exit\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
              
    printf("----ARITHMETIC CALCULATOR----\n\n");
    printf("Please choose your option:"
          "\n1 = Addition"
          "\n2 = Subtraction"
          "\n3 = Multiplication"
          "\n4 = Division"
          "\n5 = Square"
          "\n6 = Square Root "
          "\n7 = Sine function "
          "\n8 = Cosine Function "
          "\n9 = Logarithm "
          "\n10 = Power of a Number "
          "\n11 = Exit "
          "\n\nEnter Your Choice: ");
        scanf ("%d", &op);  
    switch (op)  
    {  
        case 1:  
            addition(); 
            break;  
              
        case 2:  
            subtract();   
            break;  
              
        case 3:  
            multi();  
            break;
              
              
        case 4:  
            divi();   
            break;   
              
        case 5:  
            sqr();   
            break;  
              
        case 6:  
            sqrt1();  
            break; 
        case 7:  
            sin_v();   
            break;  
        case 8:  
            cos_v();   
            break;  
        case 9:  
            Loga();   
            break;  
        case 10:  
            POW();   
            break; 
              
        case 11:  
            break;  
              
        default: printf("\nInvalid Input ");
    }  
  
      
            break;

        case 2:
    printf("\n\n----Sequence and Series----\n\n");
    printf("\n1. Arithmetic Progression\n");
    printf("2. Geometric Progression\n");
    printf("3. Harmonic Progression\n");
    printf("4. Fibonacci Series\n");
    printf("5. LCM\n");
    printf("6. HCF\n");
    printf("Enter your choice :");
    scanf("%d",&option);
    
    switch(option){
        
        case 1:
            AP();
            break;
        
        case 2:
            GP();
            break;
            
        case 3:
            hp();
            break;
            
        case 4:
            fib ();
            break;
        case 5:
            LCM();
            break;
        case 6:
            HCF();
            break;
            
        default:
            printf("Invalid Input");
        
        
        
    }
    
    
    
break;
 

        case 3:
            complex();
                    break; 
            case 4:
                     
                    printf("\n\n----VECTOR CALCULATOR----\n\n");                    
                    printf("\nEnter the VECTOR 1 (X1,Y1,Z1):\n");
                    scanf("%d %d %d",&vx1,&vy1,&vz1);
                    printf("Enter the VECTOR 2 (X2,Y2,Z2):\n");
                    scanf("%d %d %d",&vx2,&vy2,&vz2);
                    printf("\nThe Vectors are:\n");
                    printf("\t[A]. %d i + %d j + %d k\n",vx1,vy1,vz1);
                    printf("\t[B]. %d i + %d j + %d k\n",vx2,vy2,vz2);
                    printf("\n\tOperations:\n");
                    
                    printf("\t\n\t\t1.Dot Product:");
                    printf("\t\n\t\t2.Cross Product:");
                    printf("\t\n\t\t3.Vector Addition:");
                    printf("\t\n\t\t4.Vector Subtraction:");
                    printf("\t\n\t\t5.Exit\n\n"); /* only for user didnt want to open vector*/
                    printf("\t\tEnter your choice :  ");
                    
                        
                    
                    
                    scanf("%d",&op);
                            switch(op)
                            {
                            case 1:
                                    DOTPRODUCT( vx1, vx2, vy1,vy2, vz1, vz2);
                                    break;
                            case 2:
                                    CROSSPRODUCT(vx1, vx2, vy1,vy2, vz1, vz2);
                                    break;
                            case 3:
                                    ADDVECTOR(vx1, vx2, vy1,vy2, vz1, vz2);
                                    break;
                            case 4:
                                    SUBVECTOR(vx1, vx2, vy1,vy2, vz1, vz2);
                                    break;
                            case 5:
                                    break;

                            }


                    break; 

            case 5:
    printf("\n\n----Number Systerm Conversion:----\n\n");        
    printf("Enter the choice:  \n\n"); 
    printf("\t\t1. Decimal(Base- 10) to Binary(Base- 2)\n\t\t2. Binary(Base- 2)   to Decimal(Base- 10)\n");
    printf("\t\t3. Decimal(Base- 10) to Hexadecimal(Base- 16)\n\t\t4. Decimal(Base- 10) to Octal(Base- 8)\n");
    scanf("%d",&re);
    printf("\nEnter the number to convert:  ");    
    scanf("%d",&n);
    switch (re)
    {
    case 1:
        dectobin(n);
        break;

    case 2:
        bintodec(n);
        break;
    case 3:
        dectohex(n);
        break;
    case 4:
        dectoct(n);
    default:
        break;
    }
break;

            case 6:
                        
                        printf("\n\n----Fraction Operations----\n\n");   
                        printf("Enter the numerator and denominator of the 1st fraction : \n");
                        scanf("%f %f",&p,&q);
                        printf("Enter\n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division :\n");
                        scanf("%d",&op);
                        printf("\nEnter the numerator and denominator of the 2nd fraction : \n");
                        scanf("%f %f",&r,&s);
                        switch(op)
                        {
                        case 1:
                        add(p,q,r,s);
                        break;
                        case 2:
                        sub(p,q,r,s);
                        break;
                        case 3:
                        multiply(p,q,r,s);
                        break;
                        case 4:
                        divide(p,q,r,s);
                        break;
                        }
                        
                        break;

            case 7:
     printf("\n\n----Permutation and Combinations----\n\n");         
    printf("Enter\n 1 for Permutations \n 2 for Combinations \n 3 for Factorial \n");
    scanf("%d",&op);
    if(op==1||op==2)
    {
        printf("Enter the value of n and r\n");
                scanf("%d %d",&n,&r1);
    }
    else if(op==3)
    {
        printf("Enter the value of n\n");
                scanf("%d",&n);
    }
    else
    {
        printf("Enter correct option...");
    }
    switch(op)
        {
            case 1:
                permutation(n,r1);
                break;
            case 2:
                c(n,r1);
                break;
            case 3:
                printf("Factorial of %d : %ld", n, fact(n));
                break;
    
        }
break;
            
            case 8:
            printf("\n\n----Matrix Operations----\n\n");   
             Matrix();
                    break; 
            case 9:
             printf("\n\n----Solving Linear Equation----\n\n");   
             printf("Enter 1 for solving linear equations\nEnter 2 for finding roots of quadratic equations.\n");
    
            scanf("%d",&op);
            switch(op){
                case 1:lineareq();
                break;
                case 2:rootqudratic();
                break;
            }
           break;
        
            case 10:
                    printf("\n\t\t\tCoding is Fun !\n\tCredits:\n");
                    printf("\n\t\t\t\tGROUP 10\n\n");
                    printf("\t\tROHITH M             - CB.EN.U4CSE21048\n");
                    printf("\t\tANUSWETHAA S         - CB.EN.U4CSE21049\n");
                    printf("\t\tNIRANJAN S           - CB.EN.U4CSE21050\n");
                    printf("\t\tS.V.S KRISHNA ADITYA - CB.EN.U4CSE21051\n");
                    printf("\t\tSAJITH RAJAN P       - CB.EN.U4CSE21052\n");
                    
                    flag=0; 
                    break;
            default:
                    printf("\n\t\tPlease Enter a Number between (1 to 6)");
                
        }
    }
    
    return 0;
}



/*Function - 1*/
int addition()  
{  
    int i, sum = 0, num, f_num;    
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum +=  f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
int subtract()  
{  
    int a, b, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &a);  
    printf (" The second number is: ");  
    scanf ("  %d", &b);  
    result = a - b;    
    printf (" The subtraction of %d - %d is: %d", a, b, result);  
}  
int multi()  
{  
    int a, b, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &a);  
    printf (" The second number is: ");  
    scanf ("  %d", &b);  
    result = a * b;    
    printf (" The multiplication of %d * %d is: %d", a, b, result);  
}  
int divi()  
{  
    int a, b, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &a);  
    printf (" The second number is: ");  
    scanf ("  %d", &b);  
      
    if (b == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value for divisor ");  
        scanf ("%d", &b);        
    }  
    result = a / b;    
    printf (" \n The division of %d / %d is: %d", a, b, result);  
}  
int sqr()  
{  
    int a, result;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &a);  
      
    result = a * a;    
    printf (" \n The Square of %d is: %d", a, result);  
}  
int sqrt1()  
{  
    float result;  
    int a;  
    printf (" Enter a number to get the Square Root: ");  
    scanf (" %d", &a);  
  
    result = sqrt(a);   
    printf (" \n The Square Root of %d is: %f", a, result);  
}  
double sin_v()
{
    double a,result;
    printf("Enter the value for which u need Sine : ");
    scanf("%lf", &a);
     result = a;

    a = ((a* (3.1415926535897 / 180.0)));

    printf("sin(%0.2lf) = %lf", result, sin(a));
}
double cos_v()
{
    double a,result;
    printf("Enter the value for which you need Cosine : ");
    scanf("%lf", &a);
     result = a;

    a = ((a* (3.1415926535897 / 180.0)));

    printf("cos(%0.2lf) = %lf", result, cos(a));
}
int Loga() {
   double x, ret;
   printf("Enter a number to find log :");
   scanf("%lf",&x);
   ret = log(x);
   printf("log(%lf) = %lf", x, ret);
   
   return(0);
}
int POW()
{
    long int a,b;
    printf (" Enter the base value : ");  
    scanf("%d",&a);
    printf ("\n Enter the exponent value : ");
    scanf("%d",&b);
    printf("\n %d raised to the power of %d is: %d",a,b,power(a,b));
}
/*2*/

int power(int x, int y)
{   int powe=1,i;
    if(y==0){
        return 1;
    }
    else {
        for(i=1; i<=y;++i)
        {
            powe=powe*x;
        }
    }
        return powe;
    }
int GP() 
{    
    int a, n, r;
    printf("Enter the number to find GP : ");
    scanf("%d", &a);
    printf("\nEnter the Total Numbers in this G.P Series:  ");
    scanf("%d", &n);    
    printf("\nEnter the Common Ratio:  ");
    scanf("%d", &r);
    findGp(a,n,r);
    return 0;
}
void findGp(int a, int n, int r)
{  float tn, sum=0;
      sum = (a * (1 - pow(r, n ))) / (1- r);    
   tn = a * (pow(r, n - 1));    
    printf("\n The Sum of Geometric Progression Series =  %.2f", sum);
    printf("\n The tn Term of Geometric Progression Series = %.2f \n", tn);
}
int AP() {
    int a, n, d, tn, i;  
    printf("GENERAL FORM OF ARITHMETIC PROGRESSION: \n a, a + d, a + 2d, a + 3d\n ");
    printf("\nEnter the value of a:");
    scanf("%d", &a);           
    
    printf("Enter the no.of in this A.P Series:");
    scanf("%d", &n);           
    
    printf("Enter the Common Difference:");
    scanf("%d", &d);       
    findAp(a,n,tn,i,d);
    return 0;
}
void findAp(int a, int n, int tn, int i, int d)
    {
        int sum = 0;                
    
    
    sum = (n * (2 * a + (n - 1) * d)) / 2;    
    tn = a + (n - 1) * d;                    
    
    printf("\n Sum of the AP series :\n ");
    for(i = a; i <= tn; i = i + d)
    {
        if(i != tn)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
    }
    printf("\n");
 }
void fib ()
{

  int n, a = 0, b = 1, c = 0;

  int *ptrn;
  int *ptra;
  int *ptrb;
  int *ptrc;
  printf("\nFibonacci Series\n");
  printf ("\nEnter the length of the series : ");
  scanf ("%d", &n);
  printf("\n");


  ptrn = &n;
  ptra = &a;
  ptrb = &b;
  ptrc = &c;
  
  
  
  if (*ptrn<1){
      printf ("Invalid Input");
  }
  
  
  
  else if (*ptrn==1){
        printf("\nFibonacci Series");
        printf("\n\n");
        printf ("%d  ",*ptra);
  }
  
  
  else{
      
        printf("\nFibonacci Series");
        printf("\n\n");

        printf ("%d   ", *ptra);
        printf("%d",*ptrb);
    
    
      for (int i = 1; i < *ptrn -1; i++)
        {
          *ptrc = *ptra + *ptrb;
          printf ("   %d", *ptrc);
          *ptra = *ptrb;
          *ptrb = *ptrc;
    
    
        }
    
  }



}
void LCM()  
{  
      
    printf("LCM Calculator\n\n");
    
    int n1,n2,hcf,lcm;  
    
    
    printf ( "Enter number 1 :");  
    scanf ( "%d",&n1); 
    
    printf ( "Enter number 2 :");  
    scanf ( "%d",&n2); 
    printf("\n");
    
    int *number_1,*number_2,*ptr_hcf,*ptr_lcm;
    number_1 = &n1;
    number_2 = &n2;
    ptr_hcf  = &hcf;
    ptr_lcm = &lcm;
      
   
    for (int i = 1; i <= *number_1 && i <= *number_2; ++i)  
    {  
       
        if  (*number_1 % i ==0 && *number_2 % i == 0)  
        *ptr_hcf = i;        
    }  
    *ptr_lcm = ((*number_1) * (*number_2)) / (*ptr_hcf);  
      
    printf( "The LCM of %d and %d is %d ",*number_1,*number_2,*ptr_lcm);  
     
}  
void HCF()  
{  
  
    printf("HCF Calculator\n\n");
    
    int n1,n2,hcf;  
    
    
    printf ( "Enter number 1 :");  
    scanf ( "%d",&n1); 
    
    printf ( "Enter number 2 :");  
    scanf ( "%d",&n2); 
    printf("\n");
    
    int *number_1,*number_2,*ptr_hcf;
    number_1 = &n1;
    number_2 = &n2;
    ptr_hcf  = &hcf;
    
    if(*number_1==0){
        *ptr_hcf = *number_2;
        
    }
    
    else if(*number_2==0){
        *ptr_hcf = *number_1;
        
    }
    
    else{
        for(int i = 1; i <= *number_1 && i <= *number_2; ++i)  
    {  
        if ((*number_1 % i ==0) && (*number_2 % i == 0))  
            *ptr_hcf = i; 
    }  
    }
    
     
    printf ("HCF of %d and %d is %d",*number_1,*number_2,*ptr_hcf);  
      
}  
void hp(){
    float value;
    float n;
    float cr;
    float sum=0;
    printf("\nHarmonic Progression\n");
    printf("\nGeneral form :\n \n1/a, 1/b, 1/c ...");
    printf("\n\nEnter the Value of a :");
    scanf("%f",&value);
    printf("Enter the common difference :");
    scanf("%f",&cr);
    printf("Enter the no. of terms of the HP :");
    scanf("%f",&n);
    printf("\n");
    printf("\nHarmonic Progression ");
    printf("\n\n");
    
    float *a = &value;
    float *no = &n;
    float *common_ratio= & cr;
    
    float *sum_add = &sum;
    
    for (int i=0;i<n;i++){
        
        
        printf("1/%.0f  ",*a);
        *sum_add=*sum_add + (1/(*a));
        
        *a=*a+*common_ratio;
        
    }
    
    printf("\n\nSum of the HP");
    printf("\n\n%.2f",*sum_add);
    
}



/*3*/
void complex(){
    
    int optioncn;
    float a,b,c,d;
    
    printf("\n      COMPLEX NUMBER CALCULATOR\n\n\n");
    printf("Please enter 1 for addition of complex numbers\n");
    printf("Please enter 2 for subtraction of complex numbers\n");
    printf("Please enter 3 for multiplication of complex numbers\n");
    printf("Please enter 4 for division of complex numbers\n\n");
    printf("Choice :");
    
    scanf("%d",&optioncn);
    
    printf("\n");
    if(optioncn==1 || optioncn==2 || optioncn==3 || optioncn==4){
        printf("Standard form of 2 complex numbers z1 and z2 is given below\n\n");
        printf("z1 = a + i b\nz2 = c + i d\n\n");
        
        printf("Enter the real part of z1 :");
        scanf("%f",&a);
        
        printf("Enter the imaginary part of z1 :");
        scanf("%f",&b);
        
        printf("Enter the real part of z2 :");
        scanf("%f",&c);
        
        printf("Enter the imaginary part of z2 :");
        scanf("%f",&d);
        printf("\n");
        
        operations( optioncn, a,  b, c, d);
    }
    
    else{
        printf("Not a valid option");
        printf("\n\n");
    }
}
void operations(int optioncn,float a, float b,float c,float d){
    
    float rpart,ipart;
    
    printf("________________________________\n\n");
    
    if (optioncn==1){
        printf("Addition of complex numbers z1 + z2 =\n\n");
        printf("(%.2f + i (%.2f) ) + (%.2f + i (%.2f) ) =\n\n",a,b,c,d);
        rpart=a+c;
        ipart=b+d;
        printf("%.2f + i (%.2f)\n",rpart,ipart);

    }
    else if (optioncn==2){
        printf("subtraction of complex numbers z1 - z2 =\n\n");
        printf("(%.2f + i (%.2f) ) - (%.2f + i (%.2f) ) =\n\n",a,b,c,d);
        rpart=a-c;
        ipart=b-d;
        printf("%.2f + i (%.2f)\n",rpart,ipart);

    }
    else if (optioncn==3){
        printf("Multiplication of complex numbers z1 * z2 =\n\n");
        printf("(%.2f + i (%.2f) ) * (%.2f + i (%.2f) ) =\n\n",a,b,c,d);
        rpart= (a*c) - (b*d);
        ipart= (a*d) + (b*c);
        printf("%.2f + i (%.2f)\n",rpart,ipart);

    }
    
    else{
        
        if(c==0 && d==0){
            printf("Undefined\n");
            
        }
        
        else{
            
            printf("Division of complex numbers z1 / z2 =\n\n");
            printf("(%.2f + i (%.2f) ) / (%.2f + i (%.2f) ) =\n\n",a,b,c,d);
            rpart= ((a*c)+(b*d))/((c*c)+(d*d));
            ipart= ((b*c)-(a*d))/((c*c)+(d*d));
            printf("%.2f + i (%.2f)\n",rpart,ipart);
        }
    }
    printf("\n");
    
}
/* 4 */
    void DOTPRODUCT(int x1,int x2,int y1,int y2,int z1,int z2)
        {
                int dotpro;
                dotpro= (x1*x2)+(y1*y2)+(z1*z2);
                printf("\nThe Dotproduct of the vectors is: %d\n\n",dotpro);
                
                
        }
    void CROSSPRODUCT(int x1,int x2,int y1,int y2,int z1,int z2)
        {
                int p1,p2,p3;
                p1= (y1*z2)-(z1*y2);
                p2= (z1*x2)-(x1*z2);
                p3= (x1*y2)-(y1*x2);
                printf("\nThe Crossproduct of the vectors is: %d i + %d j + %d k\n\n",p1,p2,p3);
                
        }
    void ADDVECTOR(int x1,int x2,int y1,int y2,int z1,int z2)
        {
                int p1,p2,p3;
                p1= x1+x2;
                p2= y1+y2;
                p3= z1+z2;
                printf("\nThe Addition of the vectors is: %d i + %d j + %d k\n\n",p1,p2,p3);
            
        }
    void SUBVECTOR(int x1,int x2,int y1,int y2,int z1,int z2)
        {
                int p1,p2,p3;
                p1= x1-x2;
                p2= y1-y2;
                p3= z1-z2;
                printf("\nThe Subtraction of the vectors is: %d i + %d j + %d k\n\n",p1,p2,p3);
            
        }
/* 5 */
int dectobin(int n ){
    int a[10],i;    
 for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}} 
int bintodec(int n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  printf("%d",dec);
  }
int dectohex(int decimalNumber)
{
    

	int remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[100];
	
	quotient = decimalNumber;
	while(quotient!=0) {
		temp = quotient % 16;
		
		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("Equivalent hexadecimal value of decimal number %d: ",decimalNumber);
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hexadecimalNumber[j]);
	return 0;
}
int dectoct(int decimalnum){
   
    int remainder, quotient;
    int octalNumber[100], i = 1, j;
 
     
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal no %d: ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
    return 0;
}


/*6*/
void add(float a,float b,float c,float d)
{
    float sum;
    sum=(d*a+b*c)/(b*d);
    printf("\nThe sum is : %.2f",sum);
}
void sub(float a,float b,float c,float d)
{
    float sub;
    sub=(a*d-b*c)/(b*d);
    printf("\nThe subtraction is : %.2f",sub);
}
void multiply(float a,float b,float c,float d)
{
    float multi;
    multi=(a*c)/(b*d);
    printf("\nThe multiplication is : %.2f",multi);
}
void divide(float a,float b,float c,float d)
{
    float divi;
    divi=(a*d)/(b*c);
    printf("\nThe division is : %.2f",divi);
}
/*7*/
long int fact(int n)
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
void permutation(int n, int r)
{
    int p, z;
    z=n-r;
    p=fact(n)/fact(z);
    printf("The Permutation is : %d",p);
}
void c(int n, int r)
{
    int c, z;
    z=n-r;
    c=fact(n)/(fact(z)*fact(r));
    printf("The Combination is : %d",c);
    
}


/*8*/
int Matrix()
{
    int op;
    printf("\n\tOperations:\n");
                    printf("\t\n\t\t1.Matrix Addition:");
                    printf("\t\n\t\t2.Matrix Subtraction:");
                    printf("\t\n\t\t3.Matrix Multiplication:");
                    printf("\t\n\t\t4.Transpose and determinant:");
                    printf("\t\n\t\t5.Exit\n\n"); /* only for user didnt want to open vector*/
                    printf("\t\tEnter your choice :  ");
                    scanf("%d",&op);
                            switch(op)
                            {
                            case 1: matrixaddition();
                                   
                                    break;
                            case 2:
                                   matrixsubtraction();
                                    break;
                            case 3:matrixmultiplication();
                                    
                                    break;
                            case 4:
                                   transpose();
                                    break;
                            case 5:
                                    break;

                            }

    return 0;
    
    
}
int matrixaddition(){
int i,j,n,m;
 printf("Enter number of rows\n");
 scanf("%d",&n);
  printf("Enter number of columns\n");
 scanf("%d",&m);
  int a1[n][m],a2[n][m],add[n][m];
 printf("Enter Matrix 1\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",(*(a1+i)+j));
  }
 }
 printf("Enter Matrix 2\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",(*(a2+i)+j));
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   *(*(add+i)+j)=*(*(a1+i)+j)+*(*(a2+i)+j);
  }
 }
  printf("Addition of above matrices is\n");
  for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("%d\t",*(*(add+i)+j));
  }
  
  printf("\n");
 } 
}
int matrixsubtraction() {
  int i,j,n,m;
 printf("Enter number of rows\n");
 scanf("%d",&n);
  printf("Enter number of columns\n");
 scanf("%d",&m);
 int a1[n][m],a2[n][m],sub[n][m];
  printf("Enter Matrix 1\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",(*(a1+i)+j));
  }
 }
 printf("Enter Matrix 2\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   scanf("%d",(*(a2+i)+j));
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
  *(*(sub+i)+j)=*(*(a1+i)+j)-*(*(a2+i)+j);
  }
 }
 printf("Subtration of above matrices is\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("%d\t",*(*(sub+i)+j));
  }
  printf("\n");
 }
}
int matrixmultiplication()
{
    int i,j,choice,a[100],b[100],c[100];
printf("Enter the order of matrix\n");
printf("Enter 1 for 2*2 matrix\n");
printf("Enter 2 for 3*3 matrix\n");
scanf("%d",&choice);
if(choice==1){
    printf("Enter the elements of the matrix 1 in the order a11,a12,a21,a22\n");
for(i=0;i<=3;i++)
{
    scanf("%d",&a[i]);
}
 printf("Enter the elements of the matrix 2  in the order b11,b12,b21,b22\n");
for(i=0;i<=3;i++)
{
    scanf("%d",&b[i]);
}
printf("The first matrix is\n");
printf("%d    %d \n",a[0],a[1]);
printf("%d    %d \n",a[2],a[3]);
printf("The second  matrix is\n");
printf("%d    %d \n",b[0],b[1]);
printf("%d    %d \n",b[2],b[3]);
c[0]=a[0]*b[0]+a[1]*b[2];
c[1]=a[0]*b[1]+a[1]*b[3];
c[2]=a[2]*b[0]+a[3]*b[2];
c[3]=a[2]*b[1]+a[3]*b[3];
printf("THE product of the matrices is\n");
printf("%d    %d \n",c[0],c[1]);
printf("%d    %d \n",c[2],c[3]);
    
    
}
if(choice==2){
    printf("Enter the elements of the matrix 1 in the order a11,a12,a13,a21,a22,a23,a31,a32,a33\n");
for(i=0;i<=8;i++)
{
    scanf("%d",&a[i]);
}
 printf("Enter the elements of the matrix 2  in the order b11,b12,b13,b21,b22,b23,b31,b32,b33\n");
for(i=0;i<=8;i++)
{
    scanf("%d",&b[i]);
}
printf("The first matrix is\n");
printf("%d    %d   %d\n",a[0],a[1],a[2]);
printf("%d    %d   %d\n",a[3],a[4],a[5]);
printf("%d    %d   %d\n",a[6],a[7],a[8]);
printf("The second  matrix is\n");
printf("%d    %d   %d\n",b[0],b[1],b[2]);
printf("%d    %d   %d\n",b[3],b[4],b[5]);
printf("%d    %d   %d\n",b[6],b[7],b[8]);
c[0]=a[0]*b[0]+a[1]*b[3]+a[2]*b[6];
c[1]=a[0]*b[1]+a[1]*b[4]+a[2]*b[7];
c[2]=a[0]*b[2]+a[1]*b[5]+a[2]*b[8];
c[3]=a[3]*b[0]+a[4]*b[3]+a[5]*b[6];
c[4]=a[3]*b[1]+a[4]*b[4]+a[5]*b[7];
c[5]=a[3]*b[2]+a[4]*b[5]+a[5]*b[8];
c[6]=a[6]*b[0]+a[7]*b[3]+a[8]*b[6];
c[7]=a[6]*b[1]+a[7]*b[4]+a[8]*b[7];
c[8]=a[6]*b[2]+a[7]*b[5]+a[8]*b[8];
printf("THE product of the matrices is\n");
printf("%d    %d   %d\n",c[0],c[1],c[2]);
printf("%d    %d   %d\n",c[3],c[4],c[5]);
printf("%d    %d   %d\n",c[6],c[7],c[8]);
    
    
}

    return 0;
}
int transpose()
{
     int m, n, i, j, matrix[10][10], transpose[10][10],operation;
  printf("Enter the operation to be performed\n");
  printf("Enter 1 for transpose\n");
  printf("Enter 2 for determinant\n");
  scanf("%d",&operation);
 if(operation==1){
   printf("Enter rows and columns :\n");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix\n");
   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix[i][j]);
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
         transpose[j][i] = matrix[i][j];
          printf("entered matrix:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", matrix[i][j]);
      printf("\n");
   }
   printf("Transpose of the matrix:\n");
   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++){
         printf("%d\t", transpose[i][j]);}
         printf("\n");
   }
      
 }
      if(operation==2)
      {
          int a[3][3], i, j;
 
 int determinant;
  printf("Enter the 9 elements of matrix: \n");
  for(i = 0 ;i < 3;i++)
      for(j = 0;j < 3;j++)
           scanf("%d", &a[i][j]);
 
  printf("The matrix is\n");
  for(i = 0;i < 3; i++){
      printf("\n");
      for(j = 0;j < 3; j++)
           printf("%d\t", a[i][j]);
  }
 
  determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 
  printf("Determinant of 3X3 matrix: %d\n", determinant);
      }
   return 0;
}
/*9*/
int lineareq(){
    float a,b,c,p,q,r,x,y;
printf("Enter the coefficents of the first equation of the form ax+by=c\n");
scanf("%f %f %f",&a,&b,&c);
printf("Enter the coefficents of the second equation of the form px+qy=r\n");
scanf("%f %f %f",&p,&q,&r);
if(((a*q-p*b)!=0)&&((b*p-q*a)!=0))
{
printf("The solution to the equations is unique\n");
x=(c*q-r*b)/(a*q-p*b);
y=(c*p-r*a)/(b*p-q*a);
printf("The value of x=%f\n",x);
printf("The value of y=%f\n",y);
}
else
if(((a*q-p*b)==0)&&((b*p-q*a)==0)&&((c*q-r*b)==0)&&((c*p-r*a)==0)){
    printf("Infinitely many solutions are possible\n");
    printf("The value of x can be varied and y can be calculated according to x's value using relation\n");
    printf("y=%f+(%f)x",(c/b),(-1*a/b));
}

else{
if(((a*q-p*b)==0)&&((b*p-q*a)==0)&&((c*q-r*b)!=0)&&((c*p-r*a)!=0))
printf("No solutions are possible\n");

}
}
int rootqudratic(){
   int a, b, c, d;
   int root1, root2, realPart, imaginaryPart;
  printf("Enter cofficients in the form ax^2+bx+c: ");
  scanf("%d %d %d", &a, &b, &c);
 printf("The quadratic equation: %dx^2%+dx%+d \n",a,b,c);
   d = (b*b) - 4*a*c; 
 if( d>1 )
   {
     root1 = (-b+sqrt(d)) / 2*a;
     root2 = (-b-sqrt(d)) / 2*a;
     printf("Roots are %d and %d\n", root1, root2);
   }
   else if(d==0)
   {
     root1 = root2 = -b/2*a;
     printf("Roots are %d and %d\n", root1, root2);
   }
   else
   {
     realPart = -b/2*a;
     imaginaryPart = sqrt(d)/2*a;
     printf("root1 = %d + i(%d)\n", realPart, imaginaryPart);
     printf("root1 = %d - i(%d)\n", realPart, imaginaryPart);
   }
}

