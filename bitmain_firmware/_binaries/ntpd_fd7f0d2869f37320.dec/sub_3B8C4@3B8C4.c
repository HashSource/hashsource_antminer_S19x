int sub_3B8C4()
{
  char v0; // r3
  char v1; // r12
  int result; // r0

  if ( !dword_BDB34 && !dword_BD930 )
    return sub_3B5D8((struct sockaddr *)dword_BDB3C, dword_BDB38, byte_BD93A, byte_BD93B, 4);
  v0 = dword_BD934;
  if ( dword_BD934 )
    v0 = 8 * dword_BD934;
  byte_BD939 = dword_BDB34 & 0x7F;
  if ( dword_BD934 )
    v1 = ~(~v0 & 0x78);
  else
    v1 = -105;
  byte_BD938 = v1;
  word_BD93C = BYTE1(dword_BD930) | (unsigned __int16)((_WORD)dword_BD930 << 8);
  result = sub_16CC0((struct sockaddr *)dword_BDB3C, dword_BDB38, -1, (unsigned __int8 *)&byte_BD938, dword_BD928 + 8);
  ++numresppkts;
  return result;
}
