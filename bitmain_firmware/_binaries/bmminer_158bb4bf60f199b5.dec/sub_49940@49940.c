int __fastcall sub_49940(_BYTE *a1, unsigned __int8 *a2, int a3)
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
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      strcpy(v10, "hex2bin str truncated");
      sub_47AB4(3, v10, 0);
    }
    return 0;
  }
  v4 = dword_81958[a2[1]];
  v5 = dword_81958[*a2];
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
      v5 = dword_81958[v8];
      v4 = dword_81958[v9];
    }
    while ( ((v5 | v4) & 0x80000000) == 0 );
  }
  if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
    return 0;
  strcpy(v10, "hex2bin scan failed");
  sub_47AB4(3, v10, 0);
  return 0;
}
