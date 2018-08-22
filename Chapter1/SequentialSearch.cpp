#include <iostream>
using namespace std;

int sequenceSearch(int n, int* s, int x)
{
    int location = 0;
    while(location <= n && s[location] != x)
    {
    	cout << location << " " << s[location] << "\n" << endl;
        location++;
    }
    
    if(location >= n)
        location = -1;
    
    return location;
}

int main()
{
    int array[6] = {10, 9, 8, 7, 6, 5};
    int n = 6;
    int x = 2;
    
    cout << "Location is: " << sequenceSearch(n, array, x) << endl;
}