#include"contact.h"
void delete1(std::vector<contact>& arr)
{
	int len = arr.size();
	if (len > 0)
	{
		std::string check_name;
		std::cout << "请输入您要删除的联系人：";
		std::cin >> check_name;
		int i = 0;
		int j = 1;
		for (i = 0;i <= len - 1;)
		{
			if (arr[i].name == check_name)
			{
				arr.erase(arr.begin() + i);
				j = 0;
				break;
			}

			i++;
		}
		if (j)
			std::cout << "查无此人" << std::endl;
	}
	else
		std::cout << "还未添加联系人\n" << std::endl;
}