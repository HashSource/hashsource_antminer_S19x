int __fastcall sub_75850(int a1, int a2, char a3, int a4)
{
  char v4; // lr

  v4 = a4 != 0;
  if ( !a4 )
    v4 &= ~1u;
  return sub_751F0(a1, 1, a2, 60, v4 & 0x9F | (unsigned __int8)(32 * (a3 & 3)) | 0x80008800);
}
