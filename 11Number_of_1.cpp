#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// 输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
int main()
{
    int n=-1;
    int count=0;
    if(n < 0){
        n = n & 0x7FFFFFFF;
        ++count;
    }

    while(n)
    {
        if(n&1)
            count++;
        n = n>>1;
    }
    cout<<count<<endl;

    int a[]={7,4,6,3,1};
    vector<int> vec(a, a+5);
}

// 由于int32位，故直接移位32次也行
int  NumberOf1(int n) 
{
    int count=0;
    for(int i=0; i<32; i++)
    {
        count += n&1;
        n = n>>1;
    }
    return count;
}
