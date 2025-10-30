unsigned int __fastcall sub_4C8C8(int a1, int a2)
{
  unsigned int v2; // r5
  int v4; // r8
  int i; // r4
  bool v6; // zf
  int v7; // r3
  int v9; // r0
  int v10; // r1
  int j; // r3
  unsigned int v12; // r2
  unsigned int v13; // t1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = 0;
  v4 = a2 - 4;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
    {
      v6 = a1 == 255;
      if ( a1 != 255 )
        v6 = a1 == i;
      if ( v6 )
      {
        v9 = sub_26540();
        if ( v9 )
        {
          v10 = v4 + (i << 10);
          for ( j = 0; j != v9; ++j )
          {
            v13 = *(_DWORD *)(v10 + 4);
            v10 += 4;
            v12 = v13;
            if ( v2 < v13 )
              v2 = v12;
          }
        }
      }
    }
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_max = %d\n", a1, v2);
    sub_3AF5C(4, s, 0, v7);
  }
  return v2;
}
