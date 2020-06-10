#include<iostream>
#include<stack>
using namespace std;
void max_area(int hist[], int n)
{
    stack<int> s;
    int max_area = 0;
    int tp; // top of stack;
    int temp_area;
    int i=0;
    while(i<n)
    {
        if(s.empty()||hist[s.top()]<hist[i])
        {
            s.push(i);
            i++;
            
        }
        else
        {
            tp = s.top();
            s.pop();
            temp_area = hist[tp]* (s.empty()?i:i-s.top()-1);
            
            if(temp_area>max_area)
            {
                max_area = temp_area;
            }
        }
    }
    cout<<"Right now value of i is:"<<i<<endl;
    while(s.empty()==false)
    {
        tp = s.top();
        s.pop();
        temp_area = hist[tp]* (s.empty()?i:i-s.top()-1);
            
            if(temp_area>max_area)
            {
                max_area = temp_area;
            }
    }
    cout<<"The maximum area is:"<<max_area<<endl;
}
int main()
{
    int hist[] = {6,2,5,4,5,1,6};
    int n = sizeof(hist)/sizeof(hist[0]);
    max_area(hist,n);
}
