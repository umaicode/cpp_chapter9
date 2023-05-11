// 9-3.VIRTDEST.CPP   9.6 virtual �Ҹ���
/*
�ǽ� 3
 1) ����
  �� source code�� ��� ���迡�� virtual �Ҹ��ڸ� ��ӹ޴� ��쿡 ���ؼ� �˾ƺ��� ���̴�.
 2) ���
  ��. BaseClass�� �Ҹ��ڿ� virtual keyword�� �ΰ� �����Ͽ� ��� ����� ���ؼ� ��� class�� �Ҹ��ڰ� ȣ��Ǵ��� Ȯ���غ���.
  ��. BaseClass�� �Ҹ��ڿ� virtual keyword�� ���� �ʰ� �����Ͽ� ��� ����� ���ؼ� ��� class�� �Ҹ��ڰ� ȣ��Ǵ��� Ȯ���غ���.
*/
#include <iostream>
using namespace std;
class BaseClass{
public:
    BaseClass(){
        cout<< "Base class ������ ȣ��"<< endl;
    }
	/*
    virtual ~BaseClass(){ 
        cout<< "Base class �Ҹ��� ȣ��"<< endl;
    }
	*/
	~BaseClass() {
		cout << "Base class �Ҹ��� ȣ��" << endl;
	}
};

class Derived : public BaseClass{
public:
    Derived(){
        cout<< "Derived class ������ ȣ��"<< endl;
    }
    ~Derived(){
        cout<< "Derived class �Ҹ��� ȣ��"<< endl;
    }
};

void main(){
    cout<<"----BaseClass�� Derived class�� ���"<<endl;
    //BaseClass pointer ���� ����  
    BaseClass* pbase;
    //pointer ���� �Ҵ�(BaseClass ��ü)      
    pbase = new BaseClass;
    //�ڿ� ����  
    delete pbase;                
    cout << endl;
    //pointer ���� �Ҵ�(Derived ��ü)
    pbase = new Derived;  
    //�ڿ� ����     
    delete pbase; //virual�� ���� �� destructor�� ȣ��Ǵ����� Ȯ���ϴ� �ǽ�               
    cout << endl;
    Derived* d = new Derived;
    delete d;
    system("pause");
}