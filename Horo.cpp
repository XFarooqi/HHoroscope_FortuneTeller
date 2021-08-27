#include <iostream>
#include<string>
#include<stdio.h>
#include<fstream>

using namespace std;
void select(string sign);
void monthly_horoscope();
void yearly_horoscope();
void lucky_number_horoscope();
void likeliness_horoscope();
void love_meter_horrorsope();
void daily_sagittarius();
void daily_leo();
void daily_aquarius();
void daily_aries();
void daily_capricon();
void daily_taurus();
void daily_virgo();
void daily_pisces();
void daily_libra();
void daily_scorpio();
void daily_gemini();
void daily_cancer();
void yearly_sagittarius();
void yearly_leo();
void yearly_aquarius();
void yearly_aries();
void yearly_capricon();
void yearly_taurus();
void yearly_virgo();
void yearly_pisces();
void yearly_libra();
void yearly_scorpio();
void yearly_gemini();
void yearly_cancer();
void monthly_sagittarius();
void monthly_leo();
void monthly_aquarius();
void monthly_aries();
void monthly_capricon();
void monthly_taurus();
void monthly_virgo();
void monthly_pisces();
void monthly_libra();
void monthly_scorpio();
void monthly_gemini();
void monthly_cancer();
void luckynumber_sagittarius();
void luckynumber_leo();
void luckynumber_aquarius();
void luckynumber_aries();
void luckynumber_capricon();
void luckynumber_taurus();
void luckynumber_virgo();
void luckynumber_pisces();
void luckynumber_libra();
void luckynumber_scorpio();
void luckynumber_gemini();
void luckynumber_cancer();
void likeliness_sagittarius();
void likeliness_leo();
void likeliness_aquarius();
void likeliness_aries();
void likeliness_capricon();
void likeliness_taurus();
void likeliness_virgo();
void likeliness_pisces();
void likeliness_libra();
void likeliness_scorpio();
void likeliness_gemini();
void likeliness_cancer();

