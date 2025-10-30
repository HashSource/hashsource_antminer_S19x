_DWORD *__fastcall sub_170090(_DWORD *a1, _DWORD **a2)
{
  _DWORD *v2; // r3

  v2 = (_DWORD *)*a1;
  if ( !*a1 )
    return sub_16FF74(a1, a2);
  if ( a2 )
  {
    if ( !*a2 )
    {
      *a2 = v2;
      return v2;
    }
    return sub_16FF74(a1, a2);
  }
  return v2;
}
