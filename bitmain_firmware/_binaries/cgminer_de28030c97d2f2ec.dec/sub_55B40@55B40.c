_BYTE *__fastcall sub_55B40(int a1, _DWORD *a2, size_t *a3)
{
  _BYTE *i; // [sp+Ch] [bp-8h]

  for ( i = (_BYTE *)sub_559B8(a1, a2, a3); i; i = (_BYTE *)sub_559B8((int)i, a2, a3) )
  {
    if ( *i == 45 )
    {
      --*a3;
      return ++i;
    }
  }
  return i;
}
