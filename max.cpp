#include<iostream.h>
#include<conio.h>
class large
{
      int num1,num2,num3;
      public:
      void get(int,int,int);
      void put();
      };
      void large::get(int a,int b,int c)
      {
        num1=a;
        num2=b;
        num3=c;  
         }
           void large::put()
           {
                num1=(num1>num2)?num1:num2;
                num3=(num1>num3)?num1:num3;
                cout<<"The maximum number is:  "<<num3;
                }
                int main()
                {
                
                     large l;
                     l.get(26,18,20);
                     l.put();
                     getch();
                     return 0;
                     }
