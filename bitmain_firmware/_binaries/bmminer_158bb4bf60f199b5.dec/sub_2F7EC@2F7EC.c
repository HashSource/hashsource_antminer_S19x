int __fastcall sub_2F7EC(int result, int a2)
{
  int v2; // r6
  unsigned int v3; // r3
  int v5; // r6
  unsigned int v6; // r4
  int v7; // r2
  int v8; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = result;
  v3 = dword_9E31C;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "\n asic nonce number for chain[%d] asic[%d]...\n", result, a2);
    result = sub_47AB4(3, s, 0);
    v3 = dword_9E31C;
  }
  v5 = 384 * a2 + 29952 * v2;
  v6 = 0;
  do
  {
    while ( v3 <= 3 )
    {
      ++v6;
LABEL_4:
      if ( v6 == 96 )
        goto LABEL_10;
    }
    v7 = v5 + 4 * v6;
    v8 = v6++;
    snprintf(s, 0x800u, "core[%03d]=%-8d", v8, *(_DWORD *)((char *)&dword_13864C[1264] + v7));
    sub_47AB4(3, s, 0);
    result = 3;
    v3 = dword_9E31C;
    if ( v6 != 10 * (v6 / 0xA) || (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    strcpy(s, "\n");
    result = sub_47AB4(3, s, v6 % 0xA);
    v3 = dword_9E31C;
  }
  while ( v6 != 96 );
LABEL_10:
  if ( v3 > 3 )
  {
    strcpy(s, "\n");
    return sub_47AB4(3, s, 0);
  }
  return result;
}
