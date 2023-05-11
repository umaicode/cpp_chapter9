// 9��-3.virtdest.cpp   9.6 virtual �Ҹ���
/*
1. BASECLASS ������ ȣ�� -> Derived Class�� ������ ȣ��
2. Derived Class�� �Ҹ��� ȣ�� -> BASECLASS�� �Ҹ��� ȣ��
*/
#include <iostream>
using namespace std;
class BaseClass{
public:
    BaseClass (){
        cout << "Base class constructor called" << endl;
    }
    virtual ~BaseClass (){ //virtual destructor
        cout << "Base class destructor called" << endl;
    }
};
class Derived : public BaseClass{
public:
    Derived (){
        cout << "Derived class constructor called" << endl;
    }
    ~Derived (){
        cout << "Derived class destructor called" << endl;
    }
};
void main (){
    BaseClass * pbase;
    cout << "Building a new BaseClass object..." << endl;
    pbase = new BaseClass;
    // pbase pointer ���
    cout << "Deleting the object..." << endl;
    delete pbase;
    cout << endl << "Building a new Derived class object..."     << endl;
    pbase = new Derived;
	Derived *d;
	d = new Derived;
	delete d;//Derived �Ҹ��� ȣ���� BaseClass �Ҹ��� ȣ��
        // ���ο� pbase pointer ���
    cout << "Deleting the object..." << endl;
    delete pbase;//�Ҹ����� ���� ���ε�
	system("pause");
}