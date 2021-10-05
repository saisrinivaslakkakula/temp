#include "stock.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    //stock_linkedlist myll;
    stockNodeStruct *head = new stockNodeStruct();
    stockNodeStruct *current = new stockNodeStruct();
    head = current;
    fstream stocksFile;
    stocksFile.open("/Users/saisrinivaslakkakula/CLionProjects/temp/stock_data.txt",ios::in);
    if (stocksFile.is_open()){
        string line;
        while(getline(stocksFile, line)){

            /*
             * write a function to split the line into array of words. there are plenty in the internet to do so.
             * check if array size is 3 or not if not use continue to skip the current line
             * if  yes use this line to replace the below line
             * consider the array of words stored in an array/vector called words. then,
             * s->setstock(words[0],stoi(words[1],stoi(words[2]);
             * rest is same and you can write the code to access the list from by passing head address
             * something like printList(head);
             * You node is basically a struct with class as data member. if you make class data members as public
             * then you can access them by something like this nodeaddress->stk.cost
             */
            stock *s = new stock();
            s->setstock("aa",4,5); // replace this line with above mentioned line
            stockNodeStruct *stockNode = new stockNodeStruct();
            stockNode->stk = *s;
            stockNode->next = nullptr;
            current->next = stockNode;
            current = stockNode;
        }
        stocksFile.close();
    }

    ifstream input_filename("stock_data.txt");
    string line;
        while (getline(input_filename,line))
        {
            cout << line;
            /*string symbol= "";
            string cost ="";
            string n_shares="";
            int n =line.length();
            int i=0;

            while (line[i]!=' ')
            {
                symbol += line[i];
                i++;
            }
            i++;
            while(line[i]!=' ')
            {
                cost+= line[i];
                i++;
            }
            while(i<n)
            {
                n_shares +=  line[i];
                i++;
            }
            int int_cost, int_n_shares;
            int_cost=stoi(cost);
            int_n_shares=stoi(n_shares);
            stock s(symbol,int_cost,int_n_shares);
            myll.add_stock(s);*/

        }
        /*cout<<"A linked list is populated with some stocks data.Use the following menu to perform additional operations." <<endl;
        int menu_index=999;
        while(menu_index!=5)
        {
            cout<<"Enter a single digit option number to perform following additional operations:" <<endl;
            cout<<"1)Print the linked list" <<endl;
            cout<<"2)Add a stock to the linked list" <<endl;
            cout<<"3) Print the middle stock"<<endl;
            cout<<"4)Split the linked list in two different linked lists"<<endl;
            cout<<"5)Exit"<<endl;
            cin>>menu_index;
            if(menu_index ==1) myll.printlist();
            if(menu_index ==2)
            {
                string sym;
                cout << "Enter symbol:";
                cin>>sym;
                int cost,n_shares;
                cout<<"Enter cost:";
                cin>>cost;
                cout<<"Enter number of shares:";
                cin>>n_shares;
                stock s(sym,cost,n_shares);
                myll.add_stock(s);
                cout<<"The stock has been added to the linked list."<<endl;
            }
            if(menu_index == 3)myll.middle();
            if(menu_index == 4)myll.split();
        }*/
        return 0;



}
