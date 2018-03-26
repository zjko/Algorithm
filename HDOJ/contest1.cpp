#include<stdio.h>
struct Skill {
	int MP;				//水晶 
	int Injury;		//伤害 
}Skills[1000];

struct Monster {
	int HP;			
	int Armor;
}Monsters[100000];


int DFS(const int LessHP, const int Armor, const int * SkillsMap, int NowSkillLocation, const int MPCount);
int MinMP(struct Monster Monster, const int MonstersCount, const int SkillsCount);
int MinMPVlue;

int main() {
	int MonstersCount, SkillsCount;
	int MinMPCount = 0;
//	while (scanf("%d%d", &MonstersCount, &SkillsCount), MonstersCount) {
		scanf("%d%d", &MonstersCount, &SkillsCount);
		for (int n = 0; n<MonstersCount; n++)
			scanf("%d%d", &Monsters[n].HP, &Monsters[n].Armor);
		for (int m = 0; m<SkillsCount; m++)
			scanf("%d%d", &Skills[m].MP, &Skills[m].Injury);

		for (int n = 0; n<MonstersCount; n++) {
			//第n个怪兽
			MinMPCount += MinMP(Monsters[n], MonstersCount, SkillsCount);
			MinMPVlue = 0;
		}
		printf("%d", MinMPCount);
	
	return 0;
}

int MinMP(struct Monster Monster, const int MonstersCount, const int SkillsCount) {
	int SkillsMap[1000] = { 0 };

	//过滤掉打不出伤害的技能 
	{
		int n , m ;
		for (n=m=0; n<SkillsCount; n++)
		if (Skills[n].Injury>Monster.Armor) {
			SkillsMap[m] = n;
			m++;
		}	
		SkillsMap[m]=-1;
		
		//
		for (int i=0;SkillsMap[i]!=-1;i++)
		printf("%d ",SkillsMap[i]);
		puts("\n以上为技能表");
	}

	DFS(Monster.HP, Monster.Armor, SkillsMap, 0, 0);
	return MinMPVlue;
}

int DFS(const int LessHP, const int Armor, const int * SkillsMap, int NowSkillLocation, const int MPCount) {
	
	//怪兽已经被打死
	if (LessHP <= 0) {
		//若已经找到的最小水晶方案值比当前方案值大，或者还没有找出任何方案  那么认为当前方案是最佳方案
		if (MinMPVlue == 0 ||MPCount<MinMPVlue) 
			MinMPVlue = MPCount;
			printf("Test Data:MinMPVlue = %d",MinMPVlue);
		return 0;
	}
	//第NowSkillLocation的技能使用i次
	for (int i = 0;; i++) {
		printf("TestData:\nNowSkillLocation = %d\ni = %d\nLessHP = %d\nMPCount=%d\nSkillsMap[NowSkillLocation] = %d\n\n",NowSkillLocation,i,LessHP,MPCount,SkillsMap[NowSkillLocation]); 
		//如果当前方案已经超过了所找到的最小方案水晶值，则放弃递增 或者 已经没有可用的其他技能了
		if (MinMPVlue != 0 && MPCount + i*Skills[SkillsMap[NowSkillLocation]].MP > MinMPVlue	||
			SkillsMap[NowSkillLocation]==-1
			)return 0;
		
		//递归进入到下一个位置技能的计数空间,并传递当前值
		DFS(
			LessHP - i*(Skills[SkillsMap[NowSkillLocation]].Injury - Armor),	
			Armor,
			SkillsMap,															//技能列表
			NowSkillLocation + 1,												//技能列表位置+1
			MPCount + i*Skills[SkillsMap[NowSkillLocation]].MP					//当前水晶总数+i次当前技能所需要的水晶
		);
	}
}

