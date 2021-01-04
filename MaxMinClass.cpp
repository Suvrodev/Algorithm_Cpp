#include<iostream>
using namespace std;
class Suvrodev
{
public:
    int Mid;
    void MaxMin(int*,int,int,int&,int&);
};
void Suvrodev::MaxMin(int* Data,int begin,int end,int &Max,int &Min)
{
    if(begin==end){
        Max=Min=Data[begin];
    }
    else if(begin==end-1)
    {
        if(Data[begin]<Data[end])
        {
            Max=Data[end];
            Min=Data[begin];
        }
        else
        {
            Max=Data[begin];
            Min=Data[end];
        }
    }
    else
    {
        Mid=(begin+end)/2;
        MaxMin(Data,begin,Mid,Max,Min);
        int MaxValue=Max;
        int MinValue=Min;
        MaxMin(Data,Mid+1,end,Max,Min);
        if(MaxValue>Max){
            Max=MaxValue;
        }
        if(MinValue<Min)
        {
            Min=MinValue;
        }
    }
}

int main()
{
    Suvrodev v;
    int begin=1,Limit;
    int Max,Min;
    cout<<"Enter Limit of Array:";
    cin>>Limit;
    int Data[Limit];
    cout<<"Insert Data from Here"<<endl;
    for(int i=1;i<=Limit;i++){
        cout<<i<<". Input Data:";
        cin>>Data[i];
    }
    v.MaxMin(Data,begin,Limit,Max,Min);
    cout<<"Maximum Value: "<<Max<<endl;
    cout<<"Minimum Value: "<<Min<<endl;
    return 0;
}

