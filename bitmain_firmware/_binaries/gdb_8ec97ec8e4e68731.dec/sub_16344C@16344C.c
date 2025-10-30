void __fastcall __noreturn sub_16344C(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // r6
  _DWORD *v7; // r9
  _DWORD *v9; // r0
  _DWORD *i; // r4
  _DWORD *v11; // r0

  sub_339EF8(a1);
  v9 = (_DWORD *)sub_339E78(a1);
  if ( v6 )
  {
    for ( i = v7; v6 != i; ++i )
    {
      v11 = i;
      v9 = sub_163290(v11);
    }
  }
  else
  {
    v9 = (_DWORD *)*a6;
    if ( *a6 )
      v9 = (_DWORD *)((int (*)(void))loc_1625A8)();
  }
  if ( v7 )
    sub_339E64(v7);
  sub_33A7B8(v9);
}
