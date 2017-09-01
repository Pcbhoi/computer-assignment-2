#include <iostream>

#include <cmath>

using namespace std;

int main(){
        
         int days,y,w,d;
         cout<<"Enter the no. of days:-";
         cin >>days;

         y = days/365;
         days = days%365;
         w = days/7;
         d = days%30;

         cout<<"years:-"<<y<<"\nweeks:-"<<w<<"\nDays:-"<<d;

        
     return 0;

}
