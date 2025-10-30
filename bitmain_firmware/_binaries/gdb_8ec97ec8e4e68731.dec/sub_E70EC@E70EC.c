char *__fastcall sub_E70EC(char *a1, char *a2, unsigned int **a3, int a4, char a5)
{
  int v9; // r1
  int v10; // r10
  char *v11; // r11

  v9 = (((a2 - a1) >> 2) + 1) / 2;
  v10 = 4 * v9;
  v11 = &a1[4 * v9];
  if ( v9 > a4 )
  {
    sub_E70EC(a1);
    sub_E70EC(v11);
  }
  else
  {
    sub_E591C(a1, &a1[4 * v9], a3);
    sub_E591C(v11, a2, a3);
  }
  return sub_E6C80(a1, v11, (char **)a2, v10 >> 2, (a2 - v11) >> 2, (char *)a3, a4, a5);
}
