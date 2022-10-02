#include <iostream>
#include <fstream>
#include <string>
#include <thread>//for threading not in use yet
#include <string.h>
#include <stdlib.h>// for atoi() stoi() etc 
#include <unistd.h>// for sleep
#include <future>// for Async calls not in use yet

/*
------Classes----
-INFO ✔
All function are public:
DisplayTitle(),Menu(),LoginSingup(),AccInfo(),BookInfo()
-ACC ✔
All function are public:
RUn(), Login(), SignUp()
-libarian ❌
verify(), search()
-book ❌
date(), request(), Renew_info(), search()
-acc. ❌
calfine()
-libarary Adatabase ❌
add(), delete(), update(), search(), display()
-faculity ❌
-student
-fine ❌
*/

using namespace std;



class INFO {
    public:
        void DisplayTitle() {
            cout << "\033[37;43;30m\t\t\t\t\t\t----------Welcome To UAF LibraryManagementSystem----------\033[0m" << endl;
        }

        void Menu() {
            system("clear");
            this->DisplayTitle();
            cout << "\033[3;47;30m----------Select The User to Login or Sign up Acc.----------\033[0m" << endl;
            cout << "1- Student\n2- Staff\n3- Exit" << endl;
            cout << "\033[3;41;30mPlease enter your choice here: \033[0m" ;
            cin >> m_choice1;
            
        }        

        void LoginSignup() {
            system("clear");
            this->DisplayTitle();
            cout << "\033[3;47;30m----------Select to Login or Sign up Acc.----------\033[0m" << endl;
            cout << "1- Login\n2- Signup\n3- Exit" << endl;
            cout << "\033[3;41;30mPlease enter your choice here: \033[0m" ;
            cin >> m_choice1;
        } 
        
        void AccInfo() {
            cout << __func__ << endl;
            cout << "Please enter your name: ";
            cin >> m_username;
            cout << "Please enter your email: ";
            cin >> m_email;
            cout << "Please enter password: ";
            cin >> m_password;
        }

        void Animation()
        {
            string quote = "-------knowledge is Power-------";
            for(int i=0;;i++) {
                cout << "\033[3;47;30m";
                cout << quote[i];
                usleep(100000);
                if(i==quote.size())
                    break;
            }
            cout << endl;
        }

        void BookMenu() {
            
            this->Animation();
            // cout << "\033[3;47;30m-------------------\033[0m" << endl;
            cout << "\033[3;43;30mThe available books are..\033[0m\033[3;47;30m" << endl;
            ifstream bookfile("./database/Books_database.txt");
            while(!bookfile.eof())
            {
                getline(bookfile, m_bookname);
                    cout << m_bookname << " "; 
                getline(bookfile, m_bookname);
            }
            cout << "" << endl;
            cout << "\033[0m1-Borrow a book\n2-Exit" << endl;
        }  

        void BookInfo() {
            cout << "Please enter book name: ";
            cin >> m_bookname;
        }
    friend class ACC;
    private:
        string m_username;
        string m_email;
        string m_password;
        string m_bookname;
        int m_choice1;
};

class BOOK : public INFO {
public:
    BOOK() {
        std::string book;
        std::ifstream BooksData("./database/Books_database.txt");   
        while (!BooksData.eof())
        {
            std::getline(BooksData, book);
            m_books[m_numOfBooks] = book;
            ++m_numOfBooks;
        }

    }

    void ViewBooks() {
        std::string book;
        std::ifstream BooksData("./database/Books_database.txt");   
        while (!BooksData.eof())
        {
            std::getline(BooksData, book);
            m_books[m_numOfBooks] = book;
            ++m_numOfBooks;
        }
        
        for(auto itr : m_books) {
            std::cout << itr << std::endl;
        }
    }
private:
    int m_numOfBooks = 0;
    std::string m_books[256];
};

class ACC:public INFO {
    public:
        INFO obj;
                //Appends the user data in users file
        void SignUp() {
            ofstream Acfile("./database/Acc_database.txt",ios::app);
            if (Acfile.is_open()) {
                Acfile << obj.m_username << endl;
                Acfile << obj.m_email << endl;
                Acfile << obj.m_password << endl;
                Acfile << endl;
                Acfile.close();
                this->Run();
            }
            else
                cout << "unable to open file" << endl;

        }

        void Login() {
            E:
                cout << "Please enter your email: ";
                cin >> obj.m_email;
            P:
                cout << "Please enter your  password: ";
                cin >> obj.m_password;
            string line;
            ifstream Acfile("./database/Acc_database.txt");
            if (Acfile.is_open()) {
            while (getline(Acfile, line)) {

                getline(Acfile, line);
                if(line==obj.m_email) {
                    getline(Acfile, line);
                if(line==obj.m_password) {
                    cout << "User Login Successful" << endl;
                    system("clear");
                    obj.BookMenu();
                }
                else {
                    cout << "You entered the invalid password..!" << endl;
                    goto P;
                }
                break;
            }
        
            }
            if(line!=obj.m_email && Acfile.eof()) {
                cout << "Email is not correct..!" << endl;
                goto E;
            }
            }
            else
            cout << "unable to open file" << endl;
            Acfile.close(); 

        }

        void Run() {
            obj.DisplayTitle();
            obj.Menu();
            switch (obj.m_choice1)
            {
                case 1:
                    obj.LoginSignup();
                    break;
                case 2:
                    cout << "\033[3;43;30mThis feature will be added soon..!\033[0m" << endl;
                    cout << "\033[3;41;30mExiting..!\033[0m" ;
                    return;
                    break;
                case 3:
                    cout << "\033[3;41;30mExiting..!\033[0m" << endl ;
                    return;
                    break;
                default:
                    cout << "\033[3;41;30mInvalid choice..!\033[0m";
                    return;
                    break;
            }
            switch (obj.m_choice1)
            {
                case 1:
                    this->Login();
                    break;
                case 2:
                    obj.AccInfo();
                    this->SignUp();
                    break;
                case 3:
                    cout << "\033[3;41;30mExiting..!\033[0m";
                    return;
                    break;
                default:
                    cout << "\033[3;41;30mInvalid choice..!\033[0m";
                    return;
                    break;
            }
        }

};
