bool __fastcall sub_4A5EC(int a1, int *a2)
{
  int v4; // r5
  bool v5; // zf
  int v6; // r0

  v4 = *(_DWORD *)(sub_183688(a1) + 12);
  v5 = v4 == ps_getpid_0(a1 + 8);
  v6 = *a2;
  if ( v5 )
    *a2 = ++v6;
  return v6 > 1;
}
