int __fastcall sub_281A08(int a1, int a2)
{
  if ( a1 < 0 )
    return sub_281A88(-a1);
  if ( dword_4900D8 )
  {
    if ( (a2 & 0xFFFFFF00) == 0 && ((*_ctype_b_loc())[a2] & 0x100) != 0 )
      sub_281488(a1);
    else
      sub_28181C(a1);
    return 0;
  }
  else
  {
    sub_2945C8();
    return 0;
  }
}
