#include <windows.h>
#include <shellapi.h>
#include <iostream>
#include <string>
#include <cctype>


int main()
{

	std::cout << "Temporary email has beem created for the webistes with a '*'" << std::endl;
	std::cout << "Please check on your browser!";
	ShellExecute(0, 0, L"https://temp-mail.org/en/10minutemail", 0, 0, SW_SHOW);

	char choices;
	do {
		std::cout << "\n\n\t\tOSINT WEBSITES\n";
		std::cout << "\t\tv1.0\n\n";

		std::cout << "By: \n";
		std::cout << "sudo-su-FDEL\n";
		std::cout << "\n Choose an option:                                        \t";
		std::cout << "\n [A] People Search                                        \t";
		std::cout << "\n [B] Gmail information                                    \t";
		std::cout << "\n [C] Phone Numbers                                        \t";
		std::cout << "\n [D] Reverse image                                        \t";
		std::cout << "\n [E] Geolocation                                          \t";
		std::cout << "\n [F] Social Media search                                  \t";
		std::cout << "\n [G] Misc                                                 \t";
		std::cout << "\n [H] Exit                                                 \n";
		std::cout << "  \n\nInput: ";

		std::cin >> choices;

		switch (choices)
		{
		case 'A':
		case 'a':
		{
			char peoplechoice;
			do {

				std::cout << "\n [A] FastPeople search";
				std::cout << "\n [B] Whitepages\n";
				std::cout << "\n [Z] Go back\n";
				std::cout << "Input: ";
				std::cin >> peoplechoice;
				switch (peoplechoice)
				{
					//people search

				case 'A':
				case 'a':


					ShellExecute(0, 0, L"https://www.fastpeoplesearch.com/", 0, 0, SW_SHOW);
					system("cls");
					break;


				case 'B':
				case 'b':


					ShellExecute(0, 0, L"https://www.whitepages.com/ ", 0, 0, SW_SHOW);
					system("cls");
					break;


				case 'Z':
				case 'z':
					system("cls");
					break;


				default:
					system("cls");
					std::cout << "Please select a letter from the menu";
					std::cin.ignore();
					break;
				}


			} while (!((peoplechoice == 'z') || (peoplechoice == 'Z')));
			break;
		}


		case 'B':
		case 'b':
		{
			//email
			ShellExecute(0, 0, L"https://tools.epieos.com/email.php", 0, 0, SW_SHOW);
			system("cls");
		}
		break;
		//phone
		case 'C':
		case 'c':
		{
			char phone;
			do {

				std::cout << "\n [A] Whatsapp ChatWatch*";
				std::cout << "\n [B] WhatsApp Number Verfication";
				std::cout << "\n [C] Fastpeople(Phone Info)";
				std::cout << "\n [D] Phonerator\n";
				std::cout << "\n\tFor more info on Phonerator: https://www.youtube.com/watch?v=ClEwshL3jHw" << std::endl;
				std::cout << "\n [Z] Go back\n";
				std::cout << "Input: ";
				std::cin >> phone;
				switch (phone)
				{
					//people search

				case 'A':
				case 'a':
					ShellExecute(0, 0, L"https://v2.chatwatch.net/", 0, 0, SW_SHOW);
					system("cls");
					break;


				case 'B':
				case 'b':
					ShellExecute(0, 0, L"https://watools.io/check-numbers ", 0, 0, SW_SHOW);
					system("cls");
					break;


				case 'C':
				case 'c':
					ShellExecute(0, 0, L"https://www.fastpeoplesearch.com/reverse-phone-lookup", 0, 0, SW_SHOW);
					system("cls");
					break;

				case 'D':
				case 'd':
					ShellExecute(0, 0, L"https://www.martinvigo.com/tools/phonerator/", 0, 0, SW_SHOW);
					system("cls");
					break;

				case 'E':
				case 'e':
					system("cls");
					break;

				default:
					system("cls");
					std::cout << "Please select a letter from the menu";
					std::cin.ignore();
					break;
				}


			} while (!((phone == 'z') || (phone == 'Z')));
			break;
		}

		//reverse image
		case 'D':
		case 'd':
		{
			char reverse;
			do {

				std::cout << "\n [A] Tineye";
				std::cout << "\n [B] Yandex";
				std::cout << "\n [C] Google Images";
				std::cout << "\n [D] Pimeyes";
				std::cout << "\n [E] LetsEnhance.io*\n";
				std::cout << "\n [Z] Go back\n";
				std::cout << "Input: ";
				std::cin >> reverse;
				switch (reverse)
				{
					//people search

				case 'A':
				case 'a':
					ShellExecute(0, 0, L"https://tineye.com/ ", 0, 0, SW_SHOW);

					system("cls");
					break;


				case 'B':
				case 'b':
					ShellExecute(0, 0, L"https://yandex.com/images/ ", 0, 0, SW_SHOW);

					system("cls");
					break;


				case 'C':
				case 'c':
					ShellExecute(0, 0, L"https://www.google.com/imghp?hl=en&ogbl", 0, 0, SW_SHOW);

					system("cls");
					break;

				case 'D':
				case 'd':
					ShellExecute(0, 0, L"https://pimeyes.com/en", 0, 0, SW_SHOW);

					system("cls");
					break;

				case 'E':
				case 'e':
					ShellExecute(0, 0, L"https://letsenhance.io/", 0, 0, SW_SHOW);
					system("cls");
					break;

				case 'Z':
				case 'z':

					system("cls");
					break;
				default:
					system("cls");
					std::cout << "Please select a letter from the menu";
					std::cin.ignore();
					break;
				}


			} while (!((reverse == 'z') || (reverse == 'Z')));
			break;

		}

		//geolocation
		case 'E':
		case 'e':
		{
			char geo;
			do {

				std::cout << "\n [A] Dual Maps";
				std::cout << "\n [B] Youtube Geolocation";
				std::cout << "\n [C] SnapChat Map\n";
				std::cout << "\n [Z] Go back";
				std::cout << "\nInput: ";
				std::cin >> geo;
				switch (geo)
				{
					//people search

				case 'A':
				case 'a':
					ShellExecute(0, 0, L"https://www.mapchannels.com/dualmaps7/map.htm?lat=37.09024&lng=-95.712891&z=18&as=1&gl=1&rm=0&panel=mbsi&gm=0&bm=2&mw=1&mv=1&md=1&mi=1&lang=en ", 0, 0, SW_SHOW);
					system("cls");
					break;


				case 'B':
				case 'b':
					ShellExecute(0, 0, L"https://mattw.io/youtube-geofind/location ", 0, 0, SW_SHOW);

					system("cls");
					break;


				case 'C':
				case 'c':
					ShellExecute(0, 0, L"https://map.snapchat.com ", 0, 0, SW_SHOW);
					system("cls");
					break;

				case 'Z':
				case 'z':

					system("cls");
					break;

				default:
					system("cls");
					std::cout << "Please select a letter from the menu";
					std::cin.ignore();
					break;
				}


			} while (!((geo == 'z') || (geo == 'Z')));
			break;
		}


		//Social Media Search
		case 'F':
		case 'f':
		{
			char social;
			do {

				std::cout << "\n [A] Facebook search";
				std::cout << "\n [B] Twitter Account Report";
				std::cout << "\n [C] Twitter Account Analysis\n";
				std::cout << "\n [Z] Go back";
				std::cout << "\nInput: ";
				std::cin >> social;
				switch (social)
				{
					//people search

				case 'A':
				case 'a':
				{
					system("cls");

					std::string User_Name, url, url2;
					std::cout << "For this option please enter their name with NO SPACES which will be searched on FaceBook\n";
					std::cout << "NOTE: if their FaceBook is private, they will not show up at all\n";
					std::cin >> User_Name;
					url = "https://www.facebook.com/public?query=/" + User_Name;
			
					ShellExecuteA(NULL, NULL, url.c_str(), NULL, NULL, SW_SHOW);
					
					system("cls");
					break;

				}


				case 'B':
				case 'b':
				{
					system("cls");

					ShellExecute(0, 0, L"https://socialbearing.com/", 0, 0, SW_SHOW);
					system("cls");

					break;
				}

				case 'C':
				case 'c':
					system("cls");

					ShellExecute(0, 0, L"https://tinfoleak.com/", 0, 0, SW_SHOW);
					system("cls");

					break;

				case 'Z':
				case 'z':

					break;

				default:
					system("cls");
					std::cout << "Please select a letter from the menu";
					std::cin.ignore();
					break;
				}
				system("cls");


			} while (!((social == 'z') || (social == 'Z')));

			break;
		}
		//misc
		case 'G':
		case 'g':
		{
			ShellExecute(0, 0, L"https://start.me/p/rx6Qj8/nixintel-s-osint-resource-list", 0, 0, SW_SHOW);
			system("cls");
			break;
		}
		case 'Z':
		case 'z':

		default:
			system("cls");
			std::cout << "Please select a letter from the menu";
			std::cin.ignore();
			break;


		}

	} while (!((choices == 'z') || (choices == 'Z')));

	return 0;
}


