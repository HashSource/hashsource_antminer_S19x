int __fastcall sub_1217F8(int a1, int a2, _DWORD *a3)
{
  int v3; // r7
  int v5; // r3
  char *v7; // r8
  int v8; // r4
  int v9; // r3
  char v10; // t1
  int v11; // r6
  int v12; // r0

  v3 = a3[4];
  if ( v3 == 16 )
    return 0;
  if ( a2 )
  {
    v7 = (char *)a1;
    if ( a2 <= 4 )
    {
      v8 = a2;
      v9 = 0;
      while ( 1 )
      {
        v10 = *v7++;
        v11 = 16 * v9;
        v12 = sub_E9F98(v10);
        if ( v12 < 0 )
          break;
        --v8;
        v9 = (unsigned __int8)v12 | v11;
        if ( !v8 )
        {
          *((_BYTE *)a3 + v3) = BYTE1(v9);
          *((_BYTE *)a3 + v3 + 1) = v9;
          a3[4] += 2;
          return 1;
        }
      }
    }
    else if ( v3 <= 12 && !*(_BYTE *)(a1 + a2) && sub_121788((_BYTE *)a3 + v3, a1) )
    {
      a3[4] += 4;
      return 1;
    }
    return 0;
  }
  v5 = a3[5];
  if ( v5 != -1 )
  {
    if ( v3 == v5 )
      goto LABEL_12;
    return 0;
  }
  a3[5] = v3;
LABEL_12:
  ++a3[6];
  return 1;
}
