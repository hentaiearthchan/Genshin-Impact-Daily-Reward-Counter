#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	system("title Genshin Impact Daily Reward Counter v1.1 by hentaiearthchan");


	const int dailyQuests = 4; // ���������� ���������� �������
	const int dailyQuestReward = 10; // ���-�� ������ ������� �� ���� �����
	const int dailyTotalReward = 20; // ���-�� ������ ������� �� �������� ������� � ��������

	const int BPQuestsReward = 150;
	const int BPJoinInGame = 120;
	const int BPMinerals = 150;
	const int BPResin = 225;


	int userNumber;
	int totalDailyReward;
	int totalBPReward;

	cout << "������� ���������� ���� ��� �������� ������: ";
	cin >> userNumber;

	system("cls");

	totalDailyReward = (dailyQuests * dailyQuestReward) * userNumber;
	totalBPReward = (BPQuestsReward + BPJoinInGame + BPMinerals + BPResin) * userNumber;

	cout << "� ������� " << userNumber << " ���� �������� �������� �����: " <<  endl;
	cout << "" << endl;
	cout << "������ ������ � " << totalDailyReward << endl;
	cout << "����� �� � " << totalBPReward << endl;




}