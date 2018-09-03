#include<iostream.h>
#include<conio.h>
#include<string.h>
class palin
{
      int str,s;
public:
       void get();
       void put();
       };
       void palin::get()
       {
            cout<<"enter the string: "<<endl;
            cin>>str;
            }
            void palin::put()
            {
              s=string.reverse(sb);
              if(strcmp(s,str)==0)
              {
                        cout<<"is a palindrome"<<endl;
                        }
                        else
                        {
                            cout<<"not a palindrome"<<endl;
                            }
                            }
                            int main()
                            {
                                palin p;
                                p.get();
                                p.put();
                                getch();
                                return 0;
                                }    
