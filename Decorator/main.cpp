#include<iostream>
#include"trapping.h"
#include"normalclothes.h"
#include"Player.h"
#include"HeadClothes.h"
#include"FeatherClothes.h"
int main() {
	Player player{ "旅行者" };
	NormalClothes* nFlowerClothes{ new NormalClothes{"魔女的炎之花", { {"生命值",4780} ,{"暴击伤害",21.8},{"暴击率",10.8},{"攻击力",34},{"攻击力百分比",4.3}}}};
	NormalClothes* nHeadClothes{ new NormalClothes{"焦灼的魔女帽",{ {"暴击伤害",64.8},{"充能效率",16.7},{"攻击力",24},{"暴击率",15.7},{"攻击力百分比",10.2}}} };
	NormalClothes* nFeatherClothes{ new NormalClothes{"魔女常燃之羽",{ {"攻击力",311},{"元素精通",48},{"攻击力百分比",12.3},{"暴击率",3.7},{"攻击力",21}}} };
	DecoratorClothes* headClothes{ new HeadClothes{nHeadClothes} };
	DecoratorClothes* featherClothes{ new FeatherClothes{nFeatherClothes} };
	player.equipClothes(nFlowerClothes);
	player.equipClothes(headClothes);
	player.equipClothes(featherClothes);
	player.showTrappings();
	return 0;
}
