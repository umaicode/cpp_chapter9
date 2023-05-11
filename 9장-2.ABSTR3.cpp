// 9��-2.ABSTR3.CPP   9.4 �߻� class
// �ϳ��� �߻� class�κ��� ������ class�μ� ��� pure virtual �Լ���
// �� �����ϰ� ���� �ʱ� ������ ������ �߻� class�� ���ֵȴ�.
#include <iostream>
using namespace std;
class Printer {
public:
	Printer() { }
	virtual void Method(char* buffer) = 0;
	virtual int Dpi() = 0;
	//  ��
	//  ��
};

class LaserPrinter : public Printer {
public:
	LaserPrinter() { }
	int Dpi() {
		return 300;
	}
};

void main() {
	// class LaserPrinter�� ������ �߻� class�̹Ƿ�
	// ���� ���� �� ����, �׷��� pointer�� ���ؼ��� ���ȴ�.

	// ���� �� ���� ���� �߿��� ù ��° ���� compile error�� ����.
	// "Cannot create instance of abstract class 'LaserPrinter'"
	// �߸��Ǿ���!!
	LaserPrinter lp1;  //Still Abstract class
	// �ùٸ��� �ƹ��� �ǹ̰� ����   
	LaserPrinter* lp2;
	system("pause");
}