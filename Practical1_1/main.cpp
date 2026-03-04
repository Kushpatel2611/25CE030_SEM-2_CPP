#include "BankAccount.h"

using namespace std;

int main() {
    BankAccount user1("ID01", "Alice", 500);
    BankAccount user2("ID02", "Bob", 300);

    user1.loadMoney(100);
    user1.transferMoney(user2, 200);

    user2.toggleFreeze();
    user1.transferMoney(user2, 50);

    user1.displayDetails();
    user1.displayHistory();

    return 0;
}