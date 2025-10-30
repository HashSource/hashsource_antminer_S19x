const char ***__fastcall sub_21CC54(const char ***a1, const char **a2, int a3)
{
  const char **v5; // r4
  const char **v6; // r0
  const char **v7; // r6
  int v8; // r5
  const char *v9; // r9
  char *v10; // r7
  char *v11; // r0
  _DWORD *v13; // r11
  int *v14; // r0
  const char *v15; // r6
  int v16; // r9
  char *v17; // r10
  const char *v18; // r0
  _DWORD *v19; // r0

  v5 = (const char **)a3;
  if ( (unsigned int)dword_48970C <= 1 )
  {
    if ( a3 )
      goto LABEL_6;
    goto LABEL_16;
  }
  v13 = sub_21CBC4(a3);
  v14 = (int *)sub_242FC8(v13);
  v15 = *a2;
  v16 = *v14;
  v17 = sub_98EEC((int)v5);
  v18 = (const char *)sub_1B87CC((int)v13);
  v6 = (const char **)sub_2594B0(v16, "lookup_language_this (%s, %s (objfile %s))", v15, v17, v18);
  if ( !v5 )
  {
LABEL_14:
    if ( (unsigned int)dword_48970C > 1 )
    {
      v19 = (_DWORD *)sub_242FC8(v6);
      sub_2594B0(*v19, " = NULL\n");
    }
LABEL_16:
    *a1 = 0;
    a1[1] = 0;
    return a1;
  }
LABEL_6:
  while ( 1 )
  {
    v6 = (const char **)sub_C2974(v5, a2[21], 2u, 1);
    v7 = v6;
    if ( v6 )
      break;
    if ( !v5[2] )
    {
      v5 = (const char **)v5[3];
      if ( v5 )
        continue;
    }
    goto LABEL_14;
  }
  if ( (unsigned int)dword_48970C > 1 )
  {
    v8 = *(_DWORD *)sub_242FC8(v6);
    if ( dword_46D448 )
      v9 = (const char *)sub_21B3C4((int)v7);
    else
      v9 = *v7;
    v10 = sub_98EEC((int)v7);
    v11 = sub_98EEC((int)v5);
    sub_2594B0(v8, " = %s (%s, block %s)\n", v9, v10, v11);
  }
  *a1 = v7;
  a1[1] = v5;
  return a1;
}
