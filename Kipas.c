#include <stdio.h>
#include <string.h>

int main() {
  int tingkatan; 
  char lagi;
  char tingkatan1[30];

  do {
    printf("masukan kecepatan kipas:\n1.angin lembut\n2.angin nyaman\n3.angin sejuk\n4.angin kuat\n5.angin super kuat\n");
    scanf("%i", &tingkatan);
    while (tingkatan>5 || tingkatan==0) {
    printf ("Masukkan kecepatan kipas yang anda inginkan (1-5): ");
    scanf("%i", &tingkatan);
    }
    switch (tingkatan) { 
      case 1: strcpy(tingkatan1, "angin lembut"); break; 
      case 2: strcpy(tingkatan1, "angin nyaman"); break; 
      case 3: strcpy(tingkatan1, "angin sejuk"); break; 
      case 4: strcpy(tingkatan1, "angin kuat"); break; 
      case 5: strcpy(tingkatan1, "angin superkuat"); break; 
    }

    printf ("tingkatan kipasnya %s", tingkatan1);

    printf ("\n\nApakah anda ingin mengganti kecepatan kipas?\n Y jika Ya: ");
    scanf(" %c", &lagi);
  } while (lagi == 'Y');

  return 0;
}