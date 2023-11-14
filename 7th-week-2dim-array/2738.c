#include <stdio.h>

int main() {
  int W, H;
  scanf("%d %d", &W, &H);
  int mat1[W][H], mat2[W][H];
  for (int i = 0; i < W; i++) {
    for (int j = 0; j < H; j++) scanf("%d", &mat1[i][j]);
  }
  for (int i = 0; i < W; i++) {
    for (int j = 0; j < H; j++) scanf("%d", &mat2[i][j]);
  }
  for (int i = 0; i < W; i++) {
    for (int j = 0; j < H; j++) {
      printf("%d ", mat1[i][j] + mat2[i][j]);
    }
    printf("\n");
  }
}