int __fastcall sub_281A88(int a1, int a2)
{
  if ( a1 < 0 )
    return sub_281A08(-a1, a2);
  if ( dword_4900DC - 1 <= dword_4900D8 )
  {
    sub_2945C8();
    return 0;
  }
  else
  {
    if ( (a2 & 0xFFFFFF00) == 0 && ((*_ctype_b_loc())[a2] & 0x100) != 0 )
      sub_281380(a1);
    else
      sub_281690(a1);
    return 0;
  }
}
