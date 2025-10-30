_BYTE *__fastcall sub_64AC0(int a1, unsigned int *a2, size_t *a3)
{
  _BYTE *v5; // r0

  v5 = (_BYTE *)sub_647D8(a1, a2, a3);
  if ( !v5 )
    return 0;
  while ( *v5 != 45 )
  {
    v5 = (_BYTE *)sub_647D8((int)v5, a2, a3);
    if ( !v5 )
      return 0;
  }
  --*a3;
  return v5 + 1;
}
