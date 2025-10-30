int __fastcall sub_291878(const char *a1, int a2)
{
  int v3; // r5
  const char **v5; // r0
  int v6; // r1
  const char **v7; // r3
  const char *v9; // r10
  size_t v10; // r9
  size_t v11; // r0
  void *v12; // r0
  void *v13; // r9
  char *v14; // r0
  _DWORD *v15; // r3
  int v16; // r1
  char *v17; // r0

  v3 = dword_48AAE8;
  v5 = (const char **)dword_48B6C8;
  if ( dword_48AAE8 )
  {
    v3 = dword_48B6CC - 1;
  }
  else
  {
    if ( dword_48B6C8 )
    {
      v3 = dword_48B6CC;
      if ( dword_48B6CC == 10 )
      {
        sub_297758(*(_DWORD *)dword_48B6C8);
        v5 = (const char **)dword_48B6C8;
        v15 = (_DWORD *)dword_48B6C8;
        v16 = dword_48B6C8 + 40;
        do
        {
          *v15 = v15[1];
          ++v15;
        }
        while ( v15 != (_DWORD *)v16 );
        v3 = 9;
        v6 = 36;
      }
      else
      {
        ++dword_48B6CC;
        v5 = (const char **)sub_93050((void *)dword_48B6C8, 4 * (v3 + 1));
        v6 = 4 * (v3 + 1) - 4;
        dword_48B6C8 = (int)v5;
      }
      v7 = (const char **)((char *)v5 + v6);
      *(const char **)((char *)v5 + v6) = 0;
    }
    else
    {
      dword_48B6CC = 1;
      v5 = (const char **)sub_93028(8u);
      dword_48B6C8 = (int)v5;
      v7 = v5;
      *v5 = 0;
    }
    if ( !dword_48AAE8 )
      goto LABEL_7;
  }
  v7 = &v5[v3];
  if ( !dword_46DED4 )
  {
LABEL_7:
    *v7 = a1;
    goto LABEL_8;
  }
  v9 = v5[v3];
  v10 = strlen(v9);
  v11 = strlen(a1);
  v12 = sub_93028(v10 + v11 + 1);
  v13 = v12;
  if ( a2 )
  {
    v14 = (char *)stpcpy(v12, v9);
    strcpy(v14, a1);
  }
  else
  {
    v17 = (char *)stpcpy(v12, a1);
    strcpy(v17, v9);
  }
  sub_297758(v9);
  sub_297758(a1);
  *(_DWORD *)(dword_48B6C8 + 4 * v3) = v13;
LABEL_8:
  dword_48B6D0 = v3;
  return 0;
}
