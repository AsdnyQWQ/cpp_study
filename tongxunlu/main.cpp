#include"contact.h"

int main()
{
	//定义通讯录名单的动态数组及其长度
	std::vector <contact> arr;
	
	

	int num;
	do{
	//设置主菜单界面
	std::cout << "通讯录：" << std::endl << "添加联系人请输入1" << std::endl
		<< "显示联系人请输入2" << std::endl << "删除联系人请输入3" << std::endl
		<< "查找联系人请输入4" << std::endl << "修改联系人请输入5" << std::endl
		<< "清空联系人请输入6" << std::endl << "退出通讯录请输入0" << std::endl;//打印主菜单
	std::cout << "请输入：";
	//通过菜单进入各种功能界面
	std::cin >> num;
			switch (num)
			{
			case 0:
				break;
			case 1:
				add(arr);
				break;
			case 2:
				showall(arr);
				break;
			case 3:
				delete1(arr);
				break;
			case 4:
				check(arr);
				break;
			case 5:
				revise(arr);
				break;
			case 6:
				clear(arr);
				break;
			default:
				std::cout << "输入错误，请重新输入\n" << std::endl;
				break;
			}	
	} while (num);
	std::cout << "已退出" << std::endl;



	return 0;
}