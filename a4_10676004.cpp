#include <iostream>
using namespace std;

int gcd_calculator(int first_number , int second_number )
{
    return (second_number != 0) ? gcd_calculator(second_number, first_number % second_number) : first_number;
}

int main()
{
    int first_number;
    int second_number;
	int gcd;

    cout<<"Enter First number"<<endl;
    cin>>first_number;

    cout<<"Enter Second number"<<endl;
    cin>>second_number;

gcd=gcd_calculator(first_number,second_number);

cout<<"Your GCD/HCF of your First and Second numbers is"<<" "<<gcd<<endl;
  
  return 0;

}
