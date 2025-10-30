int __fastcall sub_183034(int a1, _DWORD *a2)
{
  int *v2; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r2

  v2 = (int *)(a1 + 8);
  if ( *a2 != ps_getpid_0(a1 + 8) )
    return 0;
  v5 = *v2;
  v6 = v2[1];
  v7 = v2[2];
  if ( a2[1] )
    sub_23E3A8(v5, v6, v7);
  else
    sub_23E38C(v5, v6, v7);
  return 0;
}
