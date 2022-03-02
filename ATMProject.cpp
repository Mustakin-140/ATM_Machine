#include<iostream>
using namespace std;
int main()
{
    double Bal,Dep,Withdraw;
    int option;
    Bal = 10000;
    do{
    cout<<"\n\t***************MENU***************";
    cout<<"\n\t*                                *";
    cout<<"\n\t*         1.Check Balance        *";
    cout<<"\n\t*         2.Deposit              *";
    cout<<"\n\t*         3.Withdraw             *";
    cout<<"\n\t*         4.Transfer             *";
    cout<<"\n\t*         5.Exit                 *";
    cout<<"\n\t*                                *";
    cout<<"\n\t**********************************";
    cout<<"\n\tPlease Choose an Option: ";
    cin>>option;

    switch(option)
    {
    case 1:
        cout<<"\n\tYour balance is: $"<<Bal<<endl;
        break;

    case 2:
        cout<<"\n\tAmount you want to deposit: $";
        cin>>Dep;
        Bal += Dep;
        cout<<"\n\tYour Current Balance is: $"<<Bal<<endl;
        break;

    case 3:
        cout<<"\n\tHow much do you want to withdraw: $";
        cin>>Withdraw;

        if(Bal < Withdraw)
            cout<<"\n\tInsufficient money to withdraw."<<endl;
        else
             Bal -= Withdraw;
        cout<<"\n\tYour Current Balance is: $"<<Bal<<endl;
        break;

    case 4:
        cout<<"The service is currently not available."<<endl;
        break;

    default:
        if(option != 5)
            cout<<"\n\tInvalid option. Please try again!!"<<endl;
        break;
    }
}while(option != 5);

    system("pause");
    return 0;
}
