int __fastcall sub_6D4DC(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r12
  _BYTE *v4; // lr
  int v5; // r2
  unsigned __int8 *v6; // r3

  if ( !a3 )
  {
    v6 = a2;
LABEL_8:
    while ( *v6++ )
      ;
    return v6 - a2 - 1;
  }
  v3 = a2;
  v4 = &a1[a3 - 1];
  while ( 1 )
  {
    v6 = v3 + 1;
    if ( v4 == a1 )
      break;
    v5 = *v3++;
    *a1++ = v5;
    if ( !v5 )
      return v6 - a2 - 1;
  }
  *v4 = 0;
  v6 = v3 + 1;
  if ( *v3 )
    goto LABEL_8;
  return v6 - a2 - 1;
}
