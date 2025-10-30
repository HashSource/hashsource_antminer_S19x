int __fastcall sub_FAA10(int result, _BYTE *a2, int a3)
{
  int v4; // r8
  _BYTE *v6; // r4
  _BYTE *v7; // r1
  int v8; // r5
  bool v9; // cc
  unsigned int v10; // r1
  _BYTE *v11; // r3
  int v12; // r2

  v4 = result;
  v6 = a2;
LABEL_2:
  while ( 1 )
  {
    v7 = (_BYTE *)(v6 - a2);
    if ( v6 - a2 >= a3 )
      break;
    v8 = a3 - (_DWORD)v7;
    v9 = a3 - (int)v7 < 8;
    v10 = (unsigned int)&v7[v4];
    if ( !v9 )
      v8 = 8;
    result = sub_FA778(2, v10, (int)v6, v8);
    v11 = v6;
    v12 = 0;
    while ( 1 )
    {
      v6 = v11++;
      if ( !*v6 )
        break;
      ++v12;
      v6 = v11;
      if ( v8 <= v12 )
        goto LABEL_2;
    }
    if ( v8 > v12 )
      return result;
  }
  a2[a3 - 1] = 0;
  return result;
}
