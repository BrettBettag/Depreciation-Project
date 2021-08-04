#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double originalValue = 0.0;
   double depreciation = 0.0;
   double currentValue = 0.0;
   cout<<"Enter originalValue: ";
   cin>>originalValue;
   cout<<endl<<fixed<<setprecision(0);
double rate = 0.15;
while(rate<0.26)
{
   cout<<"Depreciation rate: "<<rate*100<<"%"<<endl;
   cout<<"Value after year: "<<endl;
   currentValue = originalValue;

   int year=1;
   while(year<6)
   {
       depreciation = currentValue*rate;
       currentValue -= depreciation;
       cout<<year<<" $"<<currentValue<<endl;

       year+=1;
   }

   rate+=0.05;
}
}
