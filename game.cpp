#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "game.h"
using namespace std;


void bossbattle(char* bravename, int* bravelv, int* bravehp, int* bravemp, int* bosshp, int* bossmp)
{
	int c,r,r2,r3,i,d = 0;

	cout << "ようやく勇者" << bravename << "は、森を抜けることに成功した。"  << "\n";
	getchar();
	cout << "そして城にたどり着いた" << bravename << "は、城の最上階まで上り魔王と対面した。" << "\n";
	getchar();

	cout << "------------------------" << "\n";
	cout << "｜　　　　            ｜" << "\n";
	cout << "｜    ＿__<i>_＿_　　 ｜" << "\n";
	cout << "｜  ／／／／＼＼＼　　｜" << "\n";
	cout << "｜ ＼（()〈〉()）／　 ｜" << "\n";
	cout << "｜ {i工8[i_!]8工i}　　｜" << "\n";
	cout << "｜　 Ψ(・ω・)Ψ     ｜" << "\n";
	cout << "｜　　　　　　　　　　｜" << "\n";
	cout << "------------------------" << "\n\n";

	cout << "魔王：よくたどり着いた勇者" << bravename << "よ。" << "\n";
	getchar();
	cout << "魔王：我は「王」ではなく「魔王」だ。" << "\n";
	getchar();
	cout << "魔王：断じて「王」ではないからな！" << "\n";
	getchar();
	cout << "魔王：勇者" << bravename << "よ。私を滅ぼすためにここまで来たのか？" << "\n";

	while(1){
		c = 0;
		cout << "はい：１　いいえ：２" << "\n";
		cin >> c;
		if(c == 1){
			cout << "魔王：いいだろう。我も本気を出すとしよう。" << "\n";
			break;
		}if(c == 2){
			cout << "魔王：そうか。・・・ならば死ね！" << "\n";
			*bravehp = 0;
			return;
		}
	}

	cout << "----------------------------" << "\n";
	cout << "|　 ＿／l／l　　ﾄ､ ﾄ､      |" << "\n";
	cout << "|　ﾚwwﾟ　）　j i ／ i＼  　|" << "\n";
	cout << "|　　 ￣,ゝヽ／／　 i　ヽ　|" << "\n";
	cout << "|　　 ⊂⊂ 　ヾ⌒'Y'⌒ヽ　 |" << "\n";
	cout << "|　　　　(ヽ(　 ）二フ  　 |" << "\n";
	cout << "|　　　　(／　U｜        　|" << "\n";
	cout << "----------------------------" << "\n";

	cout << "なんと！魔王は、ドラゴンに姿を変えた。" << "\n";
	getchar();
	cout << "魔王：さあ、来るがいい！" << "\n";
	getchar();

	cout << "魔王があらわれた。" << "\n";
	while(1){
		srand(time(NULL));
		r = rand() % 200;
		cout << "--------------------------------------------------------------" << "\n\n";
		cout << bravename << "：　Lv：" << *bravelv << "　HP：" << *bravehp << "　MP：" << *bravemp << "\n\n";
		cout << "--------------------------------------------------------------" << "\n\n";
		cout << "どうする？" << "\n";
		while(1){
				c = 0;
				cout << "たたかう：１　ヒール：２　サンダー：３" << "\n";
				cin >> c;
				if(c == 1){
					break;
				}else if(c == 2){
					if(*bravemp >= 20){
						cout << bravename << "のHPが" << *bravelv + 10 << "に回復した。" << "\n";
						*bravehp = *bravelv + 10;
						*bravemp = *bravemp - 20;
						cout << "--------------------------------------------------------------" << "\n\n";
						cout << bravename << "：　Lv：" << *bravelv << "　HP：" << *bravehp << "　MP：" << *bravemp << "\n\n";
						cout << "--------------------------------------------------------------" << "\n\n";
					}else
						cout << "MPが足りない。" << "\n";
				}else if(c == 3){
					if(*bravemp >= 50){
						cout << "魔王に雷が降り注ぐ！" << "\n";
						srand(time(NULL));
						r = rand() % 1000;
						r2 = 0;
						*bravemp = *bravemp - 50;
						break;
					}else
						cout << "MPが足りない。" << "\n";
				}
		}
		cout << "魔王に" << r << "ダメージを与えた。" << "\n";
		*bosshp = *bosshp - r;
		if(*bosshp <= 0)
			break;
		getchar();

		r3 = 0;
		srand(time(NULL));
		r2 = rand() % 5;
		if(d == 1){
			d = 0;
			cout << "魔王は、「デストラクション」を唱えた。" << "\n";
			srand(time(NULL));
			r3 = rand() % 100;
		}else if(r2 == 0){
			cout << "魔王の攻撃！" << "\n";
			srand(time(NULL));
			r3 = rand() % 30;
		}else if(r2 == 1){
			cout << "魔王の攻撃！" << "\n";
			srand(time(NULL));
			r3 = rand() % 30;
		}else if(r2 == 2){
			cout << "魔王は、炎の息を吐いた" << "\n";
			srand(time(NULL));
			r3 = rand() % 50;
		}else if(r2 == 3){
			cout << "魔王は、炎の息を吐いた" << "\n";
			srand(time(NULL));
			r3 = rand() % 50;
		}else if(r2 == 4){
			if(d == 0){
				cout << "魔王は力を蓄えている。" << "\n";
				d = 1;
			}
		}
		getchar();


		cout << bravename << "は、" << r3 << "ダメージを受けた。" << "\n";
		*bravehp = *bravehp - r3;
		if(*bravehp <= 0){
			*bravehp = 0;
			return;
		}
		getchar();
	}

	cout << "魔王を倒した！" << "\n";
	getchar();
	return;
}


