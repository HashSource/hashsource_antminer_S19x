_DWORD *__fastcall sub_C682C(_DWORD *a1)
{
  void *v2; // r5
  _DWORD *v3; // r0

  v2 = (void *)a1[41];
  *a1 = off_37D4F4;
  if ( v2 )
  {
    sub_16373C(v2);
    sub_33AC04(v2);
  }
  v3 = (_DWORD *)a1[35];
  if ( v3 != a1 + 37 )
    sub_339E64(v3);
  sub_CC858(a1);
  return a1;
}
