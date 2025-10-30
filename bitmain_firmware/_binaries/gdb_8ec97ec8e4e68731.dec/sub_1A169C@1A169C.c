int __fastcall sub_1A169C(int a1, char *a2, int a3)
{
  int v3; // r4
  unsigned int v5; // r3
  char *v6; // r5
  bool v7; // cc
  char *v8; // r2
  unsigned int v9; // t1
  unsigned int v10; // r1
  bool v11; // cc
  unsigned int v12; // r1
  bool v13; // cc
  bool v14; // zf
  int result; // r0
  unsigned int v16; // t1
  unsigned int v17; // r2
  bool v18; // cc

  v3 = a3;
  if ( a3 <= 0 )
  {
LABEL_24:
    sub_1A1660(a1, 34);
  }
  else
  {
    while ( 1 )
    {
      v5 = (unsigned __int8)*a2;
      v6 = a2++;
      v7 = v5 > 0x20;
      if ( v5 != 32 )
        v7 = v5 - 9 > 3;
      if ( v7 )
        break;
      if ( !--v3 )
        goto LABEL_24;
    }
    v8 = &v6[v3];
    while ( 1 )
    {
      v9 = (unsigned __int8)*--v8;
      v10 = v9 - 9;
      v11 = v9 > 0x20;
      if ( v9 != 32 )
        v11 = v10 > 3;
      if ( v11 )
        break;
      if ( !--v3 )
        goto LABEL_24;
    }
    sub_1A1660(a1, 34);
    while ( 1 )
    {
LABEL_12:
      v12 = (unsigned __int8)*v6;
      v13 = v12 > 0x20;
      if ( v12 != 32 )
        v13 = v12 - 9 > 3;
      if ( !v13 )
        break;
      v14 = v12 == 92;
      if ( v12 != 92 )
        v14 = v12 == 34;
      --v3;
      if ( v14 )
      {
        sub_1A1660(a1, 92);
        sub_1A1660(a1, *v6);
      }
      else
      {
        sub_1A1660(a1, v12);
      }
      if ( !v3 )
        goto LABEL_25;
      ++v6;
    }
    sub_1A1660(a1, 32);
    while ( v3 != 1 )
    {
      v16 = (unsigned __int8)*++v6;
      --v3;
      v17 = v16 - 9;
      v18 = v16 > 0x20;
      if ( v16 != 32 )
        v18 = v17 > 3;
      if ( v18 )
        goto LABEL_12;
    }
  }
LABEL_25:
  result = sub_1A1660(a1, 34);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 4);
  return result;
}
