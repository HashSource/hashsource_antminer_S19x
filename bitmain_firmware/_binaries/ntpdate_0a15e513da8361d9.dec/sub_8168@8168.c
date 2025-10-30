_DWORD *__fastcall sub_8168(int a1)
{
  _DWORD *i; // r3

  for ( i = *(_DWORD **)(key_hash + 4 * (unsigned __int16)(authhashmask & a1)); i; i = (_DWORD *)*i )
  {
    if ( i[6] == a1 )
      break;
  }
  return i;
}
