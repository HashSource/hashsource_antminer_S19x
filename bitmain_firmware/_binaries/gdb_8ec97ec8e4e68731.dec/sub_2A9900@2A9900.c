int __fastcall sub_2A9900(int result, int a2)
{
  char v2; // r3

  v2 = *(_BYTE *)(result + 24);
  *(_DWORD *)(result + 108) = a2;
  if ( (v2 & 0x30) == 0x20 )
    *(_BYTE *)(result + 24) = v2 & 0xCF | 0x10;
  *(_DWORD *)(result + 20) |= 0x4000u;
  return result;
}
