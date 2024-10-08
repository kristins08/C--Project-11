#include <iostream>
#include <iomanip>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter number of elements followed by the values:\n";
    
    int size;
    cin >> size;
    double prices[size];
    copy_n(istream_iterator<double>(cin), size, prices);
    
    double sum=0;
    
    for(int i=0;i<size;i++)
    {
        sum+=prices[i];
    }
    double average=sum/size;
        
    cout << "Average: $"<<fixed<<setprecision(2)<< average<< endl;

    return 0;
}
