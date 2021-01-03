#include<iostream>
using namespace std;
int Max,Min,Mid;
void MaxMin(int Data[],int begin,int end)
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
        MaxMin(Data,begin,Mid-1);
        int MaxValue=Max;
        int MinValue=Min;
        MaxMin(Data,Mid+1,end);
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
    int begin=1,Limit;
    cout<<"Enter Limit of Array:";
    cin>>Limit;
    int Data[Limit];
    cout<<"Insert Data from Here"<<endl;
    for(int i=1;i<=Limit;i++){
        cout<<i<<". Input Data:";
        cin>>Data[i];
    }
    MaxMin(Data,begin,Limit);
    cout<<"Maximum Value: "<<Max<<endl;
    cout<<"Minimum Value: "<<Min<<endl;
    return 0;
}
