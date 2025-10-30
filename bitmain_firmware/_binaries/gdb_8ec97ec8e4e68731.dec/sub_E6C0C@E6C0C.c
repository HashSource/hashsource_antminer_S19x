char *__fastcall sub_E6C0C(char *a1, char *a2, int a3)
{
  int v5; // r4
  char *v7; // r8

  if ( a2 - a1 <= 56 )
    return sub_E5714(a1, a2);
  v5 = 4 * ((a2 - a1) >> 3);
  v7 = &a1[v5];
  ((void (*)(void))sub_E6C0C)();
  sub_E6C0C(v7, a2, a3);
  return (char *)sub_E6A24((unsigned int **)a1, v7, (int)a2, v5 >> 2, (a2 - v7) >> 2, a3);
}
