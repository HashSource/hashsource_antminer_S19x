_BYTE *__fastcall sub_55AB4(_DWORD *a1, size_t *a2)
{
  _BYTE *i; // [sp+Ch] [bp-8h]

  for ( i = (_BYTE *)sub_558E4(a1, a2); i; i = (_BYTE *)sub_559B8((int)i, a1, a2) )
  {
    if ( *i == 45 )
    {
      --*a2;
      return ++i;
    }
  }
  return i;
}
