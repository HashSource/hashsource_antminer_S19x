_DWORD *__fastcall sub_25C45C(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r3

  v2 = a1[3];
  if ( v2 )
    sub_1541B8(v2);
  v3 = (_DWORD *)a1[1];
  if ( v3 )
    *v3 = a1[2];
  if ( *a1 == 1 )
  {
    sub_22F048();
    return a1;
  }
  else if ( *a1 )
  {
    if ( *a1 == 2 )
      sub_22EFF4();
    return a1;
  }
  else
  {
    sub_22EF7C();
    return a1;
  }
}
