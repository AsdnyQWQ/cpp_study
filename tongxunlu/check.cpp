#include"contact.h"

void check(std::vector<contact>& arr)
{
	int len = arr.size();
	if (len > 0)
	{
		std::string check_name;
		std::cout << "请输入您要查找的联系人：";
		std::cin >> check_name;
		int i = 0;

		for (i = 0;i <= len - 1;i++)
		{
			if (arr[i].name == check_name)
			{
				std::cout << "\n姓名：" << arr[i].name << std::endl
					<< "性别：" << arr[i].name << std::endl
					<< "年龄：" << arr[i].name << std::endl
					<< "电话号码：" << arr[i].name << std::endl
					<< "家庭住址：" << arr[i].name << std::endl << std::endl;

				break;
			}


		}
		if (i == len)
			std::cout << "查无此人\n" << std::endl;
	}
	else
		std::cout << "还未添加联系人\n" << std::endl;
}

