__int32_t __fastcall sub_2916F0(int a1)
{
  if ( (a1 & 0xFFFFFF00) != 0 || ((*_ctype_b_loc())[a1] & 0x200) == 0 )
    return a1;
  else
    return (*_ctype_toupper_loc())[a1];
}
