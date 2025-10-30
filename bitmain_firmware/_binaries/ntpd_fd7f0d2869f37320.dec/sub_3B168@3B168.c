char *sub_3B168()
{
  char v0; // r12
  int v1; // r3
  int v2; // r5
  int v3; // r1
  char *result; // r0
  char v5; // r3

  if ( dword_BD924 )
  {
    v5 = dword_BD934;
    if ( dword_BD934 )
      v5 = ~(8 * dword_BD934) & 0x38;
    else
      v0 = -41;
    if ( dword_BD934 )
      v0 = ~v5;
    byte_BD938 = v0;
    byte_BD939 = dword_BDB34 & 0x7F;
    word_BD93C = BYTE1(dword_BD930) | (unsigned __int16)((_WORD)dword_BD930 << 8);
    sub_16CC0((struct sockaddr *)dword_BDB3C, dword_BDB38, -1, (unsigned __int8 *)&byte_BD938, dword_BD928 + 8);
    v2 = dword_BD92C;
    ++numresppkts;
    _memcpy_chk(&dword_BD940, &unk_BD730, dword_BD92C, 500);
    v3 = 1;
    v1 = 0;
    dword_BD924 = 0;
    ++dword_BDB34;
  }
  else
  {
    v1 = dword_BD928;
    v2 = dword_BD92C;
    v3 = dword_BD930 + 1;
  }
  dword_BD928 = v1 + v2;
  dword_BD930 = v3;
  if ( v1 + v2 + v2 <= 500 )
    return (char *)&unk_BD730 + v1 + v2 + 528;
  if ( dword_BDB34 == 127 )
    result = 0;
  else
    result = (char *)&unk_BD730;
  if ( dword_BDB34 != 127 )
    dword_BD924 = 1;
  return result;
}
