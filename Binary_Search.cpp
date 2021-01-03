#include<iostream>
using namespace std;
class Suvrodev
{
public:
    int Mid;
    int binary_search(int[],int,int,int);
};
int Suvrodev::binary_search(int Data[],int begin,int end,int search_n)
{
    if(begin<=end){
        Mid=(begin+end)/2;
        if(search_n==Data[Mid]){
            cout<<"Data found at "<<Mid<<" Number Position"<<endl;
            return -1;
        }
        if(search_n<Data[Mid]){
            binary_search(Data,begin,Mid-1,search_n);
        }else{
            binary_search(Data,Mid+1,end,search_n);
        }
    }
}
int main()
{
    Suvrodev v;
    int begin=1,Limit,search;
    cout<<"Enter Limit of Array=";
    cin>>Limit;
    int Data[Limit];
    cout<<"Enter Data from Here"<<endl;
    for(int i=1;i<=Limit;i++)
    {
        cout<<i<<". Enter Data: ";
        cin>>Data[i];
    }
    cout<<"Enter Your Search item=";
    cin>>search;
    int result_of=v.binary_search(Data,begin,Limit,search);
    if(result_of!=-1){
        cout<<"Data Not Found"<<endl;
    }

    return 0;

}
