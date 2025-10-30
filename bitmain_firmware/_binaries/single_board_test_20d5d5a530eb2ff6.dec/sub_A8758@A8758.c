_DWORD *__fastcall sub_A8758(_DWORD **a1, void *s2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r5

  v3 = *a1;
  if ( !*a1 )
    return v3;
  while ( 1 )
  {
    v4 = (_DWORD *)v3[3];
    if ( !v4 )
      break;
    if ( !memcmp(v3, s2, 8u) )
      return v3;
    v3 = v4;
  }
  if ( !memcmp(v3, s2, 8u) )
    return v3;
  else
    return 0;
}
