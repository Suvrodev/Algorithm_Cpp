#include<iostream>
using namespace std;
class Suvrodev
{
private:
    int m_indexOffset = 0;

    void swap(int& a, int& b);
    void re_del(int data[], int& index, int size);
public:
    void Delete_single(int data[], int& size, int index);
    void Delete_multiple(int data[], int& data_size, int& amount);
    void Delete_multiple2(int data[], int& data_size, int& amount);
    void Output(int data[], int& index, int size);
};
void Suvrodev::swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}
void Suvrodev::re_del(int data[], int& index, int size){
    if(index < size - 1){
        swap(data[index], data[index + 1]);
        re_del(data, ++index, size);
    }
}
void Suvrodev::Delete_single(int data[],int& size,int index)
{
    if(size > 1)
        re_del(data, index, size);
    size--;
}
//INDEX changes after every delete
void Suvrodev::Delete_multiple(int data[], int& data_size, int& amount) {
    if(amount){ //NEEDS NEW INDEX AFTER EVERY DELETE
        int index;
        cout << "Write the index to delete : ";
        cin >> index;
        Delete_single(data, data_size, index);
        Delete_multiple(data, data_size, --amount);
    }
}
void Suvrodev::Delete_multiple2(int data[], int& data_size, int& amount) {
    if(amount){ //NEEDS ORIGINAL INDICES FROM BEFORE CALLING THIS METHOD
        int index;
        cout << "Write the index to delete : ";
        cin >> index;
        Delete_single(data, data_size, index - m_indexOffset);
        m_indexOffset++;
        Delete_multiple2(data, data_size, --amount);
    }
    else
        m_indexOffset = 0;
}
void Suvrodev::Output(int data[], int& index, int size) {
    if(index < size) {
        cout << data[index] << " ";
        Output(data, ++index, size);
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
    for(int i=0;i<Limit;i++)
    {
        cout<<i<<". Enter Element=";
        cin>>Data[i];
    }
    cout<<"Number of Element do you want to delete=";
    cin>>Number;
    s.Delete_multiple2(Data, Limit, Number);
    int start = 0;
    s.Output(Data, start, Limit);
    return 0;

}

