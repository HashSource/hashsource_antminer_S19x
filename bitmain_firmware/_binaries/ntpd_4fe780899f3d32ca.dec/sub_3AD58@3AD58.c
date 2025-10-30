int __fastcall sub_3AD58(struct sockaddr *a1, int a2, char a3, char a4, int a5)
{
  __int16 v5; // r7
  char v6; // lr
  int v8; // [sp+Ch] [bp-4h]

  v5 = __rev16(a5 << 12);
  if ( dword_BC920 )
    v6 = (8 * dword_BC920) | 0x87;
  else
    v6 = -105;
  byte_BC924 = v6;
  byte_BC926 = a3;
  byte_BC927 = a4;
  word_BC928 = v5;
  byte_BC925 = 0;
  word_BC92A = 0;
  sub_16A68(a1, a2, -1, (unsigned __int8 *)&byte_BC924, 8u);
  ++errorcounter[a5];
  return v8;
}
