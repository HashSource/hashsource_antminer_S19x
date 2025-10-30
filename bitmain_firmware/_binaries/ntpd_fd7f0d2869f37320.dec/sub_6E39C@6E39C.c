_BYTE *__fastcall sub_6E39C(int a1)
{
  if ( (a1 & 0x80) != 0 )
    return sub_6DE48(a1 & 0xFFFFFF7F, &dword_B5FFC);
  if ( (a1 & 0x100) != 0 )
    return sub_6DE48(a1 & 0xFFFFFEFF, &dword_B611C);
  return sub_6DE48(a1, &dword_B5EC4);
}
