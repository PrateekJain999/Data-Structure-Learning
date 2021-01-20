#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1[3];
    cout << "size of structure: " << sizeof(Person)<<endl<<endl;
    for(int i=0;i<3;i++)
	{
		cout << "Enter Full name: ";
        cin>>p1[i].name;
        cout << "Enter age: ";
        cin >> p1[i].age;
        cout << "Enter salary: ";
        cin >> p1[i].salary;
	}
    for(int i=0;i<3;i++)
	{
		cout << "\nDisplaying Information." << endl;
        cout << "Name: " << p1[i].name << endl;
        cout <<"Age: " << p1[i].age << endl;
        cout << "Salary: " << p1[i].salary;
	}

    return 0;
}
