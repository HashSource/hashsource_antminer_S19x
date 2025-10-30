_DWORD *__fastcall sub_231934(int a1)
{
  _DWORD *i; // r3

  for ( i = (_DWORD *)dword_4899A0; i && i[78] != a1; i = (_DWORD *)*i )
    ;
  return i;
}
