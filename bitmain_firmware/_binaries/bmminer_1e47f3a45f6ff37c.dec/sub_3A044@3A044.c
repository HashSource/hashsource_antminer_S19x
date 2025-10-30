int __fastcall sub_3A044(int a1, int a2)
{
  int result; // r0
  int v5; // r8
  unsigned int v6; // r2
  int *v7; // r5
  int v8; // r4
  int v9; // r6
  int v10; // r11
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "\n asic nonce number for chain[%d] asic[%d]...\n", a1, a2);
    sub_3C5B8(3, s, 0);
  }
  result = sub_26A74();
  v5 = result;
  if ( result > 0 )
  {
    v6 = dword_B308C;
    v7 = &dword_B706C[0x40000 * a1 + 1028 + 1024 * a2];
    v8 = 1;
    do
    {
      while ( 1 )
      {
        v9 = v8;
        if ( v6 > 3 )
        {
          memset(s, 0, 0x800u);
          snprintf(s, 0x800u, "core[%03d]=%-8d", v8 - 1, *v7);
          sub_3C5B8(3, s, 0);
          result = 1717986919 * v8;
          v10 = v8 % 10;
          v6 = dword_B308C;
          if ( v8 == 10 * (v8 / 10) && (unsigned int)dword_B308C > 3 )
            break;
        }
        ++v8;
        ++v7;
        if ( v5 <= v9 )
          goto LABEL_11;
      }
      ++v8;
      memset(s, v10, 0x800u);
      *(_WORD *)s = 10;
      result = sub_3C5B8(3, s, v10);
      v6 = dword_B308C;
      ++v7;
    }
    while ( v5 > v9 );
  }
  else
  {
    v6 = dword_B308C;
  }
LABEL_11:
  if ( v6 > 3 )
  {
    memset(s, 0, 0x800u);
    *(_WORD *)s = 10;
    return sub_3C5B8(3, s, 0);
  }
  return result;
}
