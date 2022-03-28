// Nic Wetzel
// May 6 2021
// Pokemon Card Inventory
// Program will display the entire list of Pokemon cards in a set by type. Allows user to search by type, add cards to a text file, display the cards entered, and shows how many cards are left to complete the set.

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;
// Function prototypes to display set list, search set by type, add cards to owned list, show cards owned, and show how many cards are left to collect.
void displaySetList(string[11][18], string[11]);
void searchByType(string[11][18], string[11]);
void addCard(string[79]);
void cardsOwned(string[79]);
void setCompletion(string[11][18], string[79]);

int main()
{
    // Variable for menu selection and arrays for set list, types, and cards owned.
    int choice;
    string pokemon[11][18];
    string types[11];
    string addedCards[79];
    
    cout << "***************************************" << endl;
    cout << "*" << setw(24) << "Pokemon TCG" << setw(14) << "*" << endl;
    cout << "*" << setw(27) << "Champions Path Set" << setw(11) << "*" << endl;
    cout << "***************************************" << endl;
    // Loop for menu selections and calls to each function depending one which selection is made.
    do
    {
        cout << "\n1. Display Set List" << endl;
        cout << "2. Search By Type" << endl;
        cout << "3. Add Pokemon Card" << endl;
        cout << "4. Display Cards Owned" << endl;
        cout << "5. Cards Left To Collect" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            displaySetList(pokemon, types);
        }
        else if (choice == 2)
        {
            searchByType(pokemon, types);
        }
        else if (choice == 3)
        {
            addCard(addedCards);
        }
        else if (choice == 4)
        {
            cardsOwned(addedCards);
        }
        else if (choice == 5)
        {
            setCompletion(pokemon, addedCards);
        }

    } while (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5);
    if (choice == 6)
    {
        return 0;
    }
}
// Function for displaying the entire set list.
void displaySetList(string pokemon[11][18], string types[11])
{
    // Opening files to display the types and names of Pokemon for the set.
    ifstream typesFile;
    ifstream pokemonFile;
    typesFile.open("ChampionsPathTypes.txt");
    pokemonFile.open("ChampionsPathPokemon.txt");
    cout << "Type" << setw(18) << "Pokemon" << endl;
    cout << endl;
    // Loop to read from the files and display the set list.
    for (int row = 0; row < 11; row++)
    {
        typesFile >> types[row];
        cout << left << setw(15) << types[row];
        for (int col = 0; col < 18; col++)
        {
            pokemonFile >> pokemon[row][col];
            cout << left << setw(16) << pokemon[row][col];
        }
        cout << endl;
    }
    // Closes both open files.
    typesFile.close();
    pokemonFile.close();
    cout << endl;
}
// Function to search the set list by Pokemon type.
void searchByType(string pokemon[11][18], string types[11])
{
    // Variable for menu choice for type to display.
    int choice;
    ifstream typesFile;
    ifstream pokemonFile;
    typesFile.open("ChampionsPathTypes.txt");
    pokemonFile.open("ChampionsPathPokemon.txt");
    cout << "Choose Type" << endl;
    cout << "\n1. Grass" << endl;
    cout << "2. Fire" << endl;
    cout << "3. Water" << endl;
    cout << "4. Psychic" << endl;
    cout << "5. Fighting" << endl;
    cout << "6. Dark" << endl;
    cout << "7. Steel" << endl;
    cout << "8. Normal" << endl;
    cout << "9. Trainer" << endl;
    cout << "10. Full Art" << endl;
    cout << "11. Secret Rare\n" << endl;
    cin >> choice;
    // Loops through the files and displays type and names of Pokemon depending on menu selection.
    if (choice == 1)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 0)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 0)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 2)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 1)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 1)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 3)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 2)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 2)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 4)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 3)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 3)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 5)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 4)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 4)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 6)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 5)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 5)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 7)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 6)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 6)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 8)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 7)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 7)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 9)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 8)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 8)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 10)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 9)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 9)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else if (choice == 11)
    {
        for (int row = 0; row < 11; row++)
        {
            typesFile >> types[row];
            if (row == 10)
            {
                cout << types[row];
            }
            for (int col = 0; col < 18; col++)
            {
                pokemonFile >> pokemon[row][col];
                if (row == 10)
                {
                    cout << "  " << pokemon[row][col];
                }
            }
        }
    }
    else
    {
        return;
    }
    // Closes Files.
          typesFile.close();
          pokemonFile.close();
          cout << endl;
    
}
// Function to add cards to a text file.
void addCard(string addedCards[79])
{
    // Variable to store name of Pokemon added and variable for choice to add more cards or not.
    string pokemonAdded;
    char choice = 'y';
    // Opens file to write to.
    ofstream pokemonCollection;
    pokemonCollection.open("ChampionsPathCollection.txt", fstream::app);
    // Loop to get card names and to continue adding until user specifies no.
    do
    {
        cout << "\nName of Pokemon card to be added: ";
        cin >> pokemonAdded;
        pokemonCollection << pokemonAdded << " ";
        cout << "\nWould you like to add another card? ";
        cin >> choice;
    } while (choice == 'y');
    // Closes file.
    pokemonCollection.close();
    cout << endl;
}
// Function to display the cards owned that were added to a text file.
void cardsOwned(string addedCards[79])
{
    // Opens file that holds cards entered by user.
    ifstream pokemonCollection;
    pokemonCollection.open("ChampionsPathCollection.txt");
    // Loop to show cards collected and entered by user.
    for (int row = 0; row < 79; row++)
    {
        cout << " ";
        pokemonCollection >> addedCards[row];
        cout << left << setw(12) << addedCards[row];
    }
    // Closes file.
    cout << endl;
    pokemonCollection.close();
    cout << endl;
}
// Function to show how many cards are owned from the set and to display remaining amount to collect.
void setCompletion(string pokemon[11][18], string addedCards[79])
{
    // Variable to hold the amount of cards owned.
    int total = -1;
    char ch;
    // Opens collected Pokemon file.
    ifstream ownedPokemonFile;
    ownedPokemonFile.open("ChampionsPathCollection.txt");
    while (ownedPokemonFile)
    {
        ownedPokemonFile.get(ch);
        if (ch == ' ' || ch == '\n')
        {
            total++;
        }
    }
    // Displays how many cards owned and the amount left to collect in the set.
    cout << "You have " << total << " cards from this set." << endl;
    cout << "There are " << fdim(79, total) << " cards left to collect in the set." << endl;
    // Closes the file.
    ownedPokemonFile.close();
}