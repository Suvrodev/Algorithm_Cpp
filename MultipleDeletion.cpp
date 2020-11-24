#include<iostream>
using namespace std;
class Suvrodev
{
public:
    int i,Position;
    void input();
    void Deletion(int[],int,int);
};
void Suvrodev::Deletion(int Array[],int Limit,int Number)
{
    int count=0;
    for(int j=1;j<=Number;j++)
    {
         cout<<j<<". Write index Number to delete=";
         cin>>Position;
         for(i=Position-count;i<=Limit;i++)
         {
           Array[i]=Array[i+1];
         }
       count++;
    }
    cout<<"After Deletion....."<<endl;
    for(i=1;i<=Limit-Number;i++)
    {
        cout<<i<<"."<<Array[i]<<" "<<endl;
    }
}
int main()
{
    cout<<"Multiple Deletion"<<endl;
    Suvrodev s;
    int Limit,Number;
    cout<<"Enter Limit of Array=";
    cin>>Limit;
    int Data[Limit];
    cout<<"Input Here\n";
    for(int i=1;i<=Limit;i++)
    {
        cout<<i<<". Enter Element=";
        cin>>Data[i];
    }
    cout<<"How Many Element do you want to delete=";
    cin>>Number;
    s.Deletion(Data,Limit,Number);

    return 0;

}