void daily_horoscope(string sign)
{
	system("cls");
	system("color 20");
	int choose;
	if (sign == "aquarius")
	{
		daily_aquarius();
		select(sign);
	}
	else if (sign == "sagittarius")
	{
		daily_sagittarius();
		select(sign);
	}
	else if (sign == "leo")
	{
		daily_leo();
		select(sign);
	}
	else if (sign == "aquarius")
	{
		daily_aquarius();
		select(sign);
	}
	else if (sign == "aries")
	{
		daily_aries();
		select(sign);
	}
	else if (sign == "capricon")
	{
		daily_capricon();
		select(sign);
	}
	else if (sign == "taurus")
	{
		daily_taurus();
		select(sign);
	}
	else if (sign == "virgo")
	{
		daily_virgo();
		select(sign);
	}
	else if (sign == "pisces")
	{
		daily_pisces();
		select(sign);
	}
	else if (sign == "libra")
	{
		daily_libra();
		select(sign);
	}
	else if (sign == "scorpio")
	{
		daily_scorpio();
		select(sign);
	}
	else if (sign == "gemini")
	{
		daily_gemini();
		select(sign);
	}
	else if (sign == "cancer")
	{
		daily_cancer();
		select(sign);
	}

	system("pause>null");
}
void monthly_horoscope(string sign)
{
	system("cls");
	system("color 20");
	int choose;
	if (sign == "aquarius")
	{
		monthly_aquarius();
		select(sign);
	}
	else if (sign == "sagittarius")
	{
		monthly_sagittarius();
		select(sign);
	}
	else if (sign == "leo")
	{
		monthly_leo();
		select(sign);
	}
	else if (sign == "aquarius")
	{
		monthly_aquarius();
		select(sign);
	}
	else if (sign == "aries")
	{
		monthly_aries();
		select(sign);
	}
	else if (sign == "capricon")
	{
		monthly_capricon();
		select(sign);
	}
	else if (sign == "taurus")
	{
		monthly_taurus();
		select(sign);
	}
	else if (sign == "virgo")
	{
		monthly_virgo();
		select(sign);
	}
	else if (sign == "pisces")
	{
		monthly_pisces();
		select(sign);
	}
	else if (sign == "libra")
	{
		monthly_libra();
		select(sign);
	}
	else if (sign == "scorpio")
	{
		monthly_scorpio();
		select(sign);
	}
	else if (sign == "gemini")
	{
		monthly_gemini();
		select(sign);
	}
	else
	{
		monthly_cancer();
		select(sign);
	}

	system("pause>null");
}
void yearly_horoscope(string sign)
{
	system("cls");
	system("color 20");
	int choose;
	if (sign == "aquarius")
	{
		yearly_aquarius();
		select(sign);
	}
	else if (sign == "sagittarius")
	{
		yearly_sagittarius();
		select(sign);
	}
	else if (sign == "leo")
	{
		yearly_leo();
		select(sign);
	}
	else if (sign == "aquarius")
	{
		yearly_aquarius();
		select(sign);
	}
	else if (sign == "aries")
	{
		yearly_aries();
		select(sign);
	}
	else if (sign == "capricon")
	{
		yearly_capricon();
		select(sign);
	}
	else if (sign == "taurus")
	{
		yearly_taurus();
		select(sign);
	}
	else if (sign == "virgo")
	{
		yearly_virgo();
		select(sign);
	}
	else if (sign == "pisces")
	{
		yearly_pisces();
		select(sign);
	}
	else if (sign == "libra")
	{
		yearly_libra();
		select(sign);
	}
	else if (sign == "scorpio")
	{
		yearly_scorpio();
		select(sign);
	}
	else if (sign == "gemini")
	{
		yearly_gemini();
		select(sign);
	}
	else
	{
		yearly_cancer();
		select(sign);
	}

	system("pause>null");
}
void lucky_number_horoscope(string sign)
{
	system("cls");
	system("color 20");
	int choose;
	if (sign == "aquarius")
	{
		luckynumber_aquarius();
		select(sign);
	}
	else if (sign == "sagittarius")
	{
		luckynumber_sagittarius();
		select(sign);
	}
	else if (sign == "leo")
	{
		luckynumber_leo();
		select(sign);
	}
	else if (sign == "aquarius")
	{
		luckynumber_aquarius();
		select(sign);
	}
	else if (sign == "aries")
	{
		luckynumber_aries();
		select(sign);
	}
	else if (sign == "capricon")
	{
		luckynumber_capricon();
		select(sign);
	}
	else if (sign == "taurus")
	{
		luckynumber_taurus();
		select(sign);
	}
	else if (sign == "virgo")
	{
		luckynumber_virgo();
		select(sign);
	}
	else if (sign == "pisces")
	{
		luckynumber_pisces();
		select(sign);
	}
	else if (sign == "libra")
	{
		luckynumber_libra();
		select(sign);
	}
	else if (sign == "scorpio")
	{
		luckynumber_scorpio();
		select(sign);
	}
	else if (sign == "gemini")
	{
		luckynumber_gemini();
		select(sign);
	}
	else
	{
		luckynumber_cancer();
		select(sign);
	}
	system("pause>null");
}
void likeliness_horoscope(string sign)
{
	system("cls");
	system("color 20");
	int choose;
	if (sign == "aquarius")
	{
		likeliness_aquarius();
		select(sign);
	}
	else if (sign == "sagittarius")
	{
		likeliness_sagittarius();
		select(sign);
	}
	else if (sign == "leo")
	{
		likeliness_leo();
		select(sign);
	}
	else if (sign == "aquarius")
	{
		likeliness_aquarius();
		select(sign);
	}
	else if (sign == "aries")
	{
		likeliness_aries();
		select(sign);
	}
	else if (sign == "capricon")
	{
		likeliness_capricon();
		select(sign);
	}
	else if (sign == "taurus")
	{
		likeliness_taurus();
		select(sign);
	}
	else if (sign == "virgo")
	{
		likeliness_virgo();
		select(sign);
	}
	else if (sign == "pisces")
	{
		likeliness_pisces();
		select(sign);
	}
	else if (sign == "libra")
	{
		likeliness_libra();
		select(sign);
	}
	else if (sign == "scorpio")
	{
		likeliness_scorpio();
		select(sign);
	}
	else if (sign == "gemini")
	{
		likeliness_gemini();
		select(sign);
	}
	else
	{
		likeliness_cancer();
		select(sign);
	}
}
void love_meter_horrorsope(string sign)
{
	char  fort;
	string suggestion;
	system("cls");
	system("color 20");
	cout << endl;
	char fname[5], sname[5], temp[50];
	int s, lovem;
	cout << "Enter your name: ";

	cin >> fname;

	cout << "Enter other person's name:";
	cin >> sname;

	for (int i = 0; i < 10; i++)
	{
		if (fname[i] == sname[i])
		{
			temp[i] = 2;
		}
		else if (fname[i] != sname[i])
		{
			temp[i] = 1;
		}
		else temp[i] = 0;
	}
	int size = 6;
	for (int i = 0; i < 10; i++)
	{
		s = temp[i] + (temp[size - 1]);
	}
	lovem = rand() % 100;
	cout << "You are " << lovem << "% in love with this person";
	cout << endl;
	system("pause");
	cout << endl;
	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}
	system("pause>null");


}




void select(string sign)
{
	system("pause");
	int choice;
menu:;//menu
	system("cls");
	system("color 06");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>    HOROSCOPE BASED FORTUNE TELLER   <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "\t\tWHICH CHOICE DO YOU WANT TO SELECT" << endl;
	cout << endl;
	cout << "1). DAILY HOROSCOPE " << endl;
	cout << endl;
	cout << "2). MONTHLY HOROSCOPE " << endl;
	cout << endl;
	cout << "3). YEARLY HOROSCOPE " << endl;
	cout << endl;
	cout << "4). LUCKY NUMBER " << endl;
	cout << endl;
	cout << "5). LIKELINESS WITH OTHER SIGNS " << endl;
	cout << endl;
	cout << "6). LOVE METER " << endl;
	cout << endl;
	cout << "7). EXIT " << endl;
	cout << endl;
	cout << "KINDLY INFORM US WITH YOUR CHOICE" << endl;
	cout << endl;

	cin >> choice;
	switch (choice)

	{
	case 1:
		daily_horoscope(sign);
		break;
		system("cls");//to clear the console
	case 2:
		monthly_horoscope(sign);
		break;
		system("cls");//to clear the console
	case 3:
		yearly_horoscope(sign);
		break;
		system("cls");//to clear the console
	case 4:
		lucky_number_horoscope(sign);
		break;
		system("cls");//to clear the console
	case 5:
		likeliness_horoscope(sign);
		break;
		system("cls");//to clear the console
	case 6:
		love_meter_horrorsope(sign);
		break;
		system("cls");//to clear the console
	case 7:
		system("cls");//to clear the console
		system("color 70");//for console color
		cout << endl;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
		cout << "\t\t\t\t\tTHANKYOU FOR YOUR TIME !!!" << endl;
		break;
	default:
		break;
	}
	system("pause>null");//system pause and null to remove press any key to continue from console

}


