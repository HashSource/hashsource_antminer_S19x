void __fastcall sub_9B924(int a1, int a2)
{
  const char *v2; // r5
  char **v4; // r4
  const char *v5; // r7
  const char *v6; // t1
  char *v7; // r4
  char *v8; // r7
  void *v9; // r0
  int *v10; // r4
  void *i; // r10
  void *v12; // r0
  int v13; // r5
  void *v14; // r0
  int v15; // r5
  int v16; // r11
  int v17; // r0
  char *v18; // [sp+10h] [bp-Ch] BYREF
  int v19; // [sp+14h] [bp-8h] BYREF

  v2 = *(const char **)(a1 + 136);
  if ( v2 && *(_DWORD *)(a1 + 28) )
  {
    v4 = off_37402C;
    v5 = "long_integer (GNAT_GCC_exception_Access(gcc_exception).all.occurrence.id)";
    if ( a2 != 3 )
      v5 = "long_integer (e)";
    if ( !strcmp("constraint_error", v2) )
    {
LABEL_8:
      v7 = sub_93140("long_integer (&standard.%s)", v2);
    }
    else
    {
      while ( off_374038 != v4 )
      {
        v6 = *v4++;
        if ( !strcmp(v6, v2) )
          goto LABEL_8;
      }
      v7 = sub_93140("long_integer (&%s)", v2);
    }
    v8 = sub_93140("%s = %s", v5, v7);
    if ( v7 )
      free(v7);
    v9 = sub_9253C((int)sub_9AD58, (int)v8);
    v10 = *(int **)(a1 + 28);
    for ( i = v9; v10; v10 = (int *)*v10 )
    {
      if ( *((_BYTE *)v10 + 37) )
      {
        v13 = 0;
      }
      else
      {
        v18 = v8;
        v14 = sub_92E28();
        v15 = v10[13];
        v16 = (int)v14;
        v17 = sub_C2574(v15);
        sub_1C427C(&v19, &v18, v15, v17, 0);
        v13 = v19;
        sub_92E40(v16);
      }
      v12 = (void *)v10[60];
      v10[60] = v13;
      if ( v12 )
        free(v12);
    }
    sub_92620(i);
  }
}
