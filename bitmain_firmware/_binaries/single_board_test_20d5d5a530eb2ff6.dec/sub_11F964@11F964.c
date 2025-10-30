int __fastcall sub_11F964(int result, _DWORD *a2, int a3, signed int a4)
{
  signed int v5; // r4
  int v7; // r5
  signed int i; // r4
  bool v9; // cc
  int v10; // r3
  const char *v11; // r7
  const char *v12; // r3
  int v13; // r3
  const char *v14; // r7
  const char *v15; // r3

  if ( a2 )
  {
    v5 = a4;
    v7 = result;
    if ( a4 && sub_10C010((int)a2) )
      goto LABEL_4;
    sub_B550C(v7, (unsigned __int8 *)"%*s", a3, &byte_1A4198);
    if ( !sub_10C010((int)a2) )
      sub_B6C30(v7, (int)"<EMPTY>\n");
    if ( v5 )
    {
LABEL_4:
      for ( i = 0; ; ++i )
      {
        v9 = i < sub_10C010((int)a2);
        result = v7;
        if ( !v9 )
          break;
        sub_B550C(v7, (unsigned __int8 *)"%*s", a3, &byte_1A4198);
        v10 = sub_10C01C(a2, i);
        v11 = *(const char **)(v10 + 4);
        if ( v11 )
        {
          v12 = *(const char **)(v10 + 8);
          if ( v12 )
            sub_B550C(v7, "%s:%s", v11, v12);
          else
            sub_B6C30(v7, (int)v11);
        }
        else
        {
          sub_B6C30(v7, *(_DWORD *)(v10 + 8));
        }
        sub_B6C30(v7, (int)"\n");
      }
    }
    else
    {
      while ( 1 )
      {
        v9 = v5 < sub_10C010((int)a2);
        result = v7;
        if ( !v9 )
          break;
        if ( v5 > 0 )
          sub_B550C(v7, (unsigned __int8 *)", ");
        v13 = sub_10C01C(a2, v5);
        v14 = *(const char **)(v13 + 4);
        if ( v14 )
        {
          v15 = *(const char **)(v13 + 8);
          if ( v15 )
            sub_B550C(v7, "%s:%s", v14, v15);
          else
            sub_B6C30(v7, (int)v14);
        }
        else
        {
          sub_B6C30(v7, *(_DWORD *)(v13 + 8));
        }
        ++v5;
      }
    }
  }
  return result;
}
