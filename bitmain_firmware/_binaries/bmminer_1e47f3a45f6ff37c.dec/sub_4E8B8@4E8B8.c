unsigned int __fastcall sub_4E8B8(int a1, int a2)
{
  unsigned int v2; // r4
  int v3; // r8
  int i; // r6
  bool v6; // zf
  int v7; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r12
  unsigned int v12; // r2
  unsigned int v13; // t1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = 0;
  v3 = a2 - 4;
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
          v11 = v3;
          do
          {
            v13 = *(_DWORD *)(v11 + 4);
            v11 += 4;
            v12 = v13;
            ++v10;
            if ( v2 < v13 )
              v2 = v12;
          }
          while ( v9 != v10 );
        }
      }
    }
    v3 += 1024;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_max = %d\n", a1, v2);
    sub_3B6AC(4, s, 0, v7);
  }
  return v2;
}
