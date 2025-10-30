int __fastcall sub_29167C(int a1)
{
  if ( (a1 & 0xFFFFFF00) != 0 )
    return 0;
  else
    return ((*_ctype_b_loc())[a1] >> 10) & 1;
}
