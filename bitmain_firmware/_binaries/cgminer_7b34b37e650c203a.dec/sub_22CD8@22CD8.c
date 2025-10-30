int __fastcall sub_22CD8(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  unsigned int v4; // r3
  unsigned int v5; // r12
  int result; // r0
  unsigned __int8 *v7; // r1
  int v8; // r3
  int v9; // r4
  char v10[2052]; // [sp+0h] [bp-804h] BYREF

  if ( !*a2 )
    return !a3;
  if ( !a3 )
    return 0;
  if ( !a2[1] )
  {
LABEL_16:
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      strcpy(v10, "hex2bin str truncated");
      sub_20F58(3, v10, 0);
    }
    return 0;
  }
  v4 = dword_4C8CC[a2[1]];
  v5 = dword_4C8CC[*a2];
  result = (v4 >> 31) | (v5 >> 31);
  if ( !result )
  {
    v7 = a2 + 4;
    do
    {
      --a3;
      *a1++ = v4 | (16 * v5);
      v8 = *(v7 - 2);
      if ( !*(v7 - 2) )
        return !a3;
      if ( !a3 )
        return result;
      v9 = *(v7 - 1);
      v7 += 2;
      if ( !v9 )
        goto LABEL_16;
      v5 = dword_4C8CC[v8];
      v4 = dword_4C8CC[v9];
    }
    while ( ((v5 | v4) & 0x80000000) == 0 );
  }
  if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
    return 0;
  strcpy(v10, "hex2bin scan failed");
  sub_20F58(3, v10, 0);
  return 0;
}
