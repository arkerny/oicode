class MinStack
{
public:
    stack<int> ans,ans_min;
    MinStack()
    {

    }

    void push(int x)
    {
        ans.push(x);
        if(ans_min.empty()||ans_min.top()>x)
        {
            ans_min.push(x);
        }
        else
        {
            ans_min.push(ans_min.top());
        }
    }

    void pop()
    {
        ans.pop();
        ans_min.pop();
    }

    int top()
    {
        return ans.top();
    }

    int getMin()
    {
        return ans_min.top();
    }
};