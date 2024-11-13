#include<iostream>
#include<string>
#include<stack>
using namespace std;
void PrintStack(stack<int> s)
{
    if (s.empty()) 
        return;

    int x = s.top();
    s.pop();
    PrintStack(s);

    
    cout << x << " ";
    s.push(x);
    
}
int main()
{
    stack<int>cars;
    cars.push(5);
    cars.push(6);
    cars.push(65);
    cars.push(7);

    PrintStack(cars);
    return 0;
}