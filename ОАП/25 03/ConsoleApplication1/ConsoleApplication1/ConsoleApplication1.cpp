#include <iostream>


int main()
{
	char str1_1[1234] = "ABOBAAAA AND URYUPINSK";
	char *ptr_str = str1_1;
	std::cout << str1_1 << std::endl;
	std::cout << &ptr_str << std::endl;
	char str1_2[1234] = "YAYAYAYAY";
	char str1_3[321] = "xyz";
	char str1_4[321] = "uuytre";
	strcpy_s(str1_3, str1_4);
	std::cout << str1_3 << std::endl;
	strcat_s(str1_1, str1_2);
	std::cout << str1_1 << std::endl;
	int l = (strcmp(str1_2, str1_1) + strcmp(str1_1, str1_2));
	std::cout << l;
	char st1[432];
	char *wrd;
	std::gets(st1);

}