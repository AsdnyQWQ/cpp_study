#include"contact.h"

void add( std::vector<contact>&arr)
{
	contact arr_add;
	
	std::cout<<"\n添加联系人\n" << "姓名：";
	std::cin >> arr_add.name;
	std::cout  << "性别：";
	std::cin >> arr_add.sex;
	std::cout  << "年龄：";
	std::cin >> arr_add.age;
	std::cout << "电话号码：";
	std::cin >> arr_add.tel_no;
	std::cout << "家庭住址：";
	std::cin >> arr_add.address;
	arr.push_back(arr_add);
	std::cout << "添加成功！\n"<<std::endl;
}