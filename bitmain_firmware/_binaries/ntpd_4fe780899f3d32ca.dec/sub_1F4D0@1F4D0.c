int __fastcall sub_1F4D0(int a1)
{
  int v2; // r0

  word_B94A0 = __rev16(a1 << 8);
  word_B94A6 = 0;
  byte_B949D = ~(~((byte_B96A4 & 0x1Fu) << 26) >> 26);
  ++numctlerrors;
  if ( !byte_B96AD || !sys_authenticate )
    return sub_16A68((struct sockaddr *)dword_B9494, dword_B96B4, -3, (unsigned __int8 *)&byte_B949C, 0xCu);
  v2 = sub_6278C(dword_B96B0, &byte_B949C, 12);
  return sub_16A68((struct sockaddr *)dword_B9494, dword_B96B4, -2, (unsigned __int8 *)&byte_B949C, v2 + 12);
}
