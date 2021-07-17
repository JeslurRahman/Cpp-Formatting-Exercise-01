#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
    float marks[]={78.4,90.6,45.9,72.3,54.4};
    char names[][20]={"Bala","Raju","vimal","Arjundas","Kumar"};
    int i;

    cout<<setw(10)<<"No"<<setw(10)<<"Name"<<setw(10)<<"Marks"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<setw(10)<<i+1<<setw(10)<<names[i]<<setiosflags(ios::fixed)
        <<setprecision(2)<<setw(10)<<marks[i]<<endl;

    }
}
