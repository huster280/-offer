// 思路
// 矩阵是有序的，从左下角来看，向上数字递减，向右数字递增，
// 因此从左下角开始查找，当要查找数字比左下角数字大时。右移
// 要查找数字比左下角数字小时，上移
// 

// 链接：https://www.nowcoder.com/questionTerminal/abc3fe2ce8e146608e868a70efebf62e
// 来源：牛客网

#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
        int rowCount = array.size();
        int colCount = array[0].size();
        int i,j;
        for(i=rowCount-1,j=0;i>=0&&j<colCount;)
        {
            if(target == array[i][j])
                return true;
            if(target < array[i][j])
            {
                i--;
                continue;
            }
            if(target > array[i][j])
            {
                j++;
                continue;
            }
        }
        return false;
    }
};


//二分查找
int binary_search(vector<int> a, int target)
{
    int low=0, high=a.size()-1;
    int mid;
    while(low <= high)
    {
        mid = (low+high) / 2;   //相加可能溢出
        // mid = low + (high-low)/2;
        if(target == a[mid])
            return mid;
        else if(target > a[mid])
            low = mid+1;
        else
        {
            high = mid-1;
        } 
    }
    return -1;
}

int main()
{
    int q[] = {1, 2, 4, 6, 8, 9, 19};   //有序数组
    vector<int> a(q, q+7);
    cout<<binary_search(a, 9)<<endl;
}
