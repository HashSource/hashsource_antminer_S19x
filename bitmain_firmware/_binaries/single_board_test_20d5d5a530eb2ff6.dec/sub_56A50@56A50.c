_WORD *__fastcall sub_56A50(_WORD *a1, unsigned int a2)
{
  bool v2; // cc

  v2 = a1 != 0;
  if ( a1 )
    v2 = a2 > 0x40037;
  if ( !v2 || (_DWORD)a1 << 30 )
    return 0;
  else
    return sub_52D48(a1);
}
