void __fastcall sub_2D2B0(int a1, int a2, int a3, int a4)
{
  unsigned int v7; // r9
  int v8; // r5
  int i; // r4
  int v11; // r2
  int v12; // r1
  int v13; // r2
  bool v14; // zf

  v7 = (a3 + 1) & 0xFFFFFFEF;
  v8 = a3 == -1;
  for ( i = 0; i != 15; ++i )
  {
    while ( !(a3 == i ? v8 | 1 : v8) )
    {
      if ( ++i == 15 )
        goto LABEL_8;
    }
    v11 = a4 + 4 * i;
    v12 = i;
    ((void (__fastcall *)(int, int, int))loc_1DEBAC)(a2, v12, v11);
  }
LABEL_8:
  if ( a3 == 25 )
    v8 |= 1u;
  if ( v8 )
  {
    if ( dword_469618 )
      v13 = a4 + 64;
    else
      v13 = a4 + 60;
    ((void (__fastcall *)(int, int, int))loc_1DEBAC)(a2, 25, v13);
  }
  if ( !v7 )
  {
    v14 = a2 == 0;
    if ( a2 )
      v14 = a4 == -60;
    if ( !v14 )
      JUMPOUT(0x1DEB38);
    sub_94700(
      "regcache.c",
      1087,
      "%s: Assertion `%s' failed.",
      "void regcache_raw_collect(const regcache*, int, void*)",
      "regcache != NULL && buf != NULL");
    JUMPOUT(0x1DEBEC);
  }
}
