void *sub_3A918()
{
  int v0; // r0
  int v1; // r5
  int v2; // r2
  int v3; // r0
  int v4; // r5
  void *result; // r0
  __int16 v6; // r12
  char v7; // r5

  v0 = dword_BC914;
  if ( dword_BC918 )
  {
    v6 = __rev16(dword_BC910);
    if ( dword_BC920 )
      v7 = (8 * dword_BC920) | 0xC7;
    else
      v7 = -41;
    word_BC928 = v6;
    byte_BC924 = v7;
    byte_BC925 = dword_BCB20 & 0x7F;
    sub_16A68((struct sockaddr *)dword_BCB28, dword_BCB24, -1, (unsigned __int8 *)&byte_BC924, dword_BC914 + 8);
    v1 = dword_BC91C;
    ++numresppkts;
    _memcpy_chk(&dword_BC92C, &unk_BC71C);
    v2 = 1;
    v0 = 0;
    dword_BC918 = 0;
    ++dword_BCB20;
  }
  else
  {
    v1 = dword_BC91C;
    v2 = dword_BC910 + 1;
  }
  v3 = v0 + v1;
  v4 = v3 + v1;
  dword_BC914 = v3;
  if ( v4 <= 500 )
    v3 += (int)&unk_BC71C;
  dword_BC910 = v2;
  if ( v4 <= 500 )
    return (void *)(v3 + 528);
  if ( dword_BCB20 == 127 )
    result = 0;
  else
    result = &unk_BC71C;
  if ( dword_BCB20 != 127 )
    dword_BC918 = 1;
  return result;
}
