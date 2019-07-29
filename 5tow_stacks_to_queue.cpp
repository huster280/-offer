#include<iostream>
#include<stack>
using namespace std;

// 用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。

// <分析>：
// 入队：将元素进栈A
// 出队：判断栈B是否为空，如果为空，则将栈A中所有元素pop，并push进栈B，栈B出栈；
//  如果不为空，栈B直接出栈。
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack1.empty() && stack2.empty())
            cout<<"ERROE!"<<endl;

        if(stack2.empty())
        {
            while (!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
            return stack2.top();
        }
        else
        {
            int a = stack2.top();
            stack2.pop();
            return a;
        }
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};