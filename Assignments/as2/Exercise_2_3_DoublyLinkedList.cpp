//doubly linked list

#include <iostream>
#include "DList.h"

using namespace std;


int main(int argc, char* argv[])
{
  DList queue;
  initializeDList(queue);

  //insert 5 values
  for (int i = 1; i <= 5; i++) {
    cout << "put: " << 10 * i << endl;
    put(queue, 10 * i);
  }

  //remove 3 values and print them to console
  for (int j = 1; j <= 3; j++) {
    int value;
    if (get(queue, value))
       cout << "     get: " << value << endl;
  }

 // cout << "Laenge: " << dlistLength(queue) << endl;
  
  //insert 5 values 
  for (int i = 6; i <= 10; i++) {
    cout << "put: " << 10 * i << endl;
    put(queue, 10 * i);
  }

 // cout << "Laenge: " << dlistLength(queue) << endl;

  //remove all values and print them
  while(!isEmpty(queue)) {
    int value;
    get(queue, value);
    cout << "     get: " << value << endl;
  }

  cin.sync(); cin.get();
  return 0;
}

// #include <iostream>
// #include <cmath>
// #include "DList.h"
// int main()
// {
//     DList *head = new DList;
//     int temp;
//     initializeDList(*head);
//     std::cout<<isEmpty(*head);
//     put(*head, 1);
//     put(*head, 2);
//     put(*head, 3);
//     put(*head, 1);
//     std::cout<<isEmpty(*head);
//     get(*head,temp);
//     get(*head,temp);
//     get(*head,temp);
//     get(*head,temp);
//     get(*head,temp);
//     std::cout<<isEmpty(*head);
//     return 0;
// }