struct info//structure
{
	string name;
	string age;
	string gender;
	string suggestion;
	char fort;


}a;
int main()
{

	system("color a0");//for console color
	cout << endl;
	cout << "\t\t=============================================" << endl;
	cout << endl;
	cout << "\t\t\tCOMPUTER PROGRAMING FINAL PROJECT" << endl;
	cout << endl;
	cout << "\t\t\t\t1ST SEMESTER" << endl;
	cout << endl;
	cout << "\t\t\t  BACHELOR OF COMPUTER SCIENCE" << endl;
	cout << endl;
	cout << "\t\t        HOROSCOPE BASED FORTUNE TELLER" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t=============================================" << endl;
	system("pause>null");
	system("cls");
	string name, age, gender;
	system("cls");
	system("color 30");
	cout << endl;
	cout << "\t\t===================================================" << endl;
	cout << "\t\t>>>>>     FORTUNE TELLING HOROSCOPE        <<<<< " << endl;
	cout << "\t\t===================================================" << endl;
	cout << "\n" << endl;
	cout << "KINDLY BEFORE PROCEEDING NEXT, REGISTER YOURSELF !..." << endl << endl;
	cout << "> NAME : ";
	cin.ignore();//used bcs somtimes console ignore to cin some value
	getline(cin, a.name);//to add spaces to any symbols in the value input by user
	cout << "> AGE : ";
	cin.ignore();
	getline(cin, a.age);
	cout << "> GENDER : ";
	cin >> gender;
	cout << endl;
	if ((gender == "Male" || gender == "male" || gender == "MALE"))//if-else condition
	{
		cout << "THANKYOU SIR !!!" << endl;
		cout << endl;
		cout << "LETS PROCEED NEXT" << endl;
		cout << endl;
	}
	else if ((gender == "female" || gender == "Female" || gender == "FEMALE"))
	{
		cout << "THANKYOU MA'AM" << endl;
		cout << "LETS PROCEED NEXT" << endl;
		cout << endl;

	}
	else
	{
		cout << "THANKYOU !!!" << endl;
		cout << endl;
		cout << "LETS PROCEED NEXT" << endl;
		cout << endl;
	}

	system("pause>null");
	system("cls");
	system("color 60");
	int month, date;
	string sign;

	cout << " Enter your birth month(in numbers):";
	cin >> month;
	cout << " Enter your birth date:";
	cin >> date;

	if ((month == 1  && date >= 20) || (month == 2 && date <= 18))
	{
		cout << " Your zodiac sign is AQUARIUS\n";

		select("aquarius");

	}
	else if ((month == 2 && date >= 19) || (month == 3 && date <= 20))
	{
		cout << " Your zodiac sign is PISCES\n";
		select("pisces");
	}
	else if ((month == 3 && date >= 21) || (month == 4 && date <= 19))
	{
		cout << " Your zodiac sign is ARIES\n";
		select("aries");
	}
	else if ((month == 4 && date >= 20) || (month == 5 && date <= 20))
	{
		cout << " Your zodiac sign is TAURUS\n ";
		select("taurus");
	}
	else if ((month == 5 && date >= 21) || (month == 6 && date <= 20))
	{
		cout << " Your zodiac sign is GEMINI\n";
		select("gemini");
	}
	else if ((month == 6 && date >= 21) || (month == 7 && date <= 22))
	{
		cout << " Your zodiac sign is CANCER\n";
		select("cancer");
	}
	else if ((month == 7 && date <= 23) || (month == 8 && date <= 22))
	{
		cout << " Your zodiac sign is Leo\n";
		select("leo");
	}
	else if ((month == 8 && date >= 23) || (month == 9 && date <= 22))
	{
		cout << " Your zodiac sign is VIRGO/n";
		select("virgo");
	}
	else if ((month == 9 && date >= 23) || (month == 10 && date <= 22))
	{
		cout << " Your zodiac sign is LIBRA\n";
		select("libra");
	}
	else if ((month == 10 && date >= 23) || (month == 11 && date <= 21))
	{
		cout << " Your zodiac sign is SCORPIO\n";
		select("scorpio");
	}
	else if ((month == 11 && date >= 22) || (month == 12 && date <= 21))
	{
		cout << " Your zodiac sign is SAGUITTARIUS\n";
		select("sagittarius");
	}
	else if ((month == 12 && date >= 22) || (month == 1 && date <= 19))
	{
		cout << " Your zodiac sign is CAPRICORN\n";
		select("capricon");
	}
	else if ((month == 12 && date >= 22 && date <= 31) || (month == 1 && date <= 19));

	else
	{
		cout << " INVALID INPUT";
	}
	system("pause");

}


void daily_sagittarius()
{
	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	{
		ifstream ifile("daily_sag.txt");
		string read;
		while (getline(ifile, read))
		{
			cout << read;
		}
		ifile.close();
		
	}

	cout << endl;
	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}
	system("pause>null");

}

