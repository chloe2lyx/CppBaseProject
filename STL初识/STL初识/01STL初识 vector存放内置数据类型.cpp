//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	// ��һ�ֱ�����ʽ ���ÿ�ʼ�ͽ���������
//	// ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
//	//		v.begin()���ص����������������ָ�������е�һ������
//	//		v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
//	//		vector<int>::iterator �õ�vector<int>���������ĵ���������
//	vector<int>::iterator itBegin = v.begin();
//	vector<int>::iterator itEnd = v.end();
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//	cout << "--------------------" << endl;
//	//�ڶ��ֱ�����ʽ������forѭ������
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << ' ';
//	}
//	cout << endl;
//	cout << "--------------------" << endl;
//	// �����ֱ�����ʽ������for_each�㷨
//	// ʹ��STL�ṩ��׼�����㷨  ͷ�ļ� algorithm
//	for_each(v.begin(), v.end(), myPrint);
//	cout << "--------------------" << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}