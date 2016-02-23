# include <iostream>

using namespace std;

int main ()
{
    cout << "Does this work?" << endl;
    int x = 0;
    
    cout << " Enter a number other than 0" << endl;
    cin >> x;
    
    if (x == 0)
    cout << "Did not work" << endl;
    else
    cout << "Did Work" << endl;
    
    return 0;
}