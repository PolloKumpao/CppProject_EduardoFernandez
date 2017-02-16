#include<stdio.h>
#include<iostream>

enum EnemyTpe{zombie,vampire,ghost,witch};
struct Enemy {
	enum EnemyType type;
	std:: string name;
	int health; 

};
bool operator == (Enemy a, Enemy b) {
	if (a.type == b.type && a.name == b.name)
}