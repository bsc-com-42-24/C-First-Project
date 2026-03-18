#include <iostream>
#include <cstdlib> 
using namespace std;

int main (){
    // Generate random integer between 0 and 11
    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration <= 10)
    {
        cout << "Your subscription will expire soon. Renew now!"<< endl;
    }

    else if (daysUntilExpiration <= 5)
    {
        cout << "Your subscriptiion expires in " << daysUntilExpiration << endl;
        cout << "Renew now and save 10% !"<< endl;
    }

    else if (daysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day!"<< endl;
        cout << "Renew now and save 20%"<< endl;
    }

    else if (daysUntilExpiration == 0)
    {
        cout << "Your subscription has expired"<< endl; 
    }
    else
    {
        cout << "You have an active subscription"<< endl;
    }

    return 0;
}