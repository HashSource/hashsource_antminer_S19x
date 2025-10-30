void __fastcall sub_E0830(_BYTE *a1)
{
  int v1; // r0
  int v2; // r3
  _DWORD *v3; // r0

  if ( a1 && *a1 )
    sub_946E0("Invalid argument.");
  v1 = sub_23E408(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( !v1 )
    sub_946E0("No thread.");
  v2 = *(_DWORD *)(v1 + 256);
  v3 = (_DWORD *)(v1 + 256);
  if ( v2 == 1 )
  {
    v3[15] = 0;
    v3[16] = 0;
  }
  sub_91DC8(v3);
}
