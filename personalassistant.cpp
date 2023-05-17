#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;


class pc_assistant
{
    public:
    void startup(){

    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning "<<endl;

    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon "<<endl;

    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening "<<endl;

    }
}

void time_date(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}

};
int main()
{
    pc_assistant user;
    system("cls");

    cout<<"\t  PERSONAL ASSISSTANT "<<endl<<endl;

    string password;
    string command;

    do
    {

        cout<<" ENTER THE PASSWORD TO CONFIRM YOU "<<endl;



        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password=="devdds")
        {
            cout<<"\n\n\n";
            user.startup();
            do{
                cout<<"\n\n\n";
                cout<<endl<<"How can i help you "<<endl<<endl;



                cout<<"Enter your command ----> ";
                getline(cin,command);
                cout<<endl;


                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello Master "<<endl;

                }

                 else if(command=="what is the time")
                {

                    user.time_date();
                }


                else if(command=="open notepad")
                {
                    cout<<"opening notepad"<<endl;

                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open writepad")
                {
                    cout<<"opening writepad"<<endl;

                    CreateProcess(TEXT("C:\\Windows\\write.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Excel")
                {
                    cout<<"opening Microsoft Excel"<<endl;

                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Office.Desktop.Excel_16051.14326.20238.0_x86__8wekyb3d8bbwe\\Office16\\EXCEL.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Word")
                {
                    cout<<"opening Microsoft Word"<<endl;

                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Office.Desktop.Word_16051.14326.20238.0_x86__8wekyb3d8bbwe\\Office16\\WINWORD.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Paint")
                {
                    cout<<"opening Microsoft Paint"<<endl;

                    CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }


                else if(command=="open google")
                {
                    cout<<"opening google"<<endl;

                    system("start https://www.google.com");
                }

                else if(command=="open youtube")
                {
                    cout<<"opening YouTube"<<endl;

                    system("start https://www.youtube.com");
                }

                else if(command=="close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;

                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="open photo")
                {
                    cout<<"opening photo"<<endl;

                    ShellExecute(NULL,"open","avengers.png",NULL, NULL, SW_NORMAL);
                }


                else if(command=="open oops book")
                {
                    cout<<"opening oops book"<<endl;

                    ShellExecute(NULL,"open","C:\\Users\\rajiv\\Documents\\6th sem\\oops c++ balaguruswamy.pdf",NULL, NULL, SW_NORMAL);
                }

                else if(command=="open video")
                {
                    cout<<"opening video"<<endl;

                    ShellExecute(NULL,"open","C:\\Users\\rajiv\\Documents\\Zoom\\edit distance.mp4",NULL, NULL, SW_NORMAL);
                }

                else if(command=="bye" || command=="exit")
                {
                    cout<<"Good Bye User, see you soon!"<<endl;

                    exit(0);
                }

                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;

                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<###################################  PERSONAL ASSISSTANT ########################################"<<endl<<endl;
                    cout << "********" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "********" << endl << endl;


                }
    } while (1);


    return 0;
}