void daily_leo()
{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* You need structure to feel your best today, Leo.\n " << endl;
	cout << "*Let yourself get lost in productive action today, as the clarity-seeking Virgo moon pushes you to focus on activating your skills. \n" << endl;
	cout << "*It�s an ideal day for anything involving a realistic mindset, as you�re able to think practically and make financially-sound choices.  \n" << endl;
	cout << "* Luna�s evening link with Uranus can bring a fresh wave of inspiration to career matters. \n" << endl;


	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_aquarius()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* As an Aquarius, you�re not often one for big, messy, emotional displays. \n " << endl;
	cout << "*This is especially true when those displays might be your own!  \n" << endl;
	cout << "* Wednesday�s skies encourage you to actually sit with and acknowledge any unsettled feelings, in hopes of avoiding the aforementioned scenario.  \n" << endl;
	cout << "*  It�s an ideal day to commit yourself to a therapeutic practice or confide in a lover. \n" << endl;
	cout << "*  Later, the moon�s link with Uranus brings surprising developments to the home front. \n" << endl;



	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_aries()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* As an Aries, you tend to have no problem launching new initiatives in your life.  \n " << endl;
	cout << "*The only snag you wind up hitting is your ability to follow through. \n" << endl;
	cout << "* Wednesday�s skies put you in working mode and help you return to any endeavors that have fallen by the wayside, as the moon glides through driven Virgo.  \n" << endl;
	cout << "*  Luna�s late night link to innovative Uranus brings a fresh burst of inspiration to your talents. \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_gemini()
{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* Gemini people often come equipped with a charismatic charm.   \n " << endl;
	cout << "* The universe is dialing that natural ability all the way up today, as magnetic Venus moves forward into show-stopping Leo. \n" << endl;
	cout << "* This transition works to attract positive circumstances to your mental health and verbal abilities, from now through July 21.  \n" << endl;
	cout << "*  It�s an ideal time to devote energy to a writing project, take a class, or heal shaky bonds with siblings. \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_capricon()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* Another day of the same ol�, same ol� is bound to make you nuts, Capricorn.   \n " << endl;
	cout << "*Find a way to reinvigorate your routine today, as the moon slides into capable Virgo. \n" << endl;
	cout << "* Luna�s presence here directs your attention to your current travel plans, educational ventures, and big picture vision of life.  \n" << endl;
	cout << "*  Get out of the norm to enliven your perspective and watch the rest fall into place. \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_taurus()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* You�re in desperate need of a good time, Taurus.   \n " << endl;
	cout << "*What makes you happy? Find that activity and reconnect with it unabashedly today, as the moon glides into down-to-earth Virgo. \n" << endl;
	cout << "* The moon�s minimal contacts make for a slow-paced day�so, who cares if you slack off and prioritize pleasure over work?   \n" << endl;
	cout << "*   Later on, the moon links up with electric Uranus, bringing an invigorated energy to your self-expression. \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_virgo()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* It�s easy for you to get lost in your head, Virgo. \n " << endl;
	cout << "* Wednesday�s skies remind you to reconnect with your body and come back down to earth, as the moon glides forward into your sign.  \n" << endl;
	cout << "* Luna�s presence here makes it an ideal day to devote yourself to some TLC, as her lack of contacts creates a low-activity day.   \n" << endl;
	cout << "*   Embrace the opportunity to sync back up with your own needs for once! \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_pisces()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* Take a good look at your partnerships today, Pisces. \n " << endl;
	cout << "* The moon glides into your opposite sign of sharply realistic Virgo, helping you tune into your current relationship story.  \n" << endl;
	cout << "* Are you speaking up about your needs or are you side-stepping them?    \n" << endl;
	cout << "* It�s an ideal day to touch base with yourself, or a partner, on what you can do to help love flourish. \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_libra()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* Let yourself retire from the world today, Libra.  \n " << endl;
	cout << "* You�re likely to be in the mood to hole up and hide away, as the moon glides into reflective Virgo. \n" << endl;
	cout << "* This transition encourages you to seek out solitude and peace.    \n" << endl;
	cout << "* It�s an ideal day to cleanse your space and minimize any junk you�ve collected.  \n" << endl;
	cout << "*  Luna�s little cosmic action renders the day low-key, so don�t feel the need to be a productive member of society.  \n" << endl;





	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}
void daily_scorpio()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* Reconnect with your people today, Scorpio. \n " << endl;
	cout << "* The moon slides into practical Virgo this morning, prompting you to feel like a part of something bigger. \n" << endl;
	cout << "* It�s an ideal day to plan something with friends or reach out to those special people in your life who you�ve fallen out of touch with.    \n" << endl;
	cout << "* It�s an ideal day to cleanse your space and minimize any junk you�ve collected.  \n" << endl;
	cout << "* Your community and social network hold the key to your good mood today, so don�t make yourself an island.  \n" << endl;





	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}


void daily_cancer()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e0");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR TODAY :" << endl;
	cout << endl;
	cout << "* As a Cancer, you tend to hold your tongue at times when you should actually be speaking up.  \n " << endl;
	cout << "* Remind yourself of this tendency today, as the moon glides through poignant Virgo and urges you to engage with your voice.  \n" << endl;
	cout << "* It�s an ideal day to return missed texts and emails, get absorbed in an honest heart-to-heart, or immerse yourself in an activity that relaxes you.   \n" << endl;






	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
		if (fort == 'y' || fort == 'Y')
		{
			cout << "SUGGESTION : ";
			cin.ignore();
			getline(cin, suggestion, '\n');
			cout << endl;
			cout << "BACK TO MENU";
		}
		else if (fort == 'n' || fort == 'N')
		{
			cout << "GOOD BYE" << endl;
			cout << "BACK TO MENU......" << endl;
		}

	}
	system("pause>null");

}

