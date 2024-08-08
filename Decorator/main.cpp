#include<iostream>
#include"trapping.h"
#include"normalclothes.h"
#include"Player.h"
#include"HeadClothes.h"
#include"FeatherClothes.h"
int main() {
	Player player{ "������" };
	NormalClothes* nFlowerClothes{ new NormalClothes{"ħŮ����֮��", { {"����ֵ",4780} ,{"�����˺�",21.8},{"������",10.8},{"������",34},{"�������ٷֱ�",4.3}}}};
	NormalClothes* nHeadClothes{ new NormalClothes{"���Ƶ�ħŮñ",{ {"�����˺�",64.8},{"����Ч��",16.7},{"������",24},{"������",15.7},{"�������ٷֱ�",10.2}}} };
	NormalClothes* nFeatherClothes{ new NormalClothes{"ħŮ��ȼ֮��",{ {"������",311},{"Ԫ�ؾ�ͨ",48},{"�������ٷֱ�",12.3},{"������",3.7},{"������",21}}} };
	DecoratorClothes* headClothes{ new HeadClothes{nHeadClothes} };
	DecoratorClothes* featherClothes{ new FeatherClothes{nFeatherClothes} };
	player.equipClothes(nFlowerClothes);
	player.equipClothes(headClothes);
	player.equipClothes(featherClothes);
	player.showTrappings();
	return 0;
}
