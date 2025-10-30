int __fastcall sub_50AC8(_DWORD *a1, unsigned int a2)
{
  unsigned int *v2; // r11
  unsigned int *v3; // lr
  unsigned int v4; // r6
  unsigned int v5; // r2
  int v6; // r12
  unsigned int v7; // r3
  unsigned int v8; // r7
  unsigned int v9; // r2
  unsigned int v10; // r4
  int v11; // r3
  int v13; // r2

  v2 = a1 + 65537;
  v3 = a1 + 0x10000;
  v4 = a1[65537];
  v5 = a1[0x10000];
  if ( v5 < v4 + 4 )
  {
    v11 = a1[65539];
  }
  else
  {
    v6 = a1[65539];
    v7 = a1[65541];
    v8 = v5 - 3 - v4 + v6;
    if ( v8 <= v7 )
    {
      v11 = a1[65539];
    }
    else
    {
      do
      {
        v9 = (unsigned int)(-1640531535 * *(_DWORD *)(v4 + v7 - v6)) >> 17;
        v10 = v7 - a1[v9];
        if ( v10 >= 0xFFFF )
          LOWORD(v10) = -1;
        *((_WORD *)a1 + (unsigned __int16)v7 + 0x10000) = v10;
        a1[v9] = v7++;
      }
      while ( v8 != v7 );
      v11 = a1[65539];
      v4 = *v2;
      v5 = *v3;
    }
  }
  v13 = v5 - v4 + v11;
  a1[65540] = v11;
  a1[65539] = v13;
  a1[65538] = v4;
  *v2 = a2;
  a1[65541] = v13;
  *v3 = a2;
  a1[65543] = 0;
  return 0;
}
