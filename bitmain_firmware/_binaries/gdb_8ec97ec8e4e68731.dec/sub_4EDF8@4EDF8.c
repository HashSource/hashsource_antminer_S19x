void __fastcall sub_4EDF8(int a1, int a2, int a3)
{
  int v6; // r5
  int i; // r4
  int v8; // r1
  int v9; // r3
  int v10; // r2
  int v11; // r0

  v6 = a2;
  for ( i = 0; i != 15; ++i )
  {
    v8 = i;
    ((void (__fastcall *)(int, int, int))loc_1DE9C8)(a1, v8, v6);
    v6 += 4;
  }
  if ( a3 )
  {
    v9 = *(_DWORD *)(a2 + 64);
    v10 = a2;
  }
  else
  {
    v10 = a2 + 60;
  }
  if ( a3 )
  {
    v9 &= 0xFF0FFFFF;
    *(_DWORD *)(v10 + 64) = v9;
    v10 += 64;
  }
  ((void (__fastcall *)(int, int, int, int))loc_1DE9C8)(a1, 25, v10, v9);
  v11 = sub_1DD58C(a1);
  *(_DWORD *)(a2 + 60) = ((int (__fastcall *)(int, _DWORD))loc_169FA0)(v11, *(_DWORD *)(a2 + 60));
  if ( !a1 )
  {
    sub_94700(
      "regcache.c",
      1006,
      "%s: Assertion `%s' failed.",
      "void regcache_raw_supply(regcache*, int, const void*)",
      "regcache != NULL");
    JUMPOUT(0x1DEA04);
  }
  JUMPOUT(0x1DE920);
}