void monthly_leo()
{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* Is there something you really want, Leo? With the sun in your sector of dreams and wishes until June 20, this is a great time to take those steps toward obtaining it.\n " << endl;
	cout << "* If you get absolutely clear on what you hope to accomplish and visualize it in great detail, this will make getting it even easier. \n" << endl;
	cout << "* There�s a powerful solar eclipse in Gemini on the tenth, and this could be one of the best times to set your intention to accomplish your goal.  \n" << endl;
	cout << "* You�ll have the assistance of the moon tide as it brings an emotional surge and a burst of enthusiasm. \n" << endl;
	cout << "* Ride the waves of desire until you get it for real. \n" << endl;



	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void monthly_gemini()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "*  As the month gets underway, the radiant sun continues to shine in your sign, inspiring you to be completely yourself and channel your energy into those things you love to do most. \n " << endl;
	cout << "*  If you have plans and projects that make your heart sing, this is the time to make a start.\n" << endl;
	cout << "*  If you have too many ideas and options available to you, think about what fills you with the most enthusiasm. \n" << endl;

	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void monthly_aquarius()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "*  The sun in your leisure and pleasure zone means it�s time to indulge in your favorite activities and have some fun for a change. \n " << endl;
	cout << "*  If life has been hard work lately, the cosmos now encourages you to kick back and get involved in those things you love to do. As well as enjoying hobbies, this is a time of creativity and romance and for letting your inner child out to play.  \n" << endl;
	cout << "*  Plus, you are doubly blessed as a solar eclipse in Gemini on June 10 can bring events into your life that have deep meaning and involve showcasing skills and talents that you may have been reluctant to reveal. \n" << endl;
	cout << "*  Somehow the universe will conspire to make this happen, and you might have no choice in the matter.  \n" << endl;
	cout << "*  This could lead to a fruitful side business or even a full-time job if things develop along the right lines.  \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void monthly_aries()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* Whether you�re looking for facts or spiritual and intuitive revelations, this month has much to offer.  \n " << endl;
	cout << "* The sun in Gemini until June 20 can greatly enhance your curiosity, and you might be busy gathering information on anything and everything that interests you. \n" << endl;
	cout << "* New opportunities and vibrant connections can result from this.   \n" << endl;
	cout << "* But with philosophical Jupiter in Pisces along with dreamy Neptune, you�ll also be eager to explore the inner landscape of your soul. \n" << endl;
	cout << "* You could learn much about yourself that changes your outlook and your life.    \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void monthly_capricon()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* Dear Cappie, you�re ready to dive into anything that grabs your attention, and your interest in all areas of life continues to be insatiable.   \n " << endl;
	cout << "* This is due to the sun in Gemini and your lifestyle sector inspiring you to explore ideas, opportunities, and new concepts and theories. \n" << endl;
	cout << "* Whether it�s plausible not, you�re ready to find out more.  \n" << endl;
	cout << "* Something might hold your interest, though, and this could coincide with the solar eclipse in Gemini on June 10. \n" << endl;
	cout << "* This could be a golden opportunity that you have coveted for some time.  \n" << endl;
	cout << "* Or you might be pushed into doing something that you�ve considered but haven�t dared commit to..  \n" << endl;
	cout << "* Fate could decree that you have no choice this time around.   \n" << endl;
	cout << "* Fear not, because it could be for your own good and a valuable growth experience.  \n" << endl;





	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}
void monthly_taurus()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* Are you eager to enhance your income? With key planets in your money zone, you�ll have ample opportunity to dream up some fabulous ideas.  \n " << endl;
	cout << "* And with the emphasis on the sign of Gemini, your bargaining and bartering skills will be very much to the fore.  \n" << endl;
	cout << "* The sun in this zone until June 20 can highlight financial management, inspiring you to take stock and get things in order.    \n" << endl;
	cout << "* If you need a new budget or want to save for something, this is the time to start. \n" << endl;
	cout << "* There�s a solar eclipse in this same zone aligning with Mercury on the tenth, and this auspicious aspect can bring your way a special opportunity that could be lucrative. \n" << endl;
	cout << "* Home and family affairs come into focus on June 11 as feisty Mars moves into Leo for a stay of around six weeks. \n" << endl;
	cout << "* You could feel a powerful urge to get rid of clutter and give your place a makeover you can be proud of. \n" << endl;





	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void monthly_virgo()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* The sun is in your sector of goals and ambitions until June 20, so you�ll be ready to make a big splash and show the world what you�re capable of. \n " << endl;
	cout << "* This could be quite a month in this respect.  \n" << endl;
	cout << "* Your determination to make progress could push you to move out of your comfort zone and take on board new responsibilities or showcase your leadership qualities.   \n" << endl;
	cout << "* Plus, with a powerful solar eclipse in Gemini linking to logical Mercury on the tenth, a conversation could be the turning point that leads to the next step up the career ladder or a new business opportunity. Something is in the air, so be ready. \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void monthly_pisces()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* Home and family affairs could be at the top of the agenda until the sun moves into Cancer on June 20, Pisces.  \n " << endl;
	cout << "* The coming weeks bring opportunities to get your place shipshape and looking great for the summer months ahead.   \n" << endl;
	cout << "* And if you haven�t done any decluttering in a while, use this chance to get rid of those things you no longer need or want and make some extra space for yourself.   \n" << endl;
	cout << "* There�s a solar eclipse in Gemini on the tenth, and this dynamic lunar phase could coincide with a major decision. \n" << endl;
	cout << "* If you�ve been thinking of moving, you might decide to go ahead at this time.   \n " << endl;
	cout << "* If you�re eager to adopt a pet, you�ll be ready to prepare for your new family member.   \n " << endl;
	cout << "* If you want to buy or sell real estate, go for it.    \n " << endl;
	cout << "* Whatever plans you have in mind, this eclipse can inspire you to get a move on.   \n " << endl;







	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void monthly_libra()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* Libra, the sun in your sector of exploration brings an opportunity to step onto a new path, try your hand at fresh experiences, and take a leap of faith.   \n " << endl;
	cout << "* Are you ready to explore new opportunities? \n" << endl;
	cout << "* Get curious and follow your intuition.    \n" << endl;
	cout << "* You never know where it might lead.  \n" << endl;
	cout << "* Plus, with talkative Mercury rewinding in this zone, you might connect with someone you haven�t heard from in a while or a long-lost friend from afar.   \n" << endl;
	cout << "* Either could be a happy occasion when the chance to catch up is golden.  \n" << endl;







	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void monthly_scorpio()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* Scorpio, the sun in Gemini and an intense zone of your chart encourages you to be curious about what is working in your life and what isn�t. \n " << endl;
	cout << "* It�s very possible that you feel stuck. If so, this could be a sign that you need to detach.  \n" << endl;
	cout << "* The more you let this go, allowing it to die away by giving it less and less attention, the more quickly it will disappear from your life.    \n" << endl;
	cout << "* And you have assistance in the form of the solar eclipse in Gemini on June 10 encouraging you to step out of those conditions that don�t suit you and embrace a new path.   \n" << endl;
	cout << "* While it can sometimes be difficult for you to release anything, once you do there will be no going back.   \n" << endl;
	cout << "* You�ll be ready for the butterfly stage. \n" << endl;






	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}

