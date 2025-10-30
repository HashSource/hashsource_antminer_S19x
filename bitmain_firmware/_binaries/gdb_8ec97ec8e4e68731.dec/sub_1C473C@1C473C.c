char **__fastcall sub_1C473C(char **a1, int a2)
{
  int v2; // r2
  char *v3; // r3
  char *v5; // r1
  char *v7; // r0
  int v8; // r1
  bool v9; // cc

  v2 = *(_DWORD *)(a2 + 4);
  v3 = a1[1];
  v5 = a1[2];
  v7 = *a1;
  if ( (int)&v3[v2] >= (int)v5 )
  {
    v8 = 2 * (_DWORD)v5;
    v9 = v2 <= v8;
    if ( v2 <= v8 )
      a1[2] = (char *)v8;
    else
      v8 = v2;
    if ( !v9 )
      a1[2] = (char *)v2;
    v7 = (char *)sub_93050(v7, 4 * v8);
    v3 = a1[1];
    v2 = *(_DWORD *)(a2 + 4);
    *a1 = v7;
  }
  memcpy(&v7[4 * (_DWORD)v3], *(const void **)a2, 4 * v2);
  a1[1] += *(_DWORD *)(a2 + 4);
  return a1;
}
