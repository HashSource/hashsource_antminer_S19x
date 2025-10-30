int __fastcall sub_1AA48(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r6
  int v6; // r0

  v2 = sub_16F654();
  v3 = sub_163E78(v2);
  v4 = dword_4714EC;
  if ( !dword_4714EC )
  {
    v5 = v3;
    v6 = sub_16F654();
    if ( *(_DWORD *)(((int (__fastcall *)(int))loc_163EB0)(v6) + 12) == 39 )
      return sub_25A418(
               a1,
               "The current ARM floating point model is \"auto\" (currently \"%s\").\n",
               (&off_349348)[*(_DWORD *)(v5 + 4) + 78]);
    v4 = dword_4714EC;
  }
  return sub_25A418(a1, "The current ARM floating point model is \"%s\".\n", (&off_349348)[v4 + 78]);
}