void monthly_sagittarius()
{
	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* Sag, a delightful focus encourages cooperation, communication, and plenty of interaction. \n " << endl;
	cout << "* Get ready for an exciting month with opportunities to network, find romance, and spend more quality time with your loved ones.  \n" << endl;
	cout << "* If you need a business partner, the focus on savvy Gemini suggests you�ll have no problem finding the right match.  \n" << endl;
	cout << "* If you�re ready to commit to a collaboration or team project, the solar eclipse in Gemini on June 10 can be excellent for taking a relationship further. \n" << endl;
	cout << "* Whether you�re ready to take a romance to the next level or commit to a strong, ongoing business or romance partnership, this is the time to make that move. \n" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}
	system("pause>null");

}

void monthly_cancer()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR JUNE :" << endl;
	cout << endl;
	cout << "* Cancer, the sun in a private zone until June 20 brings a chance to attend to your inner game and find a way to release emotions that may be blocking your progress.   \n " << endl;
	cout << "* What is the one issue in your life that you�d like to resolve?  \n" << endl;
	cout << "* If you can find the underlying feelings that are keeping it going and begin to let these go, you can experience healing and great peace of mind.   \n" << endl;
	cout << "* The coming weeks can also be a call to pay attention to your dreams because they may contain valuable guidance.  \n" << endl;
	cout << "* There�s a solar eclipse in this same zone on the tenth, and you may be blessed with an insight that helps you move beyond your limits and tap into more of your potential.   \n" << endl;
	cout << "* It might also be a good time to connect with a teacher or life coach who could assist you in this regard.  \n" << endl;






	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

}
void yearly_sagittarius()
{
	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* The beginning of the year will bring unique new ideas to the forefront of your mind, as Saturn and Jupiter take center stage in the sign of Aquarius. \n " << endl;
	cout << "* These planetary placements will spark fresh thoughts around philosophical concepts such as manifestation, luck, karma, and responsibility. \n" << endl;
	cout << "* This energy hits you on a cerebral level, creating a thirst for information that will leave you wanting to carve out a new path toward knowledge.  \n" << endl;
	cout << "* This would be the perfect time to begin college courses or pursue some form of higher learning .  \n" << endl;
	cout << "* It will be important to create a schedule around how you'll expand your mind, as Saturn appreciates structures. \n" << endl;
	cout << "* You may also find yourself planning a vacation during this time, because you'll be more than ready for the adventure! \n" << endl;


	cout << endl;
	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}
	system("pause>null");

}

void yearly_leo()
{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* Prepare for a pivotal year in your life, Leo, as the planets above are shifting your path forever.\n " << endl;
	cout << "* While 2020 posed many collective challenges, we will see the next stage in our global evolution take place in the year ahead.  \n" << endl;
	cout << "* All Leos will have plenty of reason to celebrate throughout 2021�both in love and career.  \n" << endl;
	cout << "* Peer into what the stars predict for your year ahead! \n" << endl;
	cout << "* At the end of 2020, two powerful planets moved across the sky from you and will remain there predominantly throughout all of 2021.  \n" << endl;
	cout << "* Saturn�the taskmaster planet that rules life lessons and always forces you to grow stronger�will stand directly across the sky from you until 2023. \n" << endl;
	cout << "* This Saturn opposition represents a significant turning point in any person�s life. \n" << endl;


	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void yearly_aquarius()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "*  As January 1 marks yet another revolution around the sun, you may find that you're experiencing a period of personal growth.  \n " << endl;
	cout << "*  It's likely you'll be a bit burnt out from the holiday season, and will be looking for strategies to reinvest in yourself and evolve.  \n" << endl;
	cout << "*  As Jupiter, Saturn, and then Mercury make their journey through Aquarius, you'll be actively seeking ways to implement change on both a micro and macro scale.  \n" << endl;
	cout << "*  This means a delicate balance between shadow work and ego, and you'll have to do the necessary work toward becoming better and walking your highest path.  \n" << endl;
	cout << "*  January 14 will be an especially transformative day for you, but that comes with its own pain, and you may be confronted with a hit to your ego.  \n" << endl;
	cout << "*  Any bumps in the road should be taken in stride on this day, because any challenges you face can only contribute to your personal evolution.  \n " << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}
