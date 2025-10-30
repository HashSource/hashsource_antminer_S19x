unsigned int __fastcall sub_4E7E8(int a1, int a2)
{
  int v2; // r8
  unsigned int v4; // r5
  int i; // r6
  bool v6; // zf
  int v7; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r12
  unsigned int v12; // r2
  unsigned int v13; // t1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = a2 - 4;
  v4 = 0xFFFFFF;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      v6 = i == a1;
      if ( i != a1 )
        v6 = a1 == 255;
      if ( v6 )
      {
        v9 = sub_26A44();
        if ( v9 )
        {
          v10 = 0;
          v11 = v2;
          do
          {
            v13 = *(_DWORD *)(v11 + 4);
            v11 += 4;
            v12 = v13;
            ++v10;
            if ( v4 >= v13 )
              v4 = v12;
          }
          while ( v9 != v10 );
        }
      }
    }
    v2 += 1024;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_min = %d\n", a1, v4);
    sub_3B6AC(4, s, 0, v7);
  }
  return v4;
}
