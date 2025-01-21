//#include <stdio.h>
//
//struct human {
//	char name[10];
//	float power;
//};
//
//
//int main() {
//	struct human hero1 = { "Grace", 8.2 };
//	struct human hero2 = { "Oscar", 9.3 };
//
//	attack(hero1, hero2);
//
//	if (attack(hero1, hero2) == 1) {
//		printf("출동 %s\n", hero1.name);
//	}
//	else {
//		printf("출동 %s\n", hero2.name);
//	}
//
//	return 0;
//}
//int attack(struct human H1, struct human H2) {
//	if (H1.power > H2.power) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}