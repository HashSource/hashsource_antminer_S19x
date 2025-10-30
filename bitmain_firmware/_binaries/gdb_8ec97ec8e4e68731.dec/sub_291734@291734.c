int __fastcall sub_291734(int a1)
{
  if ( (a1 & 0xFFFFFF00) != 0 )
    return 0;
  else
    return HIBYTE((*_ctype_b_loc())[a1]) & 1;
}
