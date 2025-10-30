int __fastcall sub_2911D0(wint_t a1)
{
  char v1; // r4
  int result; // r0

  v1 = a1;
  if ( iswalnum(a1) )
    return 1;
  result = dword_48B6C0;
  if ( dword_48B6C0 )
    return strchr("/-_=~.#$", v1 & 0x7F) != 0;
  return result;
}
