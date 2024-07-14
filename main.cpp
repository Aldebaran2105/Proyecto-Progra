#include "include/MovieDatabase.h"
#include "include/UserInterface.h"
#include <iostream>

using namespace std;

int main() {
    MovieDatabase db;
    db.loadFromCSV("mpst_full_data.csv");

    UserInterface ui(db);
    ui.run();

    return 0;
}