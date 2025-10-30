_DWORD *__fastcall sub_7DB0(int a1)
{
  _DWORD *i; // r3

  for ( i = *(_DWORD **)(key_hash + 4 * (unsigned __int16)(authhashmask & a1)); i && i[6] != a1; i = (_DWORD *)*i )
    ;
  return i;
}
