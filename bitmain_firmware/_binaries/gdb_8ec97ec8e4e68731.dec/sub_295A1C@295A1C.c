int __fastcall sub_295A1C(int a1)
{
  if ( (dword_48AAA0 & 0x80000) == 0 )
  {
    sub_28464C();
    if ( (dword_48AAA0 & 0x80000) == 0 )
      return sub_294EA8(a1);
  }
  dword_48BAA4 = (int)sub_293AC4(a1);
  off_48BAA0 = (int (__fastcall *)(_DWORD))sub_294F14;
  return 0;
}
