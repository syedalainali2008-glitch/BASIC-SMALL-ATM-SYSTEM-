#include<iostream>
using namespace std;
int main(){
    
    // I WANT TO MAKE AN ATM SYSTEM
    int bank_balance = 90000 ;
    cout << "GET IN YOUR CARD AND ENTER :";
    string enter ;
    cin >> enter ;
    
    if (enter == "ENTER"){
        for(int i = 0 ; i <= 5 ; i++ ){
        cout << "VERFIYING...." << endl ;
    }}
    cout << "ENTER YOUR PIN :" ;
    string pin ;
    cin >> pin ;
    if (pin == "9023"){
        for(int x = 0 ; x < 4 ; x++){
            cout << "VERFIYING......"<< endl ;}
        cout << "ENTER WHAT YOU WANT :" << "\n1. CHECK BALANCE\n2.WITHDREW\n3.DEPOSIT\n4.TRANSFER" << endl ;
        cout << "ENTER HERE :" ;
        string user_enter ;
        cin.ignore();
        getline(cin,user_enter);
        if (user_enter == "CHECK BALANCE" || user_enter == "BANK BALANCE"){
            for(int i = 0 ; i <= 4 ; i++){
                cout << "PROCESSING...." << endl ;
            }
            
            cout << "CHECK BALANCE :" << bank_balance << endl ;
            
        }
            
        
        else if (user_enter == "WITHDREW"){
            for( int i = 0 ; i <= 5 ; i++){
                cout << "PROCESSING...." << endl ;}
            int enter_amount ;
            cout << "ENTER HOW MUCH CASH YOU WANT :" ;
            cin >> enter_amount ;
            if (enter_amount < bank_balance){
                for(int i = 1 ;i < 5 ; i++ ){
                    cout << "CHECKING BALANCE ......" << endl ;
                }
                cout << "YES YOU HAVE VALID BALANCE \n";
                for(int i = 0 ; i <= 5;i++){
                    cout << "CHECKING MACHINE HAVE BALANCE....." << endl ;
                }
                cout << "YES BALANCE HAVE " << endl;
                for(int i = 1 ; i <= 5;i++){
                    cout << "PROCESSING..." << endl ;
                }for(int i = 0 ; i <= 4 ; i++){
                    cout << "CASH COMING...." << endl ;
                    
                }
                cout << "YOUR WITHDREW AMOUNT :" << (enter_amount) << endl ;
                cout << "YOUR ACCOUNT AFTER WITHDREW :" << (bank_balance - enter_amount) << endl ;
                
            }
            else if (enter_amount > bank_balance || enter_amount == bank_balance ){
                cout << "SORRY YOU HAVE INVALID BALANCE :" << endl ;
                
            }
                
        } else if (user_enter == "DEPOSIT"){
            cout << "WHICH ONE OPTION YOU WILL SELECT :" << endl ;
            cout << "1. CHEQUE" << endl ;
            cout << "2. CASH" << endl ;
            string enter ;
            cout << "ENTER HERE :";
            cin >> enter ;
            if (enter == "CASH"){
                cout << "ENTER HOW MUCH CASH WILL YOU DEPOSIT :" ;
                int deposit_cash ;
                cin >> deposit_cash ;
                for(int i = 0 ; i <= 5 ; i++){
                    cout << "CHECKING CASH....." << endl ;
                    
                }
                cout << "CASH CLEAR :" << endl ;
                for(int i = 0 ; i <= 5 ; i++){
                    cout << "PROCESSING...." << endl ;
                }for(int n = 1 ; n <= 4 ; n++){
                    cout << "CASH ARE COMING INTO YOUR ACCOUNT....." << endl ;
                }
                cout << "CASH SUCCESSFULLY NOW IN YOUR ACCOUNT ." << endl ;
                
            cout << "BANK BALANCE AFTER DEPOSIT :" << (bank_balance + deposit_cash) << endl ;
                
            }
            else if (enter == "CHEQUE"){
                cout << "ENTER HOW MUCH CASH WILL YOU DEPOSIT :" ;
                int deposit_cash ;
                cin >> deposit_cash ;
                for(int i = 0 ; i <= 5 ; i++){
                    cout << "PROCESSING...." << endl ;
                }for(int n = 1 ; n <= 4 ; n++){
                    cout << "CASH ARE COMING INTO YOUR ACCOUNT....." << endl ;
                }
            cout << "CASH SUCCESSFULLY NOW IN YOUR ACCOUNT ." << endl ;
            cout << "BANK BALANCE AFTER DEPOSIT :" << (bank_balance + deposit_cash) << endl ;
            }
        }else if (user_enter == "TRANSFER"){
            cout << "ENTER HOW MUCH MONEY YOU WANT TO TRANSFER :";
            int transfer_money ;
            cin >> transfer_money ;
            cout << "ENTER NAME WHICH ONE TRANSFER :";
            string name ;
            cin.ignore();
            getline(cin,name);
            for(int i = 0 ; i <= 5 ; i++){
                cout << "TRANSFERING TO "<< name << "....." << endl ;
            }
            cout << "TRANSFER SUCCESSFULLY DONE!" << endl ;
        }
    }
    else if (pin != "9023" ){
        string enter_again ;
        cout << "TRY AGAIN : ";
        cin >> enter_again ;
        if (enter_again != "9023"){
            cout << "TRY AGAIN :" ;
            string enter_again ;
            cin >> enter_again ;
            if (enter_again != "9023"){
                cout << "ACCOUNT BLOKED." << endl ;
                cout << "ERROR." << endl ;
            }
            
            
        }
    }
}