void yearly_gemini()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "*  Welcome to a very special year, Gemini. \n " << endl;
	cout << "*  Your sign of the Twins is going into 2021 with a fresh outlook and plenty of brilliant moments.  \n" << endl;
	cout << "*  The year opens with your home planet entering the electric sign of Aquarius on January 8, adding to these luminescent energies. \n" << endl;
	cout << "*  Your aura is on point, and all who come in contact with you recognize your glow. \n" << endl;
	cout << "*  There will be plenty of sudden and fated events directly affecting you in a positive way. \n" << endl;
	cout << "*  You'll feel more aligned and present than ever, especially as the nodes of fate cycle directly through your sign.\n " << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}
void yearly_aries()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* Welcome to a new year, Aries!  \n " << endl;
	cout << "* The Ram has plenty to look forward to on this great adventure in 2021. \n" << endl;
	cout << "* On a personal level, there are many twists and turns for your ambitious sign to conquer.   \n" << endl;
	cout << "* There is a ton of firepower sparkling through the skies, especially after your personal planet Mars kept those irons hot and tested you through a great deal during 2020's long yet passionate retrograde phase.  \n" << endl;
	cout << "* This is a moment of truth for really taking action on those important lessons that put you through your paces in 2020.    \n" << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}
void yearly_capricon()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* You'll begin 2021 spending a lot of time in your own head.    \n " << endl;
	cout << "* The sun, Pluto, and Mercury are working together in the sign of Capricorn to help you sort out your thoughts. \n" << endl;
	cout << "* Themes around identity are bound to come up, and you'll likely take deep consideration on how you want to move forward in life, dear Sea Goat.  \n" << endl;
	cout << "* These placements may cause you to be a little hard on yourself, but their energy begins softening on January 8 when Venus enters Capricorn, helping you reconnect with a love of self. \n" << endl;
	cout << "* For you, things will begin to pick up during Pisces season, and your mind will be shooting off new ideas and thoughts at lightning speed.   \n" << endl;
	cout << "* Much of spring will find you focused on your home life and fun, and your creative juices will be flowing.  \n" << endl;






	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void yearly_taurus()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* Welcome to a new year and a totally refreshing new you, Taurus! Your sign has so much to look forward to in 2021.   \n " << endl;
	cout << "* You've been going through some fabulous changes for so long that now is your time to absolutely shine and live your best life.   \n" << endl;
	cout << "* Your sign has been strong and steady even as the world rocked and rolled through last year's intense great conjunction cycles occurring between Jupiter, Saturn, and Pluto. \n" << endl;
	cout << "* This should be a fantastic year for your ambitious sign of the Bull.  \n" << endl;
	cout << "* Plenty of dynamic events will influence you on all levels of personal life, love, and career wins. \n" << endl;
	cout << "* This year is defined by the major square aspect between Uranus through Taurus and Saturn in Aquarius.  \n" << endl;
	cout << "* This allows interplay and sudden societal adjustments that can change your life�and also make you feel extremely vulnerable. \n" << endl;





	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");

}
void yearly_virgo()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* Welcome to 2021, Virgo, a year that will shift the path before your feet. \n " << endl;
	cout << "* You'll experience a great deal of growth as you assess where you are now and where you still wish to go.  \n" << endl;
	cout << "* The year ahead will be filled with opportunities for personal growth, health, happiness, love, friendships, and success, so expect to be quite busy! \n" << endl;
	cout << "* While there may be some challenges, there will still be blessings. Peer into what the stars predict for your year ahead! \n" << endl;
	cout << "* While work, career, and continuous ascension toward your ambitions will likely take the main focus of your year, significant attention will be directed toward physical health and family relations. \n " << endl;
	cout << "* Virgos will look at 2021 as a pivotal year for career growth and expansion. \n " << endl;




	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}
void yearly_pisces()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* You're the dreamiest sign in the zodiac, lovely Pisces, with an abundance of compassion and kindness.  \n " << endl;
	cout << "* Your ability to intuit other people's feelings is a gift, but remember that it can be a curse as well, especially when somebody takes advantage of your sweet nature.  \n" << endl;
	cout << "* Just like every other year, you'll be confronted with new lessons on how to navigate the real world without sacrificing your delicate disposition. \n" << endl;
	cout << "* Luckily, you'll also receive plenty of opportunities to connect with truly good people who can help restore your faith in humanity, should you find it wavering. \n" << endl;
	cout << "* The beginning of the year will be quite busy for you, especially around networking within your own community.  \n " << endl;
	cout << "*  Use the energy during this first part of January to analyze your circle so that you can figure out who is and who is not a genuine friend. \n " << endl;






	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}