int main(void){

	cout << "□□□□□　　　　　　□　　　□　□　　　　□□□　□　　　　□　　□□　　" << "\n";
	cout << "　　□　　　　□□　　□□　□□　□　　　　　□　　□□　　　□　□　　□　" << "\n";
	cout << "　　□　　　□　　□　□　□　□　□　　　　　□　　□　□　　□　□　　　　" << "\n";
	cout << "　　□　　　□　　□　□　　　□　□　　　　　□　　□　　□　□　　□□　　" << "\n";
	cout << "　　□　　　□　　□　□　　　□　□　　　　　□　　□　　　□□　　　　□　" << "\n";
	cout << "　　□　　　　□□　　□　　　□　□　　　　　□　　□　　　　□　□　　□　" << "\n";
	cout << "　　□　　　　　　　　□　　　□　□□□□　□□□　□　　　　□　　□□　　" << "\n\n";

	cout << "　　　　　　　□　　□　□□□□　　□□　　□□□□□" << "\n";
	cout << "　　□□　　　□　　□　□　　　　□　　□　　　□" << "\n";
	cout << "　□　　□　　□　　□　□　　　　□　　　　　　□" << "\n";
	cout << "　□　　□　　□　　□　□□□□　　□□　　　　□" << "\n";
	cout << "　□　□□　　□　　□　□　　　　　　　□　　　□" << "\n";
	cout << "　　□□□　　□　　□　□　　　　□　　□　　　□" << "\n";
	cout << "　　　　　□　　□□　　□□□□　　□□　　　　□" << "\n\n";

	int c;

	cout << "※選択肢は、半角数字で選択してください。" << "\n";

	while(1)
	{
		c = 0;
		cout << "START：１ EXIT：2" << "\n";
		cin >> c;
		if(c == 1)
			break;
		else if(c == 2)
			return 0;
	}

	player brave;
	status boss;

	brave.lv = 1;
	brave.hp = 10;
	brave.mp = 0;

	boss.hp = 1000;
	boss.mp = 1000;

	brave.opening();
	brave.battle();

	if (brave.lv >= 100)
		bossbattle(brave.name, &brave.lv, &brave.hp, &brave.mp, &boss.hp, &boss.mp);

	if(brave.hp == 0){
		brave.gameover();
		return 0;
	}else{
		brave.ending();
	}

	return 0;
}