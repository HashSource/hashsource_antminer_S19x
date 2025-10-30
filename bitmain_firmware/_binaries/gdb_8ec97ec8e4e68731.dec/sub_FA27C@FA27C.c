void __fastcall sub_FA27C(int a1, int a2, char *a3, int a4)
{
  int *v5; // r0
  int v6; // r6
  int v7; // r1
  int *v8; // lr
  int v9; // t1
  int v10; // r7
  size_t v11; // r1
  const char **v12; // r1

  if ( dword_47ACAC )
  {
    sub_54B80(a2, (const char **)dword_47ACAC, a3, a4);
  }
  else
  {
    v5 = (int *)sub_2AE644(a1);
    v6 = *v5;
    dword_47ACAC = (int)v5;
    if ( v6 )
    {
      v7 = 0;
      v8 = v5;
      while ( 1 )
      {
        v9 = v8[1];
        ++v8;
        v6 = 4 * (v7 + 1);
        if ( !v9 )
          break;
        ++v7;
      }
      v10 = v7 + 2;
      v11 = 4 * (v7 + 3);
    }
    else
    {
      v11 = 8;
      v10 = 1;
    }
    v12 = (const char **)sub_93050(v5, v11);
    *(const char **)((char *)v12 + v6) = "auto";
    dword_47ACAC = (int)v12;
    v12[v10] = 0;
    sub_54B80(a2, v12, a3, a4);
  }
}
