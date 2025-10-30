__int32_t __fastcall sub_2916AC(int a1)
{
  if ( (a1 & 0xFFFFFF00) != 0 || ((*_ctype_b_loc())[a1] & 0x100) == 0 )
    return a1;
  else
    return (*_ctype_tolower_loc())[a1];
}
