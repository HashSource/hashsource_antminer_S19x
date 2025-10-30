int __fastcall sub_281CAC(int a1, int a2)
{
  if ( a1 < 0 )
  {
    sub_2945C8();
    return -1;
  }
  else if ( (a2 & 0xFFFFFF00) == 0 && ((*_ctype_b_loc())[a2] & 0x100) != 0 )
  {
    sub_281570(a1);
    return 0;
  }
  else
  {
    sub_281B18(a1);
    return 0;
  }
}
