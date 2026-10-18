#include"contact.h"
void showall(std::vector<contact>& arr)
{
	int len = arr.size();
	if (len > 0)
	{
		for (int i = 0;i <= len - 1;i++)
		{
			std::cout << "\n姓名：" << arr[i].name << std::endl
				<< "性别：" << arr[i].name << std::endl
				<< "年龄：" << arr[i].name << std::endl
				<< "电话号码：" << arr[i].name << std::endl
				<< "家庭住址：" << arr[i].name << std::endl << std::endl;
		}
	}
	else
		std::cout << "还未添加联系人\n" << std::endl;
}