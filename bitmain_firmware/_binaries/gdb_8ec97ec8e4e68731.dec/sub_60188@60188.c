int __fastcall sub_60188(const char *a1, int a2, int a3, int a4, int *a5, _DWORD *a6, int a7)
{
  const char *v7; // r6
  const char *v8; // r11
  int v10; // r9
  const char *v13; // r0
  int v14; // r1
  const char *v16; // t1

  v10 = *a5;
  if ( (*a5 > a2) | ((unsigned int)*a5 >> 31) )
  {
    sub_94700("mi/mi-getopt.c", 36, "mi_getopt_long: oind out of bounds");
    goto LABEL_17;
  }
  if ( v10 == a2 )
    return -1;
  v7 = *(const char **)(a3 + 4 * v10);
  v8 = a1;
  if ( !strcmp(v7, "--") )
  {
    *a5 = v10 + 1;
    *a6 = 0;
    return -1;
  }
  if ( *v7 != 45 )
  {
    *a6 = 0;
    return -1;
  }
  v13 = *(const char **)a4;
  if ( !*(_DWORD *)a4 )
  {
LABEL_12:
    if ( a7 )
      sub_946E0("%s: Unknown option ``%s''", v8, v7 + 1);
    return -1;
  }
  while ( strcmp(v13, v7 + 1) )
  {
    v16 = *(const char **)(a4 + 12);
    a4 += 12;
    v13 = v16;
    if ( !v16 )
      goto LABEL_12;
  }
  v14 = v10 + 1;
  if ( *(_DWORD *)(a4 + 8) )
  {
    if ( v14 < a2 )
    {
      *a6 = *(_DWORD *)(a3 + 4 * v10 + 4);
      *a5 = v10 + 2;
      return *(_DWORD *)(a4 + 4);
    }
LABEL_17:
    sub_946E0("%s: Option %s requires an argument", v8, v7);
  }
  *a6 = 0;
  *a5 = v14;
  return *(_DWORD *)(a4 + 4);
}
