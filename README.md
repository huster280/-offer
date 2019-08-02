# 剑指offer
#### 用来记录刷题时的代码和思路

[题目地址](https://www.nowcoder.com/ta/coding-interviews)






##### 12.[数值的整数次方](https://www.nowcoder.com/practice/1a834e5e3e1a4b7ba251417554e07c00?tpId=13&tqId=11165&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)
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
