#define _CRT_SECURE_NO_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AppScreen() {
  printf("1) ����� ������-���������� �� ��������� ������\n");
  printf("2) ����� ����� �������� ������ �� ��� ��������\n");
  printf("3) ����� ������ � ���������� ������������� �� ������\n");
  printf("4) ����� ������ �������� �� ��������� ��������\n");
  printf("0) ����� �� ���������\n--------------------\n");
}

int Variative_Reading(FILE* file1,
                      char Narr[10],
                      char Carr[10],
                      int Varr[10],
                      int Darr[10],
                      int Marr[10],
                      int Yarr[10]) {
  int k = 0;
  char str[128];  // ������ �������� 128
  // STR = file1[k];

  for (k; k != feof(file1); k++) {
    fgets(str, 128, file1);  //���������� ������ � ����
    printf("", str);         // ����� ����� ��� ��������
    if (strlen(str) > 4) {
      if (k + 1 / 6 == 1) {
        fwrite(str, size_t(8), size_t(128), file1);
      } else {
        if (k + 1 / 6 == 2) {
          Carr[k] = str  //]}copy (k, Carr[k]);
        }
      }
    } else {
      if (k / +16 == 3) {
        Var[k] = str  //]copy (k, Varr[k]);}
            else {
          if (k + 1 / 6 == 4) {
            Darr[k] = str  // copy (k, Darr[k]);}
                else {
              if (k + 1 / 6 == 5) {
                Mar[k] = str  // copy (k, Marr[k]);}
                    else {
                  if (k + 1 / 7 == 0) {
                    Yarr[k] = str  // copy (k, Yarr[k]);}
                  }
                }
              }
            }
          }
        }

        // int InputProcessing(int var) {
        //  do {
        //  switch (var) {
        //  case 1:
        //
        //      printf("����� ������-���������� �� ��������� ������...\n");
        //	break;
        // case 2:
        //
        //      printf("����� ����� �������� ������ �� ��� ��������...\n");
        //	break;
        // case 3:
        //
        //      printf("����� ������ � ���������� ������������� ��
        //      ������...\n");
        //	break;
        // case 4:
        //
        //      printf("����� ������ �������� �� ��������� ��������...\n");
        //	break;
        // case 0:
        // printf("���������� ���������...\n");
        // return 0;
        //        break;
        //    default:
        //    printf("���� �����������. ��������� ����.\n");
        //  break;
        //    }
        //  } while (var = 0);
        // }

        int main() {
          setlocale(LC_ALL, "RUS");
          int k = 0;
          char Product[10];
          char Country[10];
          int Volume[10];
          int Day[10];
          int Month[10];
          int Year[10];
          FILE* base_file;
          base_file = fopen("base.txt", "r");
          do {
            AppScreen();
            printf("������� ����� ��������...\n");
            scanf("%d", &k);
            // InputProcessing(k);
            printf("--------------------\n");
            Variative_Reading(base_file, Product, Country, Volume, Day, Month,
                              Year);
          } while (k = 0);
          printf(Product);
          return (0);
        }
