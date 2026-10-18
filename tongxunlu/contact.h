#pragma once
#include<iostream>
#include<string>
#include<vector>
struct contact
{
	
	std::string name;
	std::string sex;
	int age;
	std::string tel_no;
	std::string address;
};
void add(std::vector<contact> &arr);
void check(std::vector<contact>& arr);
void delete1(std::vector<contact>& arr);
void revise(std::vector<contact>& arr);
void showall(std::vector<contact>& arr);
void clear(std::vector<contact>& arr);