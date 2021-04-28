#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	system("title Genshin Impact Daily Reward Counter v1.1 by hentaiearthchan");


	const int dailyQuests = 4; // Количество ежедневных квестов
	const int dailyQuestReward = 10; // Кол-во камней истоков за один квест
	const int dailyTotalReward = 20; // Кол-во камней истоков за принятие награды у Катерины

	const int BPQuestsReward = 150;
	const int BPJoinInGame = 120;
	const int BPMinerals = 150;
	const int BPResin = 225;


	int userNumber;
	int totalDailyReward;
	int totalBPReward;

	cout << "Введите количество дней для подсчета наград: ";
	cin >> userNumber;

	system("cls");

	totalDailyReward = (dailyQuests * dailyQuestReward) * userNumber;
	totalBPReward = (BPQuestsReward + BPJoinInGame + BPMinerals + BPResin) * userNumber;

	cout << "В течении " << userNumber << " дней возможно получить около: " <<  endl;
	cout << "" << endl;
	cout << "Камней истока · " << totalDailyReward << endl;
	cout << "Опыта БП · " << totalBPReward << endl;




}