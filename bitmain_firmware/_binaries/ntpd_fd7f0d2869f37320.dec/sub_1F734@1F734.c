int __fastcall sub_1F734(__int16 a1)
{
  int v2; // r0

  word_BA4A0 = a1;
  word_BA4A6 = 0;
  byte_BA49D = ~(~((byte_BA6A4 & 0x1Fu) << 26) >> 26);
  ++numctlerrors;
  if ( !byte_BA6AD || !sys_authenticate )
    return sub_16CC0((struct sockaddr *)dword_BA494, dword_BA6B4, -3, (unsigned __int8 *)&byte_BA49C, 0xCu);
  v2 = sub_636A4(dword_BA6B0, &byte_BA49C, 12);
  return sub_16CC0((struct sockaddr *)dword_BA494, dword_BA6B4, -2, (unsigned __int8 *)&byte_BA49C, v2 + 12);
}
