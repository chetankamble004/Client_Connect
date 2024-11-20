Client Service Management System

This project is a Client Service Management System written in C++ that allows you to manage client details, including their ID, Name, Service, and Budget. This system provides a menu-driven approach to add, update, delete, and view client records, making it useful for small businesses, service-based companies, or anyone who needs to maintain client information.

Features:

Add Clients: Allows users to add one or more client records to the system by entering their details such as ID, name, service, and budget.
Update Clients: Users can update a client's service or budget information by specifying the client ID and the field they want to update.
Delete Clients: Allows users to delete a client's information based on the client ID.
Show Clients: Displays all the stored client details, making it easy to review and manage the client records.
Menu-based Navigation: The system is interactive with a clear menu for the user to choose different actions.
Dynamic Record Management: The program dynamically handles multiple client records, adjusting the list size based on operations performed (like adding or deleting).

Files in the Project:

client.cpp: This is the main file where all client operations are performed. It defines a client class that includes methods for setting and getting client information. The system interacts with users through a command-line interface (CLI), prompting them for input based on various operations (Add, Update, Delete, Show).

Core Components:

Client Class:

This class contains attributes such as id, name, service, and budget to store the client's information.
Methods:
set_client_info(int i, string n, string s, float b): Sets the client's information.
get_client_info(): Displays the client's information.

Main Function:

The main() function provides a loop with a menu of options (Add client, Update client, Delete client, Show client, Exit).
User input is handled in this function to trigger corresponding actions for managing clients.
A dynamic array (all_clients[]) is used to store all client objects.
Functionality Details:

Add Clients: The program first asks how many clients to add, then it iterates over that number and prompts the user for details of each client, storing the information in an array of client objects.

Update Clients: The user can choose to update either a client's budget or service. The program prompts for the client ID and updates the selected field accordingly.

Delete Clients: Clients can be removed by specifying the client ID. The system deletes the client and shifts all remaining client records accordingly to ensure data integrity.

Show Clients: The program will list all clients stored in the system, displaying their details in a user-friendly format.
