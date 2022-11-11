#include<iostream>
#include<cmath>
#include<process.h>
#include<fstream>
#include<iomanip>
using namespace std;
class calc
{
  public:
  // Addition
  long double add (long double x , long double y)
 {
   long double z;
   z=x+y;

   return (z) ;
  }
  // Subtraction
  long double subtract(long double x, long double y)
 {
   long double z;
z=x-y ;
   return (z) ;
  }
  // Multiplication
  long double multiplication(long double x, long double y)
 {
   long double z;
   z=x*y;
   return (z) ;
  }
  // Division
  long double division(long double x, long double y)
 {
   long double z;
   z=x/y;


 if (y==0)
 {
 cout<<"DIVISION NOT POSSIBLE, \nENTER ANOTHER SECOND NUMBER"<<endl;
 cin>>y;
}
 else
{
  z=x/y;
 }
  return (z) ;
 }
//  Percentage
long double percentage(long double x, long double y)
{
   long double z; 
   z=(y*x)/100;                                                        
  return (z) ;
 }
//  Power
long double power(long double x, long double y)
{
  int z= pow (x,y);
  return (z) ;
 }
//  Logarithmic
long double logarithm(long double x)
{
long double y;
  char c;
  cout<<"DO YOU WANT NATURAL LOGARITHM OR COMMON LOGARITHM?? \n [n] NATURAL \n [c] COMMON "<<endl;
  cin>>c;
  if(c=='n')
  y=log(x);
  else if( c=='c')

   y=log (10);
   return (y) ;
  }
  long double exponential(long double x)
  {
    long double y;
    y = exp(x);
    return (y);
  }
  // Trigonometric Function
 long double trigonometry (long double x)
{
  char c;
  long double y;
  cout<<" WHICH FUNCTION WOULD LIKE TO USE ?? \n Sin(s), Cosine(c), Tan(t) ,aSin(S) ,aCosine(C) ,aTan(T)?? "<<endl;     
  cin>>c;
  y= (22*x)/( 180*7);
  if(c=='s')
  y=sin(x);
  else if(c=='c')
  y=cos(x);
  else if(c=='t')
  y=tan(x) ;
  else if(c== 'S')	
  y= asin(x);
  else if( c== 'C')
  y=acos(x);
  else if( c== 'T')
  y= atan(x);
  return (y);
 
 
  }
  // Lowest Common Multiplier
  long int lcm(long int m,long int n) {
  long int a;
   a = (m > n) ? m: n;
   while (true) {
      if (a % m == 0 && a % n == 0)
         return a;
         ++a;
   }
}
// Greatest Common Divisor

