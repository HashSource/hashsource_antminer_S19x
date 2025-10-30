int __fastcall sub_E0A48(_BYTE *a1)
{
  int v1; // r0
  int v2; // r5
  int *v3; // r0
  int *v4; // r4
  char *v5; // r0
  int result; // r0
  _DWORD *v7; // r1

  if ( a1 && *a1 )
    sub_946E0("Invalid argument.");
  v1 = sub_23E408(dword_4878EC, dword_4878F0, dword_4878F4);
  v2 = v1;
  if ( !v1 )
    sub_946E0("No thread.");
  if ( !*(_DWORD *)(v1 + 252) || (v3 = (int *)sub_23261C(), (v4 = v3) == 0) )
    sub_946E0("No btrace configuration.");
  v5 = sub_91C44(*v3);
  result = sub_259858("Format: %s.\n", v5);
  if ( *v4 == 1 )
  {
    v7 = *(_DWORD **)(v2 + 260);
    if ( v7 )
      v7 = (_DWORD *)*v7;
    return sub_259858("Number of packets: %u.\n", v7);
  }
  return result;
}
