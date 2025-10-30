_DWORD *__fastcall sub_29248C(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r6
  _DWORD *i; // r5
  _DWORD *v4; // r0

  v1 = (_DWORD *)a1;
  if ( !a1 )
    return 0;
  v2 = sub_292428(a1);
  for ( i = v2; ; i = v4 )
  {
    v1 = (_DWORD *)*v1;
    if ( !v1 )
      break;
    v4 = sub_292428((int)v1);
    if ( v2 )
      *i = v4;
    else
      v2 = v4;
  }
  *i = 0;
  return v2;
}
