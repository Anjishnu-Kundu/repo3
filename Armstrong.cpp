#include<iostream>

using namespace std;
void display(int n)
{
    int dig, sum;
    int temp;
    cout<<"The Armstrong Numbers in the range 1 to "<<n<<" are:"<<endl;
    for(int i=n;i>=1;i--)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {

            dig=temp%10;
            sum+= (dig*dig*dig);
            temp=temp/10;
        }
    if(i==sum)
    cout<<i<<" ";
    }
}
int main()
{
    int num;
    cout<<"enter the integer\n";
    cin>>num;
    display(num);
    return 0;
}
