int __fastcall sub_6E4B4(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r3
  _BYTE *v4; // r2
  int v5; // t1

  if ( !a3 )
  {
    v3 = a2;
LABEL_8:
    while ( *v3++ )
      ;
    return v3 - a2 - 1;
  }
  v3 = a2;
  v4 = &a1[a3 - 1];
  while ( a1 != v4 )
  {
    v5 = *v3++;
    *a1++ = v5;
    if ( !v5 )
      return v3 - a2 - 1;
  }
  *a1 = 0;
  if ( *v3++ )
    goto LABEL_8;
  return v3 - a2 - 1;
}
