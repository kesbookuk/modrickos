#include "../include/shell.h"
void
shutdown()
{
  print("                        -=shutting down=-                           ");
  for (;;)
    ;
}
void
launch_shell(int n)

{
  string ch = (string)malloc(200);
  int counter = 0;
  do {
    print("(");
    print(")> ");
    ch = readStr();
    if (strEql(ch, "cmd")) {
      print("\nYou are already in kterm well a new window is added\n");
      launch_shell(n + 1);
    }
    } else if (strEql(ch, "clear")) {
      clearScreen();
    } else if (strEql(ch, "kterm")) {
      print("\n modrick windows open: ");
      print(n);
      print("\n");
    } else if (strEql(ch, "kterm -close")) {
      print("\n modrick closed a kterm");
      launch_shell(n - 1);
    } else if (strEql(ch, "cd")) {
      print("IS BUGGED SO NOPE");
    } else if (strEql(ch, "install")) {
      install();
    } else if (strEql(ch, "dir")) {
      dir();
    } else if (strEql(ch, "sum")) {
      sum();
    } else if (strEql(ch, "cube")) {
      box();
    } else if (strEql(ch, "modrick")) {
      modrick();
    } else if (strEql(ch, "exit")) {
      shutdown();
    } else if (strEql(ch, "echo")) {
      echo();
    } else if (strEql(ch, "sort")) {
      sort();
    } else if (strEql(ch, "fibonaci")) {
      fibonaci();
    } else if (strEql(ch, "gcd")) {
      gcd();
    } else if (strEql(ch, "help")) {
      help();
    } else if (strEql(ch, "echo -color")) {
      echocolor();
    } else if (strEql(ch, "color")) {
      set_background_color();
    } else if (strEql(ch, "multiply")) {
      multiply();
    }

    else {
      print("\n");
      print(ch);
      print(" is a command or file that does not exist\n");
    }
  } while (!strEql(ch, "exit"));
}


void
echo()
{
  print("\n");
  string str = readStr();
  print("\n");
  print(str);
  print("\n");
}




void
gcd()
{
  print("\nHow many numbers: ");
  int n = str_to_int(readStr());
  int i = 0;
  print("\n");
  int arr[n];
  int matrix[n][n];
  fill_array(arr, n);
  for (i = 0; i < n; i++) {
    matrix[0][i] = arr[i];
  }
  int j = 0;
  for (i = 1; i < n; i++) {
    for (j = 0; j < n - 1; j++) {
      matrix[i][j] = gcd_couple(matrix[i - 1][j], matrix[i - 1][j + 1]);
    }
  }
  print("Result: ");
  print(int_to_string(matrix[n - 1][0]));
  print("\n");
}

  void createdir() {}
  void dir() {}
  void box() { print_colored("\n#####\n#   #\n#   #\n#####\n", 1, 2); }
  void install()
  {
    set_screen_color(6, 1);
    clearScreen();
    print("<<<<<<<<<<<<<<<<welcome to modrick install>>>>>>>>>>>>>>>>>>>>>>>>>>");
  }


  void echocolor()
  {
    print("\n\n Text ? : ");
    string textfecho = readStr();
    print("\n\n Text color ? : ");
    int text_color_echo = str_to_int(readStr());
    print("\n\n Background color ? : ");
    int bg_color_echo = str_to_int(readStr());
    print_colored(textfecho, text_color_echo, bg_color_echo);
    clearScreen();
  }
  void set_background_color()
  {
    print("\nColor codes : ");
    print("\n0 : black");
    print_colored("\n1 : blue", 1, 0); // screen.h
    print_colored("\n2 : green", 2, 0);
    print_colored("\n3 : cyan", 3, 0);
    print_colored("\n4 : red", 4, 0);
    print_colored("\n5 : purple", 5, 0);
    print_colored("\n6 : orange", 6, 0);
    print_colored("\n7 : grey", 7, 0);
    print_colored("\n8 : dark grey", 8, 0);
    print_colored("\n9 : blue light", 9, 0);
    print_colored("\n10 : green light", 10, 0);
    print_colored("\n11 : blue lighter", 11, 0);
    print_colored("\n12 : red light", 12, 0);
    print_colored("\n13 : rose", 13, 0);
    print_colored("\n14 : yellow", 14, 0);
    print_colored("\n15 : white", 15, 0);

    print("\n\n Text color ? : ");
    int text_color = str_to_int(readStr());
    print("\n\n Background color ? : ");
    int bg_color = str_to_int(readStr());
    set_screen_color(text_color, bg_color);
    clearScreen();
  }
  void cd()
  {
    print("\ntype a directory\n");

    string stringir = readStr();
    print("\n");
    dir = stringir;
    stringir = "";
    clearScreen();
  }

  void multiply()
  {
    print("\nNum 1 :");
    int num1 = str_to_int(readStr());
    print("\nNum 2 :");
    int num2 = str_to_int(readStr());
    print("\nResult : ");
    print(int_to_string(num1 * num2)); // util.h
    print("\n");
  }

  void help()
  {
    print("\ncmd       > Launch a new recursive Shell");
    print("\nclear     > Clears the screen");
    print("\nsum       > Computes the sum of n numbers");
    print("\necho      > Reprint a given text");
    print("\nsort      > Sorts a given n numbers");
    print("\nfibonaci  > Prints the first n numbers of fibonaci");
    print("\ngcd       > Computes the grand common divider of n given numbers");
    print("\nexit      > Quits the current shell");
    print("\ncolor     > Changes the colors of the terminal");

    print("\n\n");
  }
}
