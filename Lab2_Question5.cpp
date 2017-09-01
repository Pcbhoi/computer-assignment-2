#include <iostream>
#include <cmath>

using namespace std;

int main()
{       float x,y;
        cout<<"Enter a number :\n";
        cin>>x;
        cout<<"Enter the power to which you want to raise "<<x<<":\n";
        cin>>y;
        cout<<"your answer is ";
        cout<<pow(x,y);

        return 0;
}
