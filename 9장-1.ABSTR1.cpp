//9��-1.ABSTR1.CPP   9.4 �߻� class
//�߻� class ������ ��:
//������ ȣ���� compile error�� �����.
#include <iostream>
using namespace std;
class Printer{
public:
    Printer ()
    { }
    virtual void Method (char * buffer) = 0;
    virtual int Dpi () = 0;
};
void main (){
    //���� ������ ������ �ּ� �������� ������ ������ compiler��
    //"Cannot create instance of abstract class 'Printer'��    
    //�޽����� ������ ���̴�.
    // Printer pri; 
    //���� ���Ǵ� �ùٸ���
    Printer * pPri;
    //���� ���������� �ּ� ���� �ƴϸ� compiler�� ���� error
    //�޽����� ������ ���̴�
    //pPri = new Printer ();//Abstract class
	system("pause");
}