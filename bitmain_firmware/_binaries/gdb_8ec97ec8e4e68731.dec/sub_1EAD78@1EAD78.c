int __fastcall sub_1EAD78(int a1, int a2, int a3, int a4, int **a5)
{
  int **v5; // r5
  int v9; // r0
  int result; // r0
  int v11; // r4
  size_t v12; // r0
  int v13; // r0
  int *v14; // r3
  bool v15; // zf
  int *v16; // r3
  bool v17; // zf
  int v18; // r0
  size_t v19; // r0
  int v20; // r0

  v5 = a5;
  v9 = sub_16F654(a1);
  result = ((int (__fastcall *)(int))loc_1E2770)(v9);
  if ( a5 )
  {
    v11 = dword_488C94;
    do
    {
      sub_258BD4(result);
      strcpy(*(char **)v11, "QTDPsrc:");
      v12 = strlen(*(const char **)v11);
      sub_24B4D0(a1, (int)v5[1], a3, a4, "cmd", (char *)v5[1], *(_DWORD *)v11 + v12, *(_DWORD *)(v11 + 4) - v12);
      v13 = sub_1E7DEC(*(const char **)v11);
      sub_1E98E8(v13);
      result = strcmp(*(const char **)v11, "OK");
      if ( result )
      {
        result = sub_946B0("Target does not support source download.");
        v16 = v5[2];
        v17 = v16 == (int *)9;
        if ( v16 != (int *)9 )
          v17 = v16 == (int *)3;
        if ( !v17 )
          goto LABEL_7;
      }
      else
      {
        v14 = v5[2];
        v15 = v14 == (int *)9;
        if ( v14 != (int *)9 )
          v15 = v14 == (int *)3;
        if ( !v15 )
          goto LABEL_7;
      }
      v18 = sub_1EAD78(a1, *v5[6], a3, a4, *v5[6]);
      sub_258BD4(v18);
      strcpy(*(char **)v11, "QTDPsrc:");
      v19 = strlen(*(const char **)v11);
      sub_24B4D0(a1, *(_DWORD *)(v11 + 4) - v19, a3, a4, "cmd", "end", *(_DWORD *)v11 + v19, *(_DWORD *)(v11 + 4) - v19);
      v20 = sub_1E7DEC(*(const char **)v11);
      sub_1E98E8(v20);
      result = strcmp(*(const char **)v11, "OK");
      if ( result )
        result = sub_946B0("Target does not support source download.");
LABEL_7:
      v5 = (int **)*v5;
    }
    while ( v5 );
  }
  return result;
}
