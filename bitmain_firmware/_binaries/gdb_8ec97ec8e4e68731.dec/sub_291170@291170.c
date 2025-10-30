int __fastcall sub_291170(int a1)
{
  int result; // r0

  if ( (a1 & 0xFFFFFF00) == 0 && ((*_ctype_b_loc())[a1] & 8) != 0 )
    return 1;
  result = dword_48B6C0;
  if ( dword_48B6C0 )
    return strchr("/-_=~.#$", a1) != 0;
  return result;
}
