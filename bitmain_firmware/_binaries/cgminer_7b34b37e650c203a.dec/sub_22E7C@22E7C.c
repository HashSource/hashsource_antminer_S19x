void __fastcall sub_22E7C(int a1, char *s)
{
  size_t v4; // r0
  size_t v5; // r3
  char *v6; // r1
  char *v7; // r0
  unsigned __int8 *v8; // r3
  unsigned __int8 v9; // t1
  int v10; // r1
  int v11; // r12
  int i; // r3
  int v13; // [sp+0h] [bp-814h] BYREF
  unsigned __int8 v14[12]; // [sp+4h] [bp-810h] BYREF
  char sa[2052]; // [sp+10h] [bp-804h] BYREF

  qmemcpy(v14, "000000000", 9);
  v4 = strlen(s);
  v13 = 0;
  if ( v4 )
  {
    v5 = 7 - v4;
    v6 = s - 1;
    v7 = &s[v4 - 1];
    v8 = &v14[v5];
    do
    {
      v9 = *++v6;
      *++v8 = v9;
    }
    while ( v6 != v7 );
  }
  v14[8] = 0;
  sub_22CD8(&v13, v14, 4);
  v10 = 0;
  v11 = 0;
  for ( i = 0; i != 32; ++i )
  {
    if ( (((unsigned __int16)(v13 & 0xE000) >> i) & 1) != 0 )
    {
      ++v10;
      v11 |= 1 << i;
      if ( v10 == 3 )
        break;
    }
  }
  v13 = v11;
  if ( (v11 & 0xE000) != 0 )
  {
    *(_BYTE *)(a1 + 644) = 1;
    *(_DWORD *)(a1 + 648) = 8;
  }
  else
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
    {
      snprintf(sa, 0x800u, "Pool %d rolling mask do not match!", *(_DWORD *)a1);
      sub_20F58(5, sa, 0);
    }
    *(_BYTE *)(a1 + 644) = 0;
    *(_DWORD *)(a1 + 648) = 1;
  }
}