  long int gcd(long int m,long int n) {
  long int r = 0, a, b;
   a = (m > n) ? m : n;
   b = (m < n) ? m : n;
   r = b;
   while (a % b != 0) {
      r = a % b;
      a = b;
      b = r;
   }
   return r;
}
// Factorial
long int factorial(long int a){
  long int count;
  long ft = 1;
  for( count =1; count<=a ; count++){
       ft =ft*count;
  }
  return ft;

}
//  Permutation and Combination
int fact(int a){
  if(a>1){
    return a*fact(a-1);
  }
  else{
    return 1;
  }
}
// Linear Equation
void linear(double a, double b, double c ,double d){
  if(a==c && b==d){
    cout<<"\nInfinite Solutions"<<endl;
  }
  else if(a ==c){
    cout<<"\nWrong Equations :No solution"<<endl;
  }
  else{
    double x = (d-b)/(a-c);
    cout<<"\nYour Solution is = "<<x<<endl;
  }
}
//  Quadratic Equation
void quadratic(double a,double b ,double c ){
 double d = (b*b)-(4*a*c);
  double x1,x2,real,img;
  if(d>0){
    cout<<"\nRoots are real and distinct ";
    x1 = (-b + sqrt(d) / (2*a));
    x2 = (-b - sqrt(d) / (2*a));
    cout<<"\n X1 = "<<x1<<endl;
    cout<<"\n X2 = "<<x2<<endl;
  }
  else if(d==0){
    cout<<"\nRoots are real and equal ";
    x1 = (-b + sqrt(d) /(2*a));
    cout<<"\n X1 = "<<x1<<endl;
    cout<<"\n X2 = "<<x1<<endl;
  }
  else{
    cout<<"\nRoots are real complex and distinct ";
    real = -b/(2*a);
    img = sqrt(-d)/(2*a);
    cout<<"\n X1 = "<<real<<" + "<<img<<"i"<<endl;
    cout<<"\n X2 = "<<real<<" - "<<img<<"i"<<endl;
  }
}
// Unit Conversion
void unitConvertor(){
  cout<<"\nPress the number key according to the option you want to go with .\n";
  cout<<"\n[1] for Distance Conversion\n[2] for Mass Conversion\n[3] for Currency Conversion\n[4] for time Conversion\n[5] for temperature Conversion"<<endl;
  int userInput;
  cin>>userInput;
  double input,output;
  int value;
  switch(userInput)
  {
  case 1:
     cout<<"\nYOU ARE IN DISTANCE CONVERSION"<<endl;
     cout<<"\nSelect a desired option ";

     cout<<"\n[1]km ---> miles\n[2]km ---> feet\n[3]km ---> Inches\n[4]Miles ---> km \n[5]Miles ---> feet \n[6]Miles ---> Inches\n[7] Miles ---> km \n[8] Miles ---> feet \n[9] Miles ---> Inches\n";
    
     cin>>value;
      switch(value)
       {
        case 1 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in kilometers =";
          cin>>input;
          output = input*0.62137;
          cout<<"\n\n"<<setw(5)<<input<< " km = "<<output<<"miles"<<endl;
          break;
        case 2:
          cout<<"\n\n"<<setw(5)<<"Enter value in kilometers =";
          cin>>input;
          output = input*3280.84;
          cout<<"\n\n"<<setw(5)<<input<< " km = "<<output<<"feet"<<endl;
          break;
        case 3:
          cout<<"\n\n"<<setw(5)<<"Enter value in kilometers =";
          cin>>input;
          output = input*39370;
          cout<<"\n\n"<<setw(5)<<input<< " km = "<<output<<"inches"<<endl;
          break;
        case 4 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in Miles =";
          cin>>input;
          output = input*1.6093;
          cout<<"\n\n"<<setw(5)<<input<< " miles = "<<output<<"km"<<endl;
          break;
        case 5:
          cout<<"\n\n"<<setw(5)<<"Enter value in Miles =";
          cin>>input;
          output = input*5280;
          cout<<"\n\n"<<setw(5)<<input<< " miles = "<<output<<"feet"<<endl;
          break;
        case 6:
          cout<<"\n\n"<<setw(5)<<"Enter value in Miles =";
          cin>>input;
          output = input*63360;
          cout<<"\n\n"<<setw(5)<<input<< " miles = "<<output<<"inches"<<endl;
          break;
        case 7 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in Feet =";
          cin>>input;
          output = input*0.000304;
          cout<<"\n\n"<<setw(5)<<input<< " feet = "<<output<<"km"<<endl;
          break;
        case 8:
          cout<<"\n\n"<<setw(5)<<"Enter value in Feet =";
          cin>>input;
          output = input*0.000189;
          cout<<"\n\n"<<setw(5)<<input<< " feet = "<<output<<"miles"<<endl;
          break;
        case 9:
          cout<<"\n\n"<<setw(5)<<"Enter value in Feet =";
          cin>>input;
          output = input*12;
          cout<<"\n\n"<<setw(10)<<input<< " feet = "<<output<<"inches"<<endl;
          break;
      } 
      break;
  case 2:
     cout<<"\nYOU ARE IN MASS CONVERSION "<<endl;
     cout<<"\nSelect a desired option ";

     cout<<"\n[1]Milligram ---> Gram\n[2]Milligram  ---> Kilogram\n[3]Milligram ---> Ton\n[4]Gram ---> Milligram\n[5]Gram  ---> Kilogram\n[6]Gram ---> Ton\n[7]Kilogram ---> Milligram\n[8]Kilogram  ---> Gram\n[9]Kilogram ---> Ton\n[10]Ton ---> Milligram\n[11]Ton  ---> Gram\n[12]Ton ---> Kilogram\n";
    
     cin>>value;
      switch(value)
       {
        case 1 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in Milligram =";
          cin>>input;
          output = input/1000;
          cout<<"\n\n"<<setw(5)<<input<< " Milligram is equal to "<<output<<" gram"<<endl;
          break;
        case 2:
           cout<<"\n\n"<<setw(5)<<"Enter value in Milligram =";
          cin>>input;
          output = input/10000000;
          cout<<"\n\n"<<setw(5)<<input<< " Milligram is equal to "<<output<<" kilogram"<<endl;
          break;
        case 3:
           cout<<"\n\n"<<setw(5)<<"Enter value in Milligram =";
          cin>>input;
          output = input/1000000000;
          cout<<"\n\n"<<setw(5)<<input<< " Milligram is equal to "<<output<<" ton"<<endl;
          break;
        case 4 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in Gram =";
          cin>>input;
          output = input*1000;
          cout<<"\n\n"<<setw(5)<<input<< " Gram is equal to "<<output<<" milligram"<<endl;
          break;
        case 5:
           cout<<"\n\n"<<setw(5)<<"Enter value in Gram =";
          cin>>input;
          output = input/1000;
          cout<<"\n\n"<<setw(5)<<input<< " Gram is equal to "<<output<<" kilogram"<<endl;
          break;
        case 6:
           cout<<"\n\n"<<setw(5)<<"Enter value in Gram=";
          cin>>input;
          output = input/1000000;
          cout<<"\n\n"<<setw(5)<<input<< " Gram is equal to "<<output<<" ton"<<endl;
          break;
        case 7 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in Kilogram =";
          cin>>input;
          output = input*1000000;
          cout<<"\n\n"<<setw(5)<<input<< " Kilogram  is equal to "<<output<<" milligram"<<endl;
          break;
        case 8:
           cout<<"\n\n"<<setw(5)<<"Enter value in Kilogram  =";
          cin>>input;
          output = input*1000;
          cout<<"\n\n"<<setw(5)<<input<< " Kilogram  is equal to "<<output<<" gram"<<endl;
          break;
        case 9:
           cout<<"\n\n"<<setw(5)<<"Enter value in Kilogram  =";
          cin>>input;
          output = input/1000;
          cout<<"\n\n"<<setw(5)<<input<< " Kilogram  is equal to "<<output<<" ton"<<endl;
          break;
        case 10 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in Ton =";
          cin>>input;
          output = input*1000000000;
          cout<<"\n\n"<<setw(5)<<input<< " Ton  is equal to "<<output<<" milligram"<<endl;
          break;
        case 11:
           cout<<"\n\n"<<setw(5)<<"Enter value in Ton  =";
          cin>>input;
          output = input*1000000;
          cout<<"\n\n"<<setw(5)<<input<< " Ton  is equal to "<<output<<" gram"<<endl;
          break;
        case 12:
           cout<<"\n\n"<<setw(5)<<"Enter value in Ton  =";
          cin>>input;
          output = input*1000;
          cout<<"\n\n"<<setw(5)<<input<< " Ton  is equal to "<<output<<" kilogram"<<endl;
          break;
        
      } 
      break;
  case 3:
     cout<<"\nYOU ARE IN CURRENCY CONVERSION "<<endl;
     cout<<"\nSelect a desired option ";

     cout<<"\n[1]Indian ---> Pakistan\n[2]Indian ---> United State\n[3]Indian ---> China\n[4]Indian ---> Japan\n[5]Indian ---> Saudi Arabia\n[6]Indian ---> Russia\n[7]United State ---> Indian\n";
     
     cin>>value;
      switch(value)
       {
        case 1 : 
          cout<<"\n\n"<<setw(5)<<"Enter the Indian Currency amount =";
          cin>>input;
          output = (2.66)*input;
          cout<<"\n\n"<<setw(5)<<input<< " Rupee is equal to "<<output<<" Pakistani Rupee"<<endl;
          break;
        case 2:
         cout<<"\n\n"<<setw(5)<<"Enter the Indian Currency amount =";
          cin>>input;
          output = (0.012)*input;
          cout<<"\n\n"<<setw(5)<<input<< " Rupee is equal to "<<output<<" United State dollar"<<endl;
          break;
        case 3:
          cout<<"\n\n"<<setw(5)<<"Enter the Indian Currency amount =";
          cin>>input;
          output = (0.088)*input;
          cout<<"\n\n"<<setw(5)<<input<< " Rupee is equal to "<<output<<" Chinese Yuan"<<endl;
          break;
        case 4 : 
          cout<<"\n\n"<<setw(5)<<"Enter the Indian Currency amount =";
          cin>>input;
          output = (1.79)*input;
          cout<<"\n\n"<<setw(5)<<input<< " Rupee is equal to "<<output<<" Japanese Yen"<<endl;
          break;
        case 5:
         cout<<"\n\n"<<setw(5)<<"Enter the Indian Currency amount =";
          cin>>input;
          output = (0.045)*input;
          cout<<"\n\n"<<setw(5)<<input<< " Rupee is equal to "<<output<<" Saudi Riyal"<<endl;
          break;
        case 6:
          cout<<"\n\n"<<setw(5)<<"Enter the Indian Currency amount =";
          cin>>input;
          output = (0.76)*input;
          cout<<"\n\n"<<setw(5)<<input<< " Rupee is equal to "<<output<<" Russian Ruble"<<endl;
          break;
        case 7:
          cout<<"\n\n"<<setw(5)<<"Enter the United State Dollar  =";
          cin>>input;
          output = (81.98)*input;
          cout<<"\n\n"<<setw(5)<<input<< " Dollar is equal to "<<output<<" Indian Rupee"<<endl;
        break;
      } 
      break;
  case 4:
     cout<<"\nYOU ARE IN TIME CONVERSION "<<endl;
     cout<<"\nSelect a desired option ";

     cout<<"\n[1]hours ---> mins \n[2]hours ---> sec \n[3]mins ---> hours\n[4]mins ---> sec\n[5]secs ---> hours\n[6]sec ---> mins\n";
     float hrs ,mins,sec ;
     cin>>value;
      switch(value)
       {
        case 1 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in hours =";
          cin>>hrs;
          mins = hrs * 60;
          cout<<"\n\n"<<setw(5)<<hrs<< " hours = "<<mins<<" minutes  "<<endl;
          break;
        case 2:
          cout<<"\n\n"<<setw(5)<<"Enter value in hours =";
          cin>>hrs;
          sec = hrs * 60 * 60;
          cout<<"\n\n"<<setw(5)<<hrs<< " hours = "<<sec<<" seconds  "<<endl;
          break;
        case 3:
          cout<<"\n\n"<<setw(5)<<"Enter value in minutes =";
          cin>>mins;
          hrs = mins/60;
          cout<<"\n\n"<<setw(5)<<mins<< " minutes = "<<hrs<<" hours  "<<endl;
          break;
        case 4:
          cout<<"\n\n"<<setw(5)<<"Enter value in minutes =";
          cin>>mins;
          sec = mins* 60;
          cout<<"\n\n"<<setw(5)<<mins<< " minutes = "<<sec<<" seconds  "<<endl;
          break;
        case 5:
          cout<<"\n\n"<<setw(5)<<"Enter value in seconds =";
          cin>>sec;
          hrs = sec/3600;
          cout<<"\n\n"<<setw(5)<<sec<< " seconds = "<<hrs<<" hours  "<<endl;
          break;
        case 6:
          cout<<"\n\n"<<setw(5)<<"Enter value in seconds =";
          cin>>sec;
          mins = sec/60;
          cout<<"\n\n"<<setw(5)<<sec<< " seconds = "<<mins<<" minutes  "<<endl;
          break;
        }
        break;
  case 5:
     cout<<"\nYOU ARE IN TEMPERATURE CONVERSION "<<endl;
     cout<<"\nSelect a desired option ";

     cout<<"\n[1]  Celsius ---> Fahrenheit\n[2]Celsius ---> Kelvin\n[3]Fahrenheit ---> Celsius\n[4]Fahrenheit ---> Kelvin\n[5]Kelvin ---> Celsius\n[6] Kelvin ---> Fahrenheit";
     
     cin>>value;
      switch(value)
       {
        case 1 : 
          cout<<"\n\n"<<setw(5)<<"Enter value in Celsius =";
          cin>>input;
          output = (input *1.8)+32;
          cout<<"\n\n"<<setw(5)<<input<< " Celsius is equal to  "<<output<<" Fahrenheit"<<endl;
          break;
        case 2:
          cout<<"\n\n"<<setw(5)<<"Enter value in Celsius =";
          cin>>input;
          output = input + 273.15;
          cout<<"\n\n"<<setw(5)<<input<< " Celsius is equal to  "<<output<<" Kelvin"<<endl;
          break;
        case 3:
          cout<<"\n\n"<<setw(5)<<"Enter value in  Fahrenheit =";
          cin>>input;
          output = (input -32 )/1.8;
          cout<<"\n\n"<<setw(5)<<input<< " Fahrenheit is equal to  "<<output<<" Celsius"<<endl;
          break;
        case 4:
          cout<<"\n\n"<<setw(5)<<"Enter value in  Fahrenheit =";
          cin>>input;
          output = 0.555*(input -32) + 273.15;
          cout<<"\n\n"<<setw(5)<<input<< " Fahrenheit is equal to  "<<output<<" Kelvin"<<endl;
          break;
        case 5:
          cout<<"\n\n"<<setw(5)<<"Enter value in  Kelvin =";
          cin>>input;
          output = input - 273.15;
          cout<<"\n\n"<<setw(5)<<input<< " Kelvin is equal to  "<<output<<" Celsius"<<endl;
          break;  
        case 6:
          cout<<"\n\n"<<setw(5)<<"Enter value in  Kelvin =";
          cin>>input;
          output = (1.8)*(input -273.15)+32;
          cout<<"\n\n"<<setw(5)<<input<< " Kelvin is equal to  "<<output<<" Fahrenheit"<<endl;
          break;
      }      

  }
}
// Number System Conversion
void numberConvertor(){
   cout<<"\nPress the number key according to the option you want to go with .\n";
   cout<<"\n[1]-Decimal to Binary\n[2]-Decimal to Octal\n[3]-Decimal to Hexadecimal\n[4]-Binary to Decimal\n[5]-Binary to Octal\n[6]-Binary to Hexadecimal\n\n";
   int option;
   int decimal,binary;
   cin>>option;
   int rem ,i =1;
   switch(option){
    case 1 :{
      cout<<"\nYOU ARE USING DECIMAL TO BINARY CONVERSION "<<endl;
      cout<<"Enter a decimal number = ";
      cin>>decimal;
      int bin = 0 ;
       while(decimal != 0 ){
        rem = decimal%2;
        decimal = decimal/2;
        bin = bin + rem*i;
        i = i*10;
     }
      cout<<"Binary number = "<<bin<<endl;}
    break;
    case 2 :{
      cout<<"\nYOU ARE USING DECIMAL TO OCTAL CONVERSION "<<endl;
      cout<<"Enter a decimal number = ";
      cin>>decimal;
      int oct = 0 ;
       while(decimal != 0 ){
        rem = decimal%8;
        decimal = decimal/8;
        oct = oct + rem*i;
        i = i*10;
     }
    cout<<"Octal number = "<<oct<<endl;}
    break;
    case 3 :{
      cout<<"\nYOU ARE USING DECIMAL TO HEXADECIMAL CONVERSION"<<endl;
      int temp,j;
      char hex[50];
      cout<<"\nEnter a decimal number = ";
      cin>>decimal;
      temp = decimal;
      while(temp != 0){
        rem = temp%16;
        if(rem<10)
          hex[i++] = rem+48;
        
        else
          hex[i++] = rem+55;
        
        temp = temp/16;
      }
      cout<<"\nHexadecimal is ";
      for(j=i;j>0;j--){
        cout<<hex[j];
      }
    }
    break;
    case 4:{
      cout<<"\nYOU ARE USING BINARY TO DECIMAL CONVERSION"<<endl;
      cout<<"\nEnter binary number = ";
      cin>>binary;
      int dec = 0,base =0 ;
      while(binary != 0){
        rem = binary%10;
        binary = binary/10;
        dec = dec + rem*pow(2,base);
        ++base;
      }
      cout<<"\nDecimal number is "<<dec<<endl;
    }
    break;
    case 5:{
      cout<<"\nYOU ARE USING BINARY TO OCTAL CONVERSION"<<endl;
      cout<<"\nEnter binary number = ";
      cin>>binary;
      int oct = 0, dec =0 ,base = 0;
      while(binary != 0 ){
        dec = dec +(binary%10)*pow(2,base);
        ++base;
        binary = binary/10;
      }
      base = 1;
      while(dec != 0){
        oct = oct + (dec%8)*base;
        dec = dec/8;
        base = base*10;
      }
      cout<<"\nOctal number is "<<oct<<endl;
    } 
    break;
    case 6:{
      cout<<"\nYOU ARE USING BINARY TO HEXADECIMAL CONVERSION "<<endl;
      cout<<"\nEnter binary number = ";
      cin>>binary;
      int dec = 0,j = 0,mul =1, chk=1;
      char hex[20];
      int binNum = binary;
      while(binary != 0){
        rem = binary%10;
        dec = dec +(rem*mul);
       if(chk%4 == 0){
        if(dec <10)
         hex[i] = dec +48;
        else
         hex[i] = dec+55;
        mul = 1;
        dec = 0;
        chk = 1;
        i++; 
       }
       else{
        mul = mul*2;
        chk++;
        }
      binary = binary/10;   
    }
    if(chk != 1){
      hex[i] = dec +48;   
    }
    if(chk == 1){
      i--;
    }
    cout<<"\nHexadecimal value is ";
    for(i =i ; i >= 0 ; i--){
      cout<<hex[i];
    }
   }
   break;
}
}
//  Matrix calculation
void matrix(){
  int r1,c1,r2,c2;
  cout<<"\nEnter the number of rows of 1st matrix(between 1 to 100) :";
  cin>>r1;
  cout<<"\nEnter the number of columns of 1st matrix (between 1 to 100) :";
  cin>>c1;
  cout<<"\nEnter the number of rows of 2st matrix(between 1 to 100) :";
  cin>>r2;
  cout<<"\nEnter the number of columns of 2st matrix (between 1 to 100) :";
  cin>>c2;
  int a[100][100],b[100][100],i,j;
  cout<<"\nEnter elements if 1st Matrix :"<<endl;
  for( i = 0 ; i< r1;++i){
    for( j = 0 ; j <c1 ;++j){
      cout<<"Enter elements a"<<i+1<< j+1<<" :";
      cin>>a[i][j];
    }
  }

  cout<<"\nEnter elements if 2nd Matrix :"<<endl;
  for( i = 0 ; i< r2;++i){
    for( j = 0 ; j <c2 ;++j){
      cout<<"Enter elements b"<<i+1<< j+1<<" :";
      cin>>b[i][j];
    }
  }

  cout<<"\n1st Matrix :\n"<<endl;
  for(i =0 ; i <r1 ;i++){
    for(j=0;j<c1 ;j++){
      cout<<a[i][j]<<"\t";
       if(j == c1 -1)
        cout<<"\t"<<endl;
    }
  }
  cout<<"\n\n2nd Matrix :\n"<<endl;
  for(i =0 ; i<r2 ;i++){
    for(j =0 ; j<c2 ;j++){
      cout<<b[i][j]<<"\t";
      if(j == c2-1)
      cout<<"\t"<<endl;
    }
  }
  
  cout<<"\n\nPress the number key according to the option you want to go with .\n";
  cout<<"\n[1]-Addition of two matrix\n[2]-Subtraction of two matrix\n[3]-Multiplication of two matrix\n[4]-Transpose of matrix\n\n";
  int ch;
  
  cin>>ch;
  switch(ch){
    case 1:{
      if((r1 != r2) && (c1 != c2)){
        cout<<"Matrix cannot be added !"<<endl;
      }
      else{
      int sum[100][100];
      for(int i =0 ; i <r1 ; ++i){
        for(int j =0 ; j< c1 ;++j){
           sum[i][j] = a[i][j] + b[i][j];
        }
      }
      cout<<"\nSum of two matrix is :"<<endl;
      for( i = 0 ; i<r1 ;++i){
        for(j = 0 ; j < c1 ; ++j){
          cout<<sum[i][j]<<"\t";
          if(j == c1 -1)
          cout<<endl;
        }}
      }
    } 
    break;
    case 2:{
      if((r1 != r2) && (c1 != c2)){
        cout<<"Matrix cannot be subtracted !"<<endl;
      }
      else{
      int sub[100][100];
      for(int i =0 ; i <r1 ; ++i){
        for(int j =0 ; j< c1 ;++j){
           sub[i][j] = a[i][j] - b[i][j];
        }
      }
      cout<<"\nSum of two matrix is :"<<endl;
      for( i = 0 ; i<r1 ;++i){
        for(j = 0 ; j < c1; ++j){
          cout<<sub[i][j]<<"\t";
          if(j == c1 -1)
          cout<<endl;
        }
      }
    }
    }
    break;
    case 3:{
      int mul[100][100];
      if(c1 != r2){
        cout<<"\nMatrix multiplication is not Possible !"<<endl;
        cout<<"Column of 1st matrix should be equal to row of 2nd matrix .\n";

      }
      else{
        for(i = 0; i < r1 ;++i)
         for(j = 0 ; j <c2 ; ++j){
          mul[i][j] = 0;
         }
        cout<<endl;
        for(i =0 ; i<r1 ; ++i)
         for(j =0 ; j <c2 ; ++j)
           for(int k =0 ; k <c1 ; ++k){
            mul[i][j] += a[i][k]*b[k][j];
           }
        cout<<"\nProduct of two matrices is  :\n"<<endl;
        for(i =0 ; i <r1 ;++i){
         for(j =0 ;j <c2 ; ++j)
          cout<<mul[i][j]<<" ";
          cout<<"\t"<<endl;
        }
      }
    }
    break;
    case 4:{
        int transpose1[100][100],transpose2[100][100];

        for(i = 0 ; i <r1 ; ++i){
          for(j = 0 ; j < c1 ; ++j){
            transpose1[j][i] =a[i][j];
          }
        }
        for(i=0 ;i<r2 ; ++i){
          for(j=0;j<c2;++j){
            transpose2[j][i] = b[i][j];
          }
        }
        cout<<"\nTranspose of Matrix 1 :\n "<<endl;
        for(i =0 ;i<c1;++i)
          for(j =0;j<r1;++j){
            cout<<" "<<transpose1[i][j];
            if(j == r1-1)
          cout<<"\t"<<endl;
          }
        cout<<"\nTranspose of Matrix 2 :\n "<<endl;
        for(i =0 ;i<c2;++i)
          for(j =0;j<r2;++j){
          cout<<" "<<transpose2[i][j];
          if(j == r2-1)
          cout<<"\t"<<endl;
         }  
      } 
    break;
    
    }
   
 }
void complex(){
  double real1,real2,img1,img2;
  cout<<"\nCalculation for two complex number ."<<endl;
  cout<<"\nEnter the real part of 1st complex number = ";
  cin>>real1;
  cout<<"\nEnter the imaginary part of 1st complex number = ";
  cin>>img1;
  cout<<"\nEnter the real part of 2nd complex number = ";
  cin>>real2;
  cout<<"\nEnter the imaginary part of 2nd complex number = ";
  cin>>img2;
  cout<<"\n1st complex number : \n "<<real1 << showpos<< img1 <<noshowpos<<"i"<<endl;
  cout<<"\n2st complex number : \n "<<real2 << showpos<< img2 <<noshowpos<<"i"<<endl;


 cout<<"\n\nPress the number key according to the option you want to go with .\n";
 cout<<"\n[1]-->Addition of complex\n[2]-->Subtraction of complex\n[3]-->Multiplication of complex\n[4]-->Division of complex\n";
 int ch;
 cin>>ch;
 switch(ch){
  case 1:
  {
    cout<<"\nYOU ARE IN ADDITION \n ";
    double real,img;
    real = real1+real2;
    img = img1+img2;
    cout<<"Addition of complex number  "<<real1 << showpos<< img1 <<noshowpos<<"i" <<" and "<<real2 << showpos<< img2 <<noshowpos<<"i" <<" is  =" <<real<<showpos<<img<<noshowpos<<"i"<<endl;
  }
  break;
  case 2:
  {
    cout<<"\nYOU ARE IN SUBTRACTION \n ";
    double real ,img;
    real = real1-real2;
    img = img1 - img2;
    cout<<"Subtraction of complex number "<<real1 << showpos<< img1 <<noshowpos<<"i" <<" and "<<real2 << showpos<< img2 <<noshowpos<<"i" <<" is  =" <<real<<showpos<<img<<noshowpos<<"i";
  }
  break;
  case 3:
  {
    cout<<"\nYOU ARE IN MULTIPLICATION \n";
    double real = real1*real2-img1*img2;
    double img = img1*real2 +real1*img2;
    cout<<"Multiplication of complex number  "<<real1 << showpos<< img1 <<noshowpos<<"i" <<" and "<<real2 << showpos<< img2 <<noshowpos<<"i" <<" is  =" <<real<<showpos<<img<<noshowpos<<"i"<<endl;

  }
  break;
  case 4 :
  {
    cout<<"\nYOU ARE IN DIVISION \n";
    double real = (real1 *real2 +img1*img2)/(real2*real2 +img2*img1);
    double img = (img1*real2 - real1*img2)/(real2*real2 + img2*img2);
    cout<<"DIVISION of complex number  "<<real1 << showpos<< img1 <<noshowpos<<"i" <<" and "<<real2 << showpos<< img2 <<noshowpos<<"i" <<" is  =" <<setprecision(3)<<real<<showpos<<setprecision(3)<<img<<noshowpos<<"i"<<endl;
  }
  break;
 }
  
}
}
s;

