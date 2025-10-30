int __fastcall sub_AE59C(int a1, int a2)
{
  int v3; // r3

  if ( a1 != 2 )
    return 1;
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 8);
  if ( v3 )
    sub_E07F8(*(_DWORD *)(v3 + 8), *(_DWORD *)v3);
  return 1;
}
