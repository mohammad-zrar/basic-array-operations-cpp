#include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;

const int size = 25;


/*---- Menu ----*/
void menu() {
    cout << endl
         << "--- Menu ---" << endl
         << "Press P to print" << endl
         << "Press A to add" << endl
         << "D to delete" << endl
         << "S to search" << endl
         << "U to update" << endl
         << "press E to exit" << endl
         << "Press C to clear the screen" << endl
         << "----------" << endl;
}
/*---- ---- ----*/

/*---- Print ----*/
void print(int arr[], int& n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "----------" << endl;

}
/*---- ---- ----*/

/*---- Add ----*/
void add_element(int arr[], int& n) {
    int index, new_element;
    cout << "Enter new element: ";
    cin >> new_element;

    cout << endl;

    cout << "Enter index: ";
    cin >> index;

    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = new_element;
    n++;
    cout << endl << "----------" << endl;
}
/*---- ---- ----*/

/*---- Delete ----*/
int delete_element(int arr[], int& n) {
    int index, deleted_element;

    cout << "Enter index to delete the element: ";
    cin >> index;
    deleted_element = arr[index];
    n--;
    for (int i = index; i <= n - 1; i++) {
        arr[i] = arr[i + 1];
    }


    cout << endl << "----------" << endl;
    return deleted_element;
}
/*---- ---- ----*/

/*---- Search ----*/
int search_element(int arr[], int& n) {
    int index, element_value;
    cout << "Enter index: ";
    cin >> index;
    if (index < n) {
        element_value = arr[index];
        cout << "The element of index " << index << " is " << element_value;
    }
    else {
        cout << "Not found, the index is out of range";
    }


    cout << endl << "----------" << endl;
    return element_value;

}
/*---- ---- ----*/

/*---- Update ----*/
int update_element(int arr[], int& n) {
    int index, new_value = 0;

    cout << "Enter the specific index to update: ";
    cin >> index;
    cout << "Enter value to update: ";
    cin >> new_value;

    if (index <= n) {
        arr[index] = new_value;
    }
    cout << endl << "----------" << endl;
    return arr[index];

}
/*---- ---- ----*/

int main()
{

    /* START */

    /*---- Declare ----*/
    int arr[size], n = 0;
    char d;
    bool stop = false;
    /*---- ---- ----*/

    /*---- Insert data to array ----*/
    cout << "Enter size of the array: ";
    cin >> n;
    cout << endl << "Enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    /*---- ---- ----*/

    menu();
    while (stop != true) {
        cout << ">> ";
        cin >> d;
        switch (d) {
        case 'p': case 'P':
            print(arr, n);
            break;

        case 'a': case 'A':
            add_element(arr, n);
            break;

        case 'd': case 'D':
            delete_element(arr, n);
            break;

        case 's': case 'S':
            search_element(arr, n);
            break;

        case 'u': case 'U':
            update_element(arr, n);
            break;

        case 'm': case 'M':
            menu();
            break;

        case 'e': case 'E':
            stop = true;
            break;

        case 'c': case 'C':
            system("CLS");
            cout << "press m to show menu" << endl;
            break;


        default:
            continue;
        }

    }

    cout << endl << "Thank you, the program is closed now" << endl;
    /* system("pause"); */
    system("pause>0");

    return 0;
}
