bool __fastcall sub_23D9D8(_BYTE *a1, int a2, int a3, int a4, int a5)
{
  int v7; // r0

  if ( !a1 || !*a1 || (a3 ? (v7 = sub_5AF7C(a1, *(_DWORD *)(a5 + 20), a3)) : (v7 = sub_2428A0()), v7) )
  {
    if ( a4 == -1 || a4 == ps_getpid_0(a5 + 8) )
      return *(_DWORD *)(a5 + 44) != 2;
    if ( a1 )
    {
      if ( *a1 )
        sub_946E0("Requested thread not found in requested process");
    }
  }
  return 0;
}
