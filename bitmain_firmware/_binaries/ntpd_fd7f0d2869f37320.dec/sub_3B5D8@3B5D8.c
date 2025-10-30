int __fastcall sub_3B5D8(struct sockaddr *a1, int a2, char a3, char a4, int a5)
{
  char v6; // r3
  int v8; // [sp+Ch] [bp-4h]

  if ( dword_BD934 )
    v6 = ~(~(8 * dword_BD934) & 0x78);
  else
    v6 = -105;
  byte_BD938 = v6;
  byte_BD93A = a3;
  byte_BD93B = a4;
  word_BD93C = (unsigned __int8)(16 * a5);
  byte_BD939 = 0;
  word_BD93E = 0;
  sub_16CC0(a1, a2, -1, (unsigned __int8 *)&byte_BD938, 8u);
  ++errorcounter[a5];
  return v8;
}
