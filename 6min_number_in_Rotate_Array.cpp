#include<iostream>
#include<vector>
using namespace std;

// 把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 
// 输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。 
// 例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 
// NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。


int minNumberInRotateArray(vector<int> rotateArray) {
    if (rotateArray.empty())
        return 0;

    int left=0;
    int right=rotateArray.size()-1;
    while(left < right)
    {
        int mid = left + (right-left)/2;
        //中间元素大左边，说明最小元素在中间元素右边
        if(rotateArray[mid] > rotateArray[left])
            left = mid;     //这里mid+1会更快

        // 最小数字一定就是array[mid]或者在mid的左边。因为右边必然都是递增的。
        else if(rotateArray[mid] < rotateArray[left])
            right = mid;

        // 相等时此时最小数字不好判断在mid左边还是右边，只能一个一个试
        else
            left += 1;
    }
    return rotateArray[left];
}


int main()
{
    int a[]={1,0,1,1,1};
    vector<int> array(a, a+7);
    cout<<minNumberInRotateArray(array)<<endl;
    return -1;
}


//7.斐波那契数列
int Fibonacci(int n) {
    if(n==0)        
        return 0;
    else if(n==1)
        return 1;
    else
    {
        int a[]={0, 1};
        for(int i=2; i<=n; i++)
        {
            int tmp = a[0];
            a[0] = a[1];
            a[1] = a[0] + tmp;
        }
        return a[1];
    }
}

//8.跳台阶：
// 一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
//f(1)=1; f(2)=2; n>=2时，f(n)=f(n-1)+f(n-2)


//9.变态跳台阶
// 一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
int jumpFloorII(int number) 
{
    return 1<<(number-1);
}