void yearly_libra()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* You'll be popular as ever on NYE 2020, and ready to take on 2021 in style!  \n " << endl;
	cout << "* While your friends and family may be struggling with their balance and personal affairs, you'll be cool and collected like always.  \n" << endl;
	cout << "* You may also find that your relationship advice is in high demand around the first and second of January, so don't be afraid to share your thoughts on such matters. \n" << endl;
	cout << "* As the holiday season begins to wind down, find time to connect with siblings or childhood friends around January 9 and 10.  \n" << endl;
	cout << "* By sharing your New Year's resolutions with said company, you can reconnect with your ambition and drive to make positive changes this time around the sun. \n" << endl;







	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}
void yearly_scorpio()

{

	char  fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* You've been waiting for the right time to make some changes, dear Scorpion, and the stars align in 2021 to do just that.  \n " << endl;
	cout << "* The New Year breaks with the sun, Mercury, and Pluto all in Capricorn, while illuminating the sector of your chart that rules thought process and communication.  \n" << endl;
	cout << "* You'll be ready to take on a new way of thinking, and to communicate these shifts to others.   \n" << endl;
	cout << "* This will also be the perfect time to pick up a new hobby or area of study, so consider enrolling in an online class or beginning a new project.  \n" << endl;
	cout << "* The energy here can also help you set new boundaries where you need to create space with certain people, so take a step back from toxic or overbearing relationships.  \n" << endl;


	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}

	system("pause>null");

}


void yearly_cancer()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "THIS IS YOUR HOROSCOPE FOR 2021 :" << endl;
	cout << endl;
	cout << "* Welcome to a fabulous new year, Cancer!  \n " << endl;
	cout << "* You're going to experience some massive movement in areas of your life that once felt locked into place.   \n" << endl;
	cout << "* Your sign went through some incredible transitions in 2020 thanks to some very pointed oppositions between Jupiter, Saturn, and Pluto. \n" << endl;
	cout << "* These major power players met in the sky throughout the year digging at your core and bringing you undeniable experiences that completely shifted your frame of mind during 2020.  \n" << endl;






	cout << endl;



	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void luckynumber_cancer()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << "* 2\n 7\n 11\n 16\n 20\n 25\n " << endl;





	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_aquarius()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << "* 4\n 8\n 13\n 17\n 22\n 26\n " << endl;


	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}
void luckynumber_gemini()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << "* 3\n 6\n " << endl;


	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_sagittarius()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << "* 3\n 12\n 21\n 30\n " << endl;


	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_leo()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << "* 1\n 4\n 10\n 13\m 19\n 22\n " << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_aries()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << "* 1\n 9\n " << endl;


	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_capricon()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << "* 1\n 4\n 8\n 10\n 13\n 17\n 19\n 22\n 26\n " << endl;


	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_taurus()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << "* 2\n 4\n 6\n 11\n 20\n 29\n 37\n 47\n 56\n " << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_virgo()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << " 5\n 4\n 23\n 32\n 41\n 50\n  " << endl;


	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_pisces()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are : " << endl;
	cout << endl;
	cout << " 3\n 7\n 12\n 16\n 21\n 25\n 30\n 35\n 43\n 52\n " << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_libra()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << " 6\n 15\n 24\n 33\n 42\n 51\n 60\n " << endl;


	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void luckynumber_scorpio()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "Your Lucky Numbers Are :" << endl;
	cout << endl;
	cout << " 9\n 18\n 27\n 36\n 45\n 54\n 63\n 72\n 81\n 90\n " << endl;


	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_aquarius()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with GEMINI. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_sagittarius()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with ARIES. * " << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_leo()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are mostly likely to bond well with SAGITTARIUS. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}

void likeliness_gemini()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are mostly likely to bond well with CANCER. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}
void likeliness_aries()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with AQUARIUS. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_capricon()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with TAURUS. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_taurus()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with CANCER. * " << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_virgo()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with TAURUS. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_pisces()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with SCORPIO. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_libra()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with GEMINI. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_scorpio()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with CANCER. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}


void likeliness_cancer()

{

	char fort;
	string suggestion;
	system("cls");
	system("color e1");
	cout << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\t\t>>>>>  HOROSCOPE BASED FORTUNE TELLER     <<<<< " << endl;
	cout << "\t\t==================================================" << endl;
	cout << "\n" << endl;
	cout << "LIKELINESS WITH OTHER ZODIAC SIGNS" << endl;
	cout << endl;
	cout << "* You are most likely to bond well with PISCES. *" << endl;

	cout << "THANKYOU FOR USING HOROSCOPE BASED FORTUNE TELLER \n" << endl;
	cout << "WE HOPE YOU LIKED OUR SERVICE \n" << endl;
	cout << "DO YOU WANT TO GIVE ANY SUGGESTION : Y/N ? ";
	cin >> fort;
	cout << endl;
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << " BACK TO MENU... " << endl;
	}
	else
	{
		cout << "YOU HAVE PUT THE WRONG STATEMENT " << endl;
		cout << endl;
		cout << "RENTER STATEMENT " << endl;
		cout << "ANY SUGGESTION YOU WANT TO GIVE Y/N ?";
		cin >> fort;
		cout << endl;
	}
	if (fort == 'y' || fort == 'Y')
	{
		cout << "SUGGESTION : ";
		cin.ignore();
		getline(cin, suggestion, '\n');
		cout << endl;
		cout << "BACK TO MENU";
	}
	else if (fort == 'n' || fort == 'N')
	{
		cout << "GOOD BYE" << endl;
		cout << "BACK TO MENU......" << endl;
	}


	system("pause>null");
}








