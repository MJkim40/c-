//#include <stdio.h>
//
//struct human {
//	char name[10];
//	float power;
//};
//
//void attack(struct human *H1, struct human *H2) {
//	if (H1->power > H2->power) {
//		printf("출동 %s\n", H1->name);
//	}
//	else {
//		printf("출동 %s\n", H2->name);
//	}
//}
//int main() {
//	struct human hero1 = { "Grace", 8.2 };
//	struct human hero2 = {"Oscar", 9.3};
//	
//	attack(&hero1, &hero2);
//
//	return 0;
//}