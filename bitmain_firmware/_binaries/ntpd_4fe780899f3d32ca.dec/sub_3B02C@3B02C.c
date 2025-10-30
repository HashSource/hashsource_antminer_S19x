int sub_3B02C()
{
  __int16 v0; // r7
  char v1; // r8
  int result; // r0

  if ( !dword_BCB20 && !dword_BC910 )
    return sub_3AD58((struct sockaddr *)dword_BCB28, dword_BCB24, byte_BC926, byte_BC927, 4);
  v0 = __rev16(dword_BC910);
  if ( dword_BC920 )
    v1 = -121;
  else
    v1 = -105;
  if ( dword_BC920 )
    v1 |= 8 * (_BYTE)dword_BC920;
  byte_BC925 = dword_BCB20 & 0x7F;
  byte_BC924 = v1;
  word_BC928 = v0;
  result = sub_16A68((struct sockaddr *)dword_BCB28, dword_BCB24, -1, (unsigned __int8 *)&byte_BC924, dword_BC914 + 8);
  ++numresppkts;
  return result;
}
