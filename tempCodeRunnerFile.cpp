#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string pname;
    long long phone;

public:
    void setName() {
        cout << "\nEnter Your Name: ";
        cin.ignore();
        getline(cin, pname);
    }

    void setPhone() {
        cout << "\nEnter your Phone Number: ";
        cin >> phone;
    }

    string showName() {
        return pname;
    }

    long long showPhone() {
        return phone;
    }
};

class Food {
public:
    string fname;
    int price;
    int quantity;
    void getQuantity() {
        cout << "\nEnter the quantity: ";
        cin >> quantity;
    }
};

class Soup : public Food {
public:
    Soup(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Starters : public Food {
public:
    Starters(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Sabzi : public Food {
public:
    Sabzi(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Paneer : public Food {
public:
    Paneer(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Daal : public Food {
public:
    Daal(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Rice : public Food {
public:
    Rice(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Tandoor : public Food {
public:
    Tandoor(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class PR : public Food {
public:
    PR(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Beverages : public Food {
public:
    Beverages(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Sweets : public Food {
public:
    Sweets(const string& s, int p) {
        fname = s;
        price = p;
    }
};

int main() {
    string method;
    char op1, fop, can;
    Person p1;
    int num, i, total=0;
    string head = "___  ___              _ ___  ___        _        \n"
                  "|  \\/  |             | ||  \\/  |       | |       \n"
                  "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
                  "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
                  "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
                  "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
                  "                Fine Dine-In                      \n";

    cout << head;
    cout << "\n \n";
    cout << "1. Order Food\n\n";
    cout << "2. Cancel Order\n\n";
    cout << "3. About Us\n\n";
    cout << "4. Exit\n\n";
    cout << "\nChoose your Option: ";
    cin >> num;

    if (num == 1) {
        system("cls");
        cout << head << "\n";
        p1.setname();
        p1.setphone();
        goto menu;
    }
    else if(num== 2){
        
    }

     else if (num == 3) {
        system("cls");
        cout << head << "\n";
        cout << "About Us";
        cout << "\nThis project is made by Dhruv Jaradi and Akshat Mistry under the guidance of Dr. Maulika Patel.";

    }
    else if (num == 4) {
        exit(0);
    }

menu:
    system("cls");
    cout << head;
    cout << "\nWelcome to our Dine-In, " << p1.showname() << "!\n\n";
    cout << "--------Food Menu--------\n\n";
    cout << "1) Soup\n";
    cout << "2) Starters\n";
    cout << "3) Sabzi Mandi Se\n";
    cout << "4) Paneer ki Lizzat\n";
    cout << "5) Daal\n";
    cout << "6) Khusbu-e-Basmati\n";
    cout << "7) Tandoor ke Zaike\n";
    cout << "8) Papad and Raita\n";
    cout << "9) Beverages\n";
    cout << "10) Sweets\n\n";
    cout << "Press 0 to return.\n\n";
    cout << "Enter your Option: ";
    cin >> i;

    if(i == 0){
        system("cls");
        cout << head;
        cout << "\n \n";
    cout << "1. Order Food\n\n";
    cout << "2. Cancel Order\n\n";
    cout << "3. About Us\n\n";
    cout << "4. Exit\n\n";
    cout << "\nChoose your Option: ";
    cin >> num;
    }

    if (i == 1) {
        system("cls");
        cout << head;

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Cream of Tomato Soup\t\t 100\n";
        cout << "2. Veg Sweet Corn Soup\t\t 110\n";
        cout << "3. Hot & Sour Soup\t\t 120\n";
        cout << "4. Manchow Soup\t\t\t 140\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            Soup s1("Cream of Tomato Soup", 100);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t   " << s1.quantity << "\t\t                 " << s1.price << endl;
                outputFile.close();
                total = total + 100 * s1.quantity;
            }
        }
        if (op1 == '2') {
            Soup s2("Veg Sweet Corn Soup", 110);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 100 * s2.quantity;
            }
        }
        if (op1 == '3') {
            Soup s3("Hot & Sour Soup", 120);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 100 * s3.quantity;
             }
        }
        if (op1 == '4') {
            Soup s4("Manchow Soup", 140);
            s4.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 100 * s4.quantity;
            }
        }

        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 2) {
        st:
        system("cls");
        cout << head;

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Hara Bhara Kabab\t\t 160\n";
        cout << "2. Veg Manchurian (Dry/Gravy)\t 170\n";
        cout << "3. Veg Spring Roll\t\t 170\n";
        cout << "4. Paneer Tikka\t\t\t 170\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            Starters s1("Hara Bhara Kabab", 160);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 160 * s1.quantity;
            }
        }
        if (op1 == '2') {
            Starters s2("Veg Manchurian (Dry)", 170);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 170 * s2.quantity;
            }
        }
        if (op1 == '3') {
            Starters s3("Veg Spring Roll", 170);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 170 * s3.quantity;
             }
        }
        if (op1 == '4') {
            Starters s4("Paneer Tikka", 170);
            s4.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 170 * s4.quantity;
            }
        }

        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 3) {
        system("cls");
        cout << "___  ___              _ ___  ___        _        \n"
             << "|  \\/  |             | ||  \\/  |       | |       \n"
             << "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
             << "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
             << "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
             << "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
             << "                Fine Dine-In                      \n";

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Veg. Hungama\t\t\t 190\n";
        cout << "2. Veg. Handi Masala\t\t 190\n";
        cout << "3. Veg. Jaipuri\t\t\t 190\n";
        cout << "4. Veg. Tawa Masala\t\t 190\n";
        cout << "5. Veg. Makhanwala\t\t 195\n";
        cout << "6. Mushroom Masala\t\t 200\n";


        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            Sabzi s1("Veg. Hungama", 190);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 190 * s1.quantity;
            }
        }
        if (op1 == '2') {
            Sabzi s2("Veg. Handi Masala", 190);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t    " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 190 * s2.quantity;
            }
        }
        if (op1 == '3') {
            Sabzi s3("Veg. Jaipuri", 190);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 190 * s3.quantity;
             }
        }
        if (op1 == '4') {
            Sabzi s4("Veg. Tawa Masala", 190);
            s4.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 190 * s4.quantity;
            }
        }
                    if (op1 == '5') {
            Sabzi s5("Veg. Makhanwala", 195);
            s5.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s5.fname << "\t\t   " << s5.quantity << "\t\t\t         " << s5.price << endl;
            outputFile.close();
            total = total + 195 * s5.quantity;
             }
        }
                    if (op1 == '6') {
            Sabzi s6("Mushroom Masala", 200);
            s6.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s6.fname << "\t\t   " << s6.quantity << "\t\t\t         " << s6.price << endl;
            outputFile.close();
            total = total + 200 * s6.quantity;
            }
        }
        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 4) {
        system("cls");
        cout << "___  ___              _ ___  ___        _        \n"
             << "|  \\/  |             | ||  \\/  |       | |       \n"
             << "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
             << "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
             << "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
             << "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
             << "                Fine Dine-In                      \n";

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Palak Paneer\t\t\t 180\n";
        cout << "2. Paneer Chatpata\t\t 200\n";
        cout << "3. Paneer Toofani\t\t 200\n";
        cout << "4. Paneer Kolhapuri\t\t 220\n";
        cout << "5. Paneer Butter Masala\t\t 220\n";
        cout << "6. Paneer Angara\t\t 240\n";


        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            Paneer  s1("Palak Paneer", 180);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 180 * s1.quantity;
            }
        }
        if (op1 == '2') {
            Paneer  s2(" Paneer Chatpata", 200);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 200 * s2.quantity;
            }
        }
        if (op1 == '3') {
            Paneer  s3("Paneer Toofani", 200);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 200 * s3.quantity;
             }
        }
        if (op1 == '4') {
            Paneer  s4("Paneer Kolhapuri", 220);
            s4.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 220 * s4.quantity;
            }
        }
            if (op1 == '5') {
            Paneer  s5("Paneer Butter Masala", 220);
            s5.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s5.fname << "\t   " << s5.quantity << "\t\t\t         " << s5.price << endl;
            outputFile.close();
            total = total + 220 * s5.quantity;
             }
        }
            if (op1 == '6') {
            Paneer  s6("Paneer Angara", 240);
            s6.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s6.fname << "\t\t   " << s6.quantity << "\t\t\t         " << s6.price << endl;
            outputFile.close();
            total = total + 240 * s6.quantity;
            }
        }
        
        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 5) {
        system("cls");
        cout << "___  ___              _ ___  ___        _        \n"
             << "|  \\/  |             | ||  \\/  |       | |       \n"
             << "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
             << "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
             << "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
             << "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
             << "                Fine Dine-In                      \n";

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Dal Fry\t\t\t 120\n";
        cout << "2. Dal Tadka\t\t\t 140\n";
        cout << "3. Dal Makhani\t\t\t 160\n";
        

        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            Daal  s1("Dal Fry", 120);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
            }
        }
        if (op1 == '2') {
            Daal  s2("Dal Tadka", 140);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            }
        }
        if (op1 == '3') {
            Daal  s3("Dal Makhani", 160);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
             }
        }
       

        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 6) {
        system("cls");
        cout << "___  ___              _ ___  ___        _        \n"
             << "|  \\/  |             | ||  \\/  |       | |       \n"
             << "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
             << "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
             << "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
             << "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
             << "                Fine Dine-In                      \n";

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Plain Rice\t\t\t 120\n";
        cout << "2. Jeera Rice\t\t\t 130\n";
        cout << "3. Dum Biryani\t\t\t 150\n";
        cout << "4. Hyderabadi Biryani\t\t 170\n";
       

        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            Rice s1("Plain Rice", 120);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 120 * s1.quantity;
            }
        }
        if (op1 == '2') {
            Rice s2("Jeera Rice", 130);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
           outputFile.close();
            total = total + 130 * s2.quantity;
            }
        }
        if (op1 == '3') {
            Rice s3("Dum Biryani", 150);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
             total = total + 150 * s3.quantity;
             }
        }
        if (op1 == '4') {
            Rice s4("Hyderabadi Biryani", 170);
            s4.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
             total = total + 170 * s4.quantity;
            }
        }
 
        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 7) {
        system("cls");
        cout << "___  ___              _ ___  ___        _        \n"
             << "|  \\/  |             | ||  \\/  |       | |       \n"
             << "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
             << "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
             << "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
             << "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
             << "                Fine Dine-In                      \n";

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Roti\t\t\t\t 20\n";
        cout << "2. Plain Paratha\t\t 30\n";
        cout << "3. Plain Naan\t\t\t 35\n";
        cout << "4. Missi Roti\t\t\t 40\n";
       

        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            Tandoor s1("Roti", 20);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                 total = total + 20 * s1.quantity;
            }
        }
        if (op1 == '2') {
            Tandoor s2("Plain Paratha", 30);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
             total = total + 30 * s2.quantity;
            }
        }
        if (op1 == '3') {
            Tandoor s3("Plain Naan", 35);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
             total = total + 35 * s3.quantity;
             }
        }
        if (op1 == '4') {
            Tandoor s4("Missi Roti", 40);
            s4.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
             total = total + 40 * s4.quantity;
            }
        }
 
        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 8) {
        system("cls");
        cout << "___  ___              _ ___  ___        _        \n"
             << "|  \\/  |             | ||  \\/  |       | |       \n"
             << "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
             << "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
             << "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
             << "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
             << "                Fine Dine-In                      \n";

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Roasted Papad\t\t 25\n";
        cout << "2. Masala Papad\t\t\t 35\n";
        cout << "3. Veg. Raita\t\t\t 60\n";
        cout << "4. Mix Fruit Raita\t\t 80\n";
       

        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            PR s1("Roasted Papad", 25);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                 total = total + 25 * s1.quantity;
            }
        }
        if (op1 == '2') {
            PR s2("Masala Papad", 35);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 35 * s2.quantity;
            }
        }
        if (op1 == '3') {
            PR s3("Veg. Raita", 60);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 60 * s3.quantity;
             }
        }
        if (op1 == '4') {
            PR s4("Mix Fruit Raita", 80);
            s4.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 80 * s4.quantity;
            }
        }
 
        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 9) {
        system("cls");
        cout << "___  ___              _ ___  ___        _        \n"
             << "|  \\/  |             | ||  \\/  |       | |       \n"
             << "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
             << "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
             << "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
             << "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
             << "                Fine Dine-In                      \n";

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Mineral Water\t\t 20\n";
        cout << "2. Butter Milk\t\t\t 30\n";
        cout << "3. Cold Drinks\t\t\t 40\n";
        cout << "4. Sweet/Salt Lassi\t\t 60\n";
       

        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == '1') {
            Beverages s1("Mineral Water", 20);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 20 * s1.quantity;
            }
        }
        if (op1 == '2') {
            Beverages s2("Butter Milk", 30);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 30 * s2.quantity;
            }
        }
        if (op1 == '3') {
            Beverages s3("Cold Drinks", 40);
            s3.getquan();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 40 * s3.quantity;
             }
        }
        if (op1 == '4') {
            Beverages s4("Sweet/Salt Lassi", 60);
            s4.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 60 * s4.quantity;
            }
        }
 
        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 10) {
        system("cls");
        cout << "___  ___              _ ___  ___        _        \n"
             << "|  \\/  |             | ||  \\/  |       | |       \n"
             << "| .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
             << "| |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
             << "| |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
             << "\\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
             << "                Fine Dine-In                      \n";

        cout << "\nItems\t\t\t\tPrice\n";
        cout << "1. Gulab Jamun\t\t\t 60\n";
        cout << "2. Kala Jamun\t\t\t 70\n";
        cout << "\n0.Return to Main Menu\n";
        

        cout << "\nChoose your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }
        else if (op1 == '1') {
            Sweets s1("Gulab Jamun", 60);
            s1.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + (60*s1.quantity);
            }
        }
        else if (op1 == '2') {
            Sweets s2("Kala Jamun", 70);
            s2.getquan();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 70*(s2.quantity);

            }
        }

        
 
        cout << "\nDo you want to order anything else? (Y/N)?\n";
        cout << "\nChoose your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

checkout:
system("cls");
cout << head;
cout <<"\n";
cout << "How do you want to pay the bill?\n";
cout << "\n1) Cash\n\n2) UPI\n";
cout <<"\n0)Return to Main Menu\n";
cout << "\nChoose your Option: ";
cin >> fop;
if(fop == '1')
{
    method = "Cash";
    goto bill;
}
else if(fop == '2')
{
    method = "UPI";
    goto bill;
}
else if(fop =='0')
{
    system("cls");
    goto menu;
}
bill: 
string line;
    system("cls");
    cout << "Items \t\t\tQuantity \t\t\tPrice\n\n";
    ifstream inputFile("order.txt");
        if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
    }

    cout << "-------------------------------------------------------------\n";
    cout << "\t\tTotal :\t\t" << total;
    return 0;
}