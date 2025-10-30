void **__fastcall sub_2160B0(void **a1)
{
  char *v2; // r5
  char *v3; // r6
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  bool v6; // zf

  v2 = (char *)*a1;
  v3 = (char *)a1[1];
  if ( *a1 != v3 )
  {
    v4 = v2 + 8;
    do
    {
      v5 = (_DWORD *)*(v4 - 2);
      v2 += 28;
      v6 = v5 == v4;
      v4 += 7;
      if ( !v6 )
        sub_339E64(v5);
    }
    while ( v3 != v2 );
    v3 = (char *)*a1;
  }
  if ( v3 )
    sub_339E64(v3);
  return a1;
}
