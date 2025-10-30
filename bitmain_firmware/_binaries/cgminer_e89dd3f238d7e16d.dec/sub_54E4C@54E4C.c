_BYTE *__fastcall sub_54E4C(_DWORD *a1, size_t *a2)
{
  _BYTE *i; // [sp+Ch] [bp-8h]

  for ( i = (_BYTE *)sub_54C6C(a1, a2); i; i = (_BYTE *)sub_54D48((int)i, a1, a2) )
  {
    if ( *i == 45 )
    {
      --*a2;
      return ++i;
    }
  }
  return i;
}
