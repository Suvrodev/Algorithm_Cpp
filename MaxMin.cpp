#include<iostream>
using namespace std;
class Suvrodev
{
public:
    int Mid;
    void MaxMin(int*,int,int,int&,int&);
};
void Suvrodev::MaxMin(int* Data,int begin,int end,int& max,int& min)
{
    if(begin==end)
    {
        max=min=Data[begin];
    }
    else if(begin==end-1)
    {
        if(Data[begin]>Data[end])
        {
            max=Data[begin];
            min=Data[end];
        }
        else
        {
            max=Data[end];
            min=Data[begin];
        }
    }
    else
    {
        Mid=(begin+end)/2;
        MaxMin(Data,begin,Mid,max,min);
        int HelperMax;
        int HelperMin;
        MaxMin(Data,Mid+1,end,HelperMax, HelperMin);
        if(HelperMax>max)
        {
            max=HelperMax;
        }
        if(HelperMin<min)
        {
            min=HelperMin;
        }
    }
}
int main()
{
    cout<<"MaxMin Algorithm"<<endl;
    Suvrodev v;
    int Limit,begin=1,max,min;
    cout<<"Enter the Limit of Array:";
    cin>>Limit;
    int Data[Limit];
    cout<<"Enter Element from here"<<endl;
    for(int i=begin;i<=Limit;i++)
    {
        cout<<i<<". Enter Input:";
        cin>>Data[i];
    }
    v.MaxMin(Data,begin,Limit,max,min);
    cout<<"Maximum Value:"<<max<<endl;
    cout<<"Minimum Value:"<<min<<endl;

    return 0;
}
