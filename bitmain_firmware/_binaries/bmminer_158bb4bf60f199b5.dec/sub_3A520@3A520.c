unsigned int __fastcall sub_3A520(int a1, int a2)
{
  unsigned int v2; // r4
  int v3; // lr
  int v4; // r1
  int i; // r12
  int v6; // t1
  int v7; // r2
  bool v8; // zf
  unsigned int v9; // r3
  unsigned int v10; // t1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = 0;
  v3 = dword_A0D68;
  v4 = a2 - 4;
  for ( i = 0; i != 16; ++i )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v3 + 4);
      v3 += 4;
      v7 = v4 + 312;
      if ( v6 == 1 )
      {
        v8 = a1 == 255;
        if ( a1 != 255 )
          v8 = a1 == i;
        if ( v8 )
          break;
      }
      ++i;
      v4 += 312;
      if ( i == 16 )
        goto LABEL_12;
    }
    do
    {
      v10 = *(_DWORD *)(v4 + 4);
      v4 += 4;
      v9 = v10;
      if ( v2 < v10 )
        v2 = v9;
    }
    while ( v4 != v7 );
    v4 = v7;
  }
LABEL_12:
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_max = %d\n", a1, v2);
    sub_47AB4(4, s, 0);
  }
  return v2;
}
