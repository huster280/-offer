# 剑指offer
#### 用来记录刷题时的代码和思路

[题目地址](https://www.nowcoder.com/ta/coding-interviews)






##### 12.[数值的整数次方](https://www.nowcoder.com/practice/1a834e5e3e1a4b7ba251417554e07c00?tpId=13&tqId=11165&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)
有好多情况没考虑到，需要修改
```c
double Power(double base, int exponent) {
    if(exponent==0)
        return 1;
    else if(exponent==1)
        return base;
    else
    {
        return pow(base, exponent);
    }
```

##### 13[调整数组顺序使奇数位于偶数前面](https://www.nowcoder.com/practice/beb5aa231adc45b2a5dcc5b62c93f593?tpId=13&tqId=11166&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)
> 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。

```c
void reOrderArray(vector<int> &array) 
{
    vector<int>::iterator even = array.begin();
    int size = array.size();
    while(size)
    {
        if (*even % 2 == 0)
        {
            int tmp = *even;
            even = array.erase(even);
            array.push_back(tmp);
        }
        else
        even++;
        size--;
    }
}
 ```
