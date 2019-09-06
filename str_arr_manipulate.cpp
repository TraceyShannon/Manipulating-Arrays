#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 20

int function(char str[]);
int int_length(int num[]);
int str_length(string str_arr[]);
int str_cmp(string str_1, string str_2);

void change_str(string str[]);
void delete_str(string str[]);

// ==== BEGIN MAIN FUNCTION ==== //
int main(int argc, char const *argv[]) {

  // ==== THIS IS FOR INTEGERS ==== //
  int my_nums[10] = {1, 2, 3, 4, 5};
  int my_nums_2[MAX] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6};
  my_nums[6] = 12;

  // for (int i = 0; i < int_length(my_nums); i++) {
  //   if (my_nums[i]) {
  //     cout << my_nums[i] << '\n';
  //   }
  // }

  // ==== THIS IS FOR STRINGS ==== //
  string my_string[MAX] = { "string1", "string2", "string3", "string4", "string5", "string6", "string7" };
  int z = str_length(my_string);



  // for (int i = 0; i < str_length(my_string); i++) {
  //   cout << my_string[i] << '\n';
  // }

  // change_str(my_string);
  delete_str(my_string);
  // for (int a = 0; a < str_length(str); a++) {
  //   cout << a + 1 << ". " << str[a] << '\n';
  // }
  cout << "The Final Length Of Your Array Is: " << str_length(my_string) << '\n';

  return 0;
}
// ==== END MAIN FUNCTION ==== //

int function(char str[]) {
    cout << str << '\n';
}

int int_length(int num[]) {
  int length = 0;

  // ==== THIS IS FOR ONLY TRUE VALUES ==== //
  // while (num[length] != false) {
  //   length++;
  // }

  // ==== THIS IS FOR TRUE VALUES AND ZERO'S ==== //
  for (int i = 0; i < 10; i++) {
    if (num[i] == 0) {
      length++;
      continue;
    } else if (num[length] == false) {
      break;
    } else {
      length++;
    }
  }

  return length;
}

int str_length(string str_arr[]) {

  int length = 0;
  int i = 0;

  while (i < 10) {
    if (str_arr[i][0] == false) {
      break;
    }
    length++;
    i++;
  }

  return length;
}

int str_cmp(string str_1, string str_2) {

  int i = 0;
  int j = 0;
  int res_1 = 0;
  int res_2 = 0;
  int res_3 = 0;

  while (str_1[i] != '\0') {
    res_1 += str_1[i];
    i++;
  }

  while (str_2[j] != '\0') {
    res_2 += str_2[j];
    j++;
  }

  if (res_1 == res_2) {
    res_3 = 0;
  } else {
    res_3 = -1;
  }

  return res_3;
}

void change_str(string str[]) {

  string quit = "q";

  char user_input[50] = "x";
  char change[50];

  cout << "\nWhat String Would You Like To Change? " << "\n\n";

  for (int i = 0; i < str_length(str); i++) {
    cout << i + 1 << ". " << str[i] << '\n';
  }

  while (str_cmp(user_input, quit) != 0) {
    printf("\n - - > ");
    scanf("%s", user_input);

    for (int j = 0; j < str_length(str); j++) {
      if (str_cmp(user_input, str[j]) == 0) {
        cout << "Ok, Let's Change: " << str[j] << '\n';
        cout << " - - > ";
        scanf("%s", change);
        cout << "Ok, Changing " << str[j] << " to " << change << "!" << '\n';
        str[j] = change;
        cout << "All Done!" << '\n';
      }
    }
  }
}

void delete_str(string str[]) {

  string quit = "q";

  char user_input[50] = "x";
  char del_str[50] = "z";

  while (str_cmp(user_input, quit) != 0) {

    cout << "\nWhat String Would You Like To Delete?" << "\n\n";

    for (int i = 0; i < str_length(str); i++) {
      cout << i + 1 << ". " << str[i] << '\n';
    }
    cout << "\nThe Length Of Your Array Is: " << str_length(str) << '\n';

    cout << "\n - - > ";
    scanf("%s", user_input);

    for (int j = 0; j < str_length(str); j++) {
      if (str_cmp(user_input, str[j]) == 0) {
        cout << "\nOk We Are Now Deleting " << str[j] << '\n';
        string next_string = str[j + 1];
        for (int a = j; a < str_length(str); a++) {
          str[a] = str[a + 1];
        }
        str[j] = next_string;
      }
    }

    if (str_cmp(user_input, quit) == 0) {
      break;
    }

  }

}
