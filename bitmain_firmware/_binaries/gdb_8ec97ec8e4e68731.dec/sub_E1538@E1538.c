void __fastcall sub_E1538(_BYTE *a1)
{
  int v1; // r0

  if ( a1 && *a1 )
    sub_946E0("Invalid argument.");
  v1 = sub_23E408(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( !v1 )
    sub_946E0("No thread.");
  sub_E1378(v1);
}
