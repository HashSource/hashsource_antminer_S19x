void __fastcall sub_FC2F8(int a1, int a2, char *a3, int a4)
{
  int *v4; // r4
  const char **v6; // r1
  int v7; // r0
  const char **v8; // r0
  int v9; // r6
  const char **v10; // r0
  const char **v11; // lr
  const char **v12; // t1
  char *v13; // [sp+0h] [bp-8h]
  int v14; // [sp+4h] [bp-4h]

  v4 = &dword_47AFF0;
  v6 = (const char **)dword_47B014;
  if ( dword_47B014 )
  {
    v7 = a2;
  }
  else
  {
    v13 = a3;
    v14 = a4;
    v6 = (const char **)sub_93028(4 * (dword_47AFF0 + 1));
    dword_47B014 = (int)v6;
    a3 = v13;
    a4 = v14;
    if ( dword_47AFF0 > 0 )
    {
      v9 = dword_47AFF0;
      v10 = v6 - 1;
      v11 = &v6[dword_47AFF0 - 1];
      do
      {
        v12 = (const char **)v4[1];
        ++v4;
        v10[1] = *v12;
        ++v10;
      }
      while ( v10 != v11 );
      v8 = &v6[v9];
    }
    else
    {
      v8 = v6;
    }
    *v8 = 0;
    v7 = a2;
  }
  sub_54B80(v7, v6, a3, a4);
}
