#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total=0,ub,lb,p,q,requests;
    cout<<"Enter number of requests: ";
    cin>>requests;
    int a[requests];
    vector <int> r;
    cout<<"\nQueue: ";
    for (int i=1;i<9;i++)
    {
        cin >> a[i];
    }
    cout<<"\nHead starts at: ";
    cin>>a[0];
    cout<<"\nEnter lower  bound: ";
    cin >> lb;
    cout<<"\nEnter upper bound: ";
    cin >> ub;
    p=a[0];
    sort(a, a + 9);
    for(int i=0;i<9;i++)
    {
        if(a[i]==p)
        {
           q=i;
        }
    }
    for(int i=q;i<9;i++)
    {
     cout << a[i] << " ";
     r.push_back(a[i]);
    }
    cout << ub << " ";
    r.push_back(ub);
    cout << lb << " ";
    r.push_back(lb);
    for(int i=0;i<q;i++)
    {
        cout << a[i] << " ";
        r.push_back(a[i]);
    }
    cout << endl;
     for(int i=0;i<r.size()-1;i++)
    {
        if(i!=7)
        {
            if(r[i]>r[i+1])
            {
                cout << "(" << r[i] << "-" << r[i+1] << ")" << "+";
            }
            else
            {
                cout << "(" << r[i+1] << "-" << r[i] << ")" << "+";
            }
        }
        else
        {
            if(r[i]>r[i+1])
            {
                cout << "(" << r[i] << "-" << r[i+1] << ")" ;
            }
            else
            {
                cout << "(" << r[i+1] << "-" << r[i] << ")" ;
            }
        }
        total=total+abs(r[i]-r[i+1]);
    }
    cout << " = " <<total;

}

