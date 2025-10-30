_BYTE *__fastcall sub_6D3C4(int a1)
{
  if ( (a1 & 0x80) != 0 )
    return sub_6CE6C(a1 & 0xFFFFFF7F, &dword_B4FFC);
  if ( (a1 & 0x100) != 0 )
    return sub_6CE6C(a1 & 0xFFFFFEFF, &dword_B511C);
  return sub_6CE6C(a1, &dword_B4EC4);
}
