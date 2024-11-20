#include<iostream>
using namespace std;

class client
{
    public:

    int id;
    string name;
    string service;
    float budget;
    //set info
    void set_client_info(int i,string n,string s,float b)
    {
        id = i;
        name = n;
        service = s;
        budget = b;
    }
    //get info
    void get_client_info()
    {
        cout << "\nID : " << id << endl;
        cout << "name : " << name << endl;
        cout << "Service : " << service << endl;
        cout << "Budget : " << budget << endl;
    }
};

int main()
{
    int i;
    string n;
    string s;
    float b;
    int no_of_clients;
    client all_clients[100];

    int ch = 0;
    while(ch!=5)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Welcome to client service system ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\nENTER CHOICE : \n1.Add client\n2.Update client\n3.Delete client\n4.Show client\n5.exit" << endl;
        cout << "Your choice : ";
        cin >> ch;
        switch(ch)
        {
            case 1:
                {
                    cout << "\nAdd client : " << endl;
                    cout << "Enter no. of clients to be added : ";
                    cin >> no_of_clients;

                    for(int index=0; index<no_of_clients;index++)
                    {
                        cout << "\nEnter clients ID : ";
                        cin >> i;
                        cout << "Enter clients Name : ";
                        cin >> n;
                        cout << "Enter clients Service : ";

                        cin.ignore();
                        getline(cin,s);
                        
                        cout << "Enter clients Budget : ";
                        cin >> b;
                        
                        client c;
                        c.set_client_info(i,n,s,b);
                        all_clients[index] = c;
                       
                        cout << "\n~~~~~~~~~ Client Added Successfully ~~~~~~~~~" << endl;

                    }
                    break;
                }

            case 2:
                {
                    int chs;
                    cout << "\nUpdate Client : " << endl;

                    cout << "Enter choice : \n1.budget update\n2.service update\n";
                    cin >> chs;
                   
                   if(chs==1)
                   {
                    cout << "Enter client ID to update the budget:";
                    cin >> i;

                    for(int j=0; j<no_of_clients;j++)
                    {
                        if(all_clients[j].id ==i)
                            {
                                cout << "Enter updated client budget : ";
                                cin >> b;
                                all_clients[j].budget = b;
                                cout << "\n~~~~~~~~~ Client Budget Updated Successfully ~~~~~~~~~" << endl;
                            }
                    }
                   }
                  else if(chs==2)
                   {
                    cout << "Enter client ID to update the sevice:";
                    cin >> s;

                    for(int m=0; m<no_of_clients;m++)
                    {
                        if(all_clients[m].id ==i)
                            {
                                cout << "Enter updated client service : ";
                                cin >> s;
                                all_clients[m].service = s;
                                cout << "\n~~~~~~~~~ Client Service Updated Successfully ~~~~~~~~~" << endl;
                            }
                    }
                   }
                   else{
                    cout << "invalid choice...!!!"<< endl;
                   }
                    
                    break;
                  
                }

            case 3:
                {
                    cout << "\nDeleting client : " << endl;
                    int cid;
                    cout << "client ID to be removed : ";
                    cin >> cid;

                    int j;
                    for(j=0;j<no_of_clients;j++)
                    {
                        if(all_clients[j].id == cid)
                        {
                            break;
                        }
                    }

                    for(int k=j;k<no_of_clients;k++)
                    {
                        all_clients[k]=all_clients[k+1];
                    }

                    no_of_clients = no_of_clients-1;
                    
                    cout << "\n~~~~~~~~~ Client Deleted Successfully ~~~~~~~~~" << endl;
                    break;
                }
               
            case 4:
                {
                    cout << "\nShow Clients : " << endl;
                    for(int j=0; j<no_of_clients;j++)
                    {
                        all_clients[j].get_client_info();
                    }
                    
                    cout << "\n~~~~~~~~~ Client Showed Successfully ~~~~~~~~~" << endl;
                    break;
                }
                
            case 5:
                {
                    cout << "\nExiting Successfully...\n" << endl;
                    break;
                }

                default:
                {
                    cout << "Invalid choice...!!!" << endl;
                    break;
                }
           }
        }
         return 0;        
    }