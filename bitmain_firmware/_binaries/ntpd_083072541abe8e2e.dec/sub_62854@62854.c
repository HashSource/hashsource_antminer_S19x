bool __fastcall sub_62854(int a1, int a2, int a3, unsigned int a4)
{
  int v8; // r0
  bool v9; // cc

  ++authdecryptions;
  if ( !a1 )
    return 0;
  v8 = sub_6204C(a1);
  v9 = v8 != 0;
  if ( v8 )
    v9 = a4 > 3;
  return v9 && sub_60770(cache_type, cache_secret, cache_secretsize, a2, a3, a4);
}
