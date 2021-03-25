//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person> p;
//	Person p1("ËïÎò¿Õ", 18);
//	Person p2("º«ĞÅ", 19);
//	Person p3("Â¶ÄÈ", 17);
//	Person p4("ÔÆÖĞ¾ı", 20);
//	Person p5("Áõ±¸", 33);
//
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	p.push_back(p5);
//
//	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
//	{
//		cout << "ĞÕÃû£º" << it->m_Name << " ÄêÁä£º" << it->m_Age << endl;
//	}
//}
//
//void test02()
//{
//	vector<Person*> p;
//	Person p1("°²ç÷À­", 11);
//	Person p2("ÍõÕÑ¾ı", 22);
//	Person p3("ÉòÃÎÏª", 33);
//	Person p4("Ë¾¿ÕÕğ", 44);
//	Person p5("Öî¸ğÁÁ", 55);
//
//	p.push_back(&p1);
//	p.push_back(&p2);
//	p.push_back(&p3);
//	p.push_back(&p4);
//	p.push_back(&p5);
//
//	for (vector<Person*>::iterator it = p.begin(); it != p.end(); it++)
//	{
//		cout << "ĞÕÃû£º" << (*it)->m_Name << " ÄêÁä£º" << (*it)->m_Age << endl;
//	}
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}