int main()
{
 
  long double x, y ,w,z;
  char ch, ar;
  ofstream f1("CALC.dat",ios:: binary| ios::out);
  do
 {
  
   cout<<"\n\n\n " <<setw(20) << "*** WELCOME TO SCIENTIFIC CALCULATOR*** "<<endl;
   cout<<" \n\n\n This is a calculator containing the following functions\n ";

   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Addition ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Subtraction ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Multiplication ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Division";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Percentage ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Power";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Logarithm ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Exponential ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Trigonometry";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Lowest Common Factor";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Greatest Common Factor";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Factorial";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Permutation and Combination";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Linear Equation ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Quadratic Equation ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Unit Convertor ";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Number System Conversion";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Matrix Calculation";
   cout<<"\n"<<setw(10) <<" # "<< setw(4) <<"Complex number Calculation";
   

 cout<<"\n\n\n\t\t TYPE \n "<<setw(5)<<"[+] for Addition \n "<<setw(5)<<"[-] for Subtraction \n "<<setw(5)<<"[*] for Multiplication\n "<<setw(5)<<"[/] for Division\n "<<setw(5)<<"[%] for Percentage\n "<<setw(5)<<"[^] for Power\n "<<setw(5)<<"[L] for Logarithm\n "<<setw(5)<<"[E] for Exponential\n "<<setw(5)<<"[l] for lowest common factor\n "<<setw(5)<<"[g] for greatest common factor \n "<<setw(5)<<"[G] for Trigonometry\n "<<setw(5)<<"[f] for factorial\n "<<setw(5)<<"[C] for Permutation and Combination \n "<<setw(5)<<"[e] for Linear equations\n "<<setw(5)<<"[q] for Quadratic Equation\n "<<setw(5)<<"[u] for Unit Convertor \n "<<setw(5)<<"[n] for Number System Conversion \n "<<setw(5)<<"[m] for Matrix Calculation\n "<<setw(5)<<"[c] for Complex number calculation\n "<<setw(5)<<"[d] for Details and Troubleshooting "<<endl;
  cout<<"Enter Function To use ";
  cin>>ch;
  cout<<endl;
 //For addition
  if(ch=='+')
 {
   
   cout<<"YOU ARE USING ADDITION";
   cout<<"\n\n Enter First Number=";
   cin>>x;
   cout<<"\n Enter Second Number=";
   cin>>y;
   cout<<"\n Your Answer is "<<s.add(x,y);
   f1.write((char*)&s,sizeof(s));
   f1.close();
  }
 //For subtraction
  if(ch=='-')
{
   
cout<<"\n YOU ARE USING SUBTRACTION ";
   cout<<"\n\n Enter First Number= ";
   cin>>x;
   cout<< "\n Enter Second Number= ";
   cin>>y;
   cout<<"\n Your answer is " <<s.subtract(x, y);
   f1.write((char*)&s,sizeof(s));
   f1.close();
  }
 //For multiplication
  if(ch=='*')
{
 
  cout<<"\n YOU ARE USING MULTIPLICATION ";
  cout<<"\n\n Enter First Number= ";
  cin>>x;
  cout<<"\n Enter Second Number= ";
  cin>>y;
  cout<<"\n Your answer is "<<s.multiplication(x, y);
 f1.write((char*)&s,sizeof(s));
 f1.close() ;
 }
//For division
 if(ch=='/')
{
 
 cout<<"\n YOU ARE USING DIVISION ";
  cout<<"\n\n Enter First Number= ";
  cin>>x;
 cout<<"\n Enter Second Number= ";
 cin>>y;
 if(y==0)
 {
   cout<<"\n DIVISION IMPOSSIBLE ";
    cout<<"\n Enter another second number ";
    cin>>y;
    cout<<"\n Your answer is "<<s.division(x, y);
    f1.write((char*)&s,sizeof(s));
    f1.close();
   }
   else
 {
   cout<<"\n Your answer is "<<x/y;
  }
 }
//For percentage
 if(ch=='%')
{
 
  cout<<"\n YOU ARE USING PERCENTAGE ";
  cout<<"\n\n Enter First Number= ";
   cin>>x;
  cout<<"\n Enter Percentage= ";
  cin>>y;
  cout<<"\n Your answer is "<<s.percentage(x,y);
  f1.write((char*)&s,sizeof(s));
  f1.close(); 
 }
//For Power
if(ch=='^')
{
 
  cout<<"\n YOU ARE USING POWER ";
  cout<<"\n\n Enter First Number= ";
  cin>>x;
  cout<<"\n Enter Power=  ";
  cin>>y;
  cout<<"\n Your answer is "<<s.power(x, y);
  f1.write((char*)&s,sizeof(s));
  f1.close();
 }
//For log
 if(ch =='L')
{
  
  cout<<"\n YOU ARE USING LOGARITHM ";
  cout<<"\n\n Enter The Number= ";
  cin>>x;
  y=s.logarithm(x) ;
  cout<<y;
  f1.write((char*)&s,sizeof(s));
  f1.close();
 }
//  For exponential

 if(ch == 'E')
 {
  cout<<"\nYOU ARE USING EXPONENTIAL ";
  cout<<"\n\nEnter The number = ";
  cin>>x;
  cout<<"\nYour answer is "<<s.exponential(x);
  f1.write((char*)&s,sizeof(s));
  f1.close();

 }
//For trigonometry
 if(ch=='G')
{
 
 cout<<"\n YOU ARE USING TRIGONOMETRY ";
 cout<<"\n\n Enter The Angle in Radians = ";
 cin>>x;
 y=s.trigonometry(x) ;
 cout<<y;
 f1.write((char*)&s,sizeof(s));
 f1.close();
}
//  For lowest common factor
if(ch =='l')
{
  cout<<"\n YOU ARE USING LOWEST COMMON FACTOR";
  cout<<"\n\nEnter first numbers =";
  cin>>x;
  cout<<"\nEnter second number =";
  cin>>y;
  cout<<"\nYour answer is = "<<s.lcm(x,y);
  f1.write((char*)&s,sizeof(s));
  f1.close();

}

//  For greatest common factor
if(ch =='g')
{
  cout<<"\n YOU ARE USING GREATEST COMMON FACTOR";
  cout<<"\n\nEnter first numbers =";
  cin>>x;
  cout<<"\nEnter second number =";
  cin>>y;
  cout<<"\nYour answer is = "<<s.gcd(x,y);
  f1.write((char*)&s,sizeof(s));
  f1.close();

}

//  For factorial 
if(ch=='f'){
  cout<<"\nYOU ARE USING FACTORIAL FUNCTION";
  cout<<"\n\nEnter The Number =";
  cin>>x;
  y = s.factorial(x);
  cout<<"Your answer is = "<<y;
  f1.write((char*)&s,sizeof(s));
  f1.close();
}

//  Permutation and Combination
if(ch =='C'){
  cout<<"\n\nYOU ARE USING PERMUTATION AND COMBINATION";
  cout<<"\nEnter the value of power = ";
  cin>>x;
  cout<<"\nEnter the  value of base =  ";
  cin>>y;
  if(x<y){
    cout<<"The value of x should be greater than y"<<endl;
    cout<<"\nEnter again  ";
    cin>>x>>y;

  }
  cout<<"\nEnter 1 to find Permutation (i.e; nPr) "<<endl;
  cout<<"\nEnter 2 to find Combination (i.e; nCr) "<<endl;
  int choice;
  cout<<"\nEnter Your Choice";
  cin>>choice;
  switch(choice){
    case 1 :
    {
      cout<<"nPr = "<<s.fact(x)/s.fact(x-y);
      break;
    }
    case 2 :
    {
      cout<<"nCr = "<<s.fact(x)/(s.fact(x-y)*s.fact(y));
      break;
    }
    default:
    cout<<"You enter the incorrect choice:  "<<endl;
    break;
  }
  f1.write((char*)&s,sizeof(s));
  f1.close();
}
//  For linear equation 
if(ch=='e')
{
  cout<<"\nYOU ARE USING LINEAR EQUATION "<<endl;
  cout<<"For a linear equation in one variable of the form aX + b = cX + d"<<endl;
  cout<<"\nEnter your first number of 1st equation =";
  cin>>x;
  cout<<"\nEnter your second number of 1st equation =";
  cin>>y;
  cout<<"\nEnter your first number of 2nd equation =";
  cin>>w;
  cout<<"\nEnter your second number of 2nd equation =";
  cin>>z;
  s.linear(x,y,w,z);
  f1.write((char*)&s,sizeof(s));
  f1.close() ;

}

// For quadratic equation
if(ch=='q'){
  cout<<"\nYOU ARE USING QUADRATIC EQUATION"<<endl;
  cout<<"\nFor quadratic equation the equation is in the form of  aX^2 + bX + c = 0"<<endl;
  cout<<"\nEnter the coefficient of x^2 = ";
  cin>>x;
  cout<<"\nEnter the coefficient of x = ";
  cin>>y;
  cout<<"\nEnter the value of constant =";
  cin>>w;
  s.quadratic(x,y,w);
  f1.write((char*)&s,sizeof(s));
  f1.close() ;

}
//  For Unit Convertor
if(ch=='u')
{
  cout<<"\nYOU ARE USING UNIT CONVERTOR "<<endl;
  s.unitConvertor();
  f1.write((char*)&s,sizeof(s));
  f1.close() ;
}
// For Number System Conversion
if(ch == 'n')
{
  cout<<"\nYOU ARE USING NUMBER SYSTEM CONVERSION "<<endl;
  s.numberConvertor();
  f1.write((char*)&s,sizeof(s));
  f1.close() ;

}
// For Matrix Calculation

if(ch =='m')
{
  cout<<"\nYOU ARE USING MATRIX CALCULATION"<<endl;
  s.matrix();
  f1.write((char*)&s,sizeof(s));
  f1.close() ;
}
// For Complex number calculation
if(ch == 'c')
{
  cout<<"\nYOU ARE USING COMPLEX NUMBER CALCULATION"<<endl;
  s.complex();
  f1.write((char*)&s,sizeof(s));
  f1.close();

}
if(ch=='d' || ch=='D')
{ 
  cout<<"\t\t\tPROJECT DONE \n";
 }
 cout<<endl;
cout<<"\n\n\n Do you want to continue ... Y/N? ";
 cin>>ar;
 }
 while(ar=='Y'||ar=='y');
  {if(ar=='N' || ar=='n')
{
  cout<<"\n Thank you for using this calculator.\n Good bye ... ";
  cout<<"\n Press any key to exit 	";
 } 
}
return 0;
}

