#include <iostream>
#include <sstream>

using namespace std;

int main( void )
{
    std::string date = "2022-02-02";
    istringstream iss(date);
    char d;
    int year, month, day;
    if ( iss >> year >> d >> month >> d >> day)
        cout << year << " " << month << " " << day << endl;
    else
        cout << "hmar\n";
    return 0;
}