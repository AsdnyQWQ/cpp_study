#include"contact.h"

void revise(std::vector<contact>& arr)
{
	int len = arr.size();
	if (len > 0)
	{
		std::string revise_name;
		std::cout << "请输入您要修改的联系人：";
		std::cin >> revise_name;
		int i = 0;
		int j = 1;
		for (i = 0;i <= len - 1;)
		{
			if (arr[i].name == revise_name)
			{
				contact arr_revise;
				std::cout << "\n" << "姓名：";
				std::cin >> arr_revise.name;
				std::cout << "性别：";
				std::cin >> arr_revise.sex;
				std::cout << "年龄：";
				std::cin >> arr_revise.age;
				std::cout << "电话号码：";
				std::cin >> arr_revise.tel_no;
				std::cout << "家庭住址：";
				std::cin >> arr_revise.address;
				arr[i] = arr_revise;
				std::cout << "修改成功！\n" << std::endl;
				j = 0;
				break;
			}

			i++;

		}
		if (j)
			std::cout << "查无此人\n" << std::endl;
	}
	else
		std::cout << "还未添加联系人\n" << std::endl;
}

