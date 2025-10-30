_DWORD *__fastcall sub_238B48(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v2 = (_DWORD *)a1[16];
  *a1 = off_3E9AC0;
  if ( v2 != a1 + 18 )
    sub_339E64(v2);
  v3 = (_DWORD *)a1[9];
  if ( v3 != a1 + 11 )
    sub_339E64(v3);
  v4 = (_DWORD *)a1[1];
  if ( v4 != a1 + 3 )
    sub_339E64(v4);
  return a1;
}
