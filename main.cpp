#include <iostream>
#include <math.h>
using namespace std;
void Bisection_method();
void secant_method();
int main()
{
    cout<<endl<<"name : wafa alhosin omar"<<endl<<"id : 216010133"<<endl<<"{ homework cs321 }"<<endl;
    cout<<"_______________________________________________________________"<<endl<<endl<<endl;


    int chois;
        cout<<endl<<endl<<"             { menu } "<<endl;
        cout<<" ----- enter 1 to bisection method ------"<<endl;
        cout<<" ----- enter 2 to secant method  --------"<<endl;
        cout<<" -----     enter 3 to exit     ----------"<<endl;
        cin>>chois;

   while ((chois)<3)
   {
        switch(chois)
        {
            case 1:
              Bisection_method();break;
            case 2:
              secant_method();break;
        }

        cout<<endl<<endl<<"             { menu } "<<endl;
        cout<<" ----- enter 1 to bisection method ------"<<endl;
        cout<<" ----- enter 2 to secant method  --------"<<endl;
        cout<<" -----     enter 3 to exit     ----------"<<endl;
        cin>>chois;
   }
    return 0;
}



void Bisection_method()
{
    float a,b,n;
    cout<<"enter a = ";cin>>a;
    cout<<endl;
    cout<<"enter b = ";cin>>b;
    cout<<endl;
    cout<<"enter the number of cycles = ";cin>>n;
    cout<<endl;
    float f1=7;
    float f2=7;
    float f3,c;
    cout<<endl<<endl<<'['<<a<<','<<b<<']'<<endl;
    cout<<"f(a) = "<<f1<<endl;
    cout<<"f(b) = "<<f2<<endl;
    cout<<"f(a).f(b) = ";
    cout<<f1*f2<<endl<<endl;

    c=(a+b)/2;
    f3=7;

    for(int i=1;i<=n;i++)
    {
        c=(a+b)/2;
        f3=7;

        cout<<'['<<a<<','<<b<<']'<<endl;
        cout<<"point of the middle = "<<c<<endl;
        cout<<"f(c) = "<<f3<<endl<<endl<<endl;

        if(f1*f3<0)
        {
            b=c;
        }
        else if(f3*f2<0)
        {
            a=c;
        }
    }
    cout<<"value of the approximate the root = "<<c<<endl;
}




void secant_method()
{
    float a,b,n;
    cout<<"enter a = ";cin>>a;
    cout<<endl;
    cout<<"enter b = ";cin>>b;
    cout<<endl;
    cout<<"enter the number of cycles = ";cin>>n;
    cout<<endl;
    float f1=pow(a,2)-4;
    float f2=pow(b,2)-4;
    float f3,c;
    cout<<endl<<endl<<'['<<a<<','<<b<<']'<<endl;
    cout<<"f(a) = "<<f1<<endl;
    cout<<"f(b) = "<<f2<<endl<<endl;
    for(int i=1;i<=n;i++)
    {
        c=a-((b-a)/(f2-f1))*f1;
        f3=pow(c,2)-4;
        cout<<'['<<a<<','<<b<<']'<<endl;
        cout<<'c'<<'='<<c<<endl;
        cout<<"f(c) = "<<f3<<endl<<endl<<endl;

        a=b;
        b=c;
        f1=f2;
        f2=f3;
    }

}
