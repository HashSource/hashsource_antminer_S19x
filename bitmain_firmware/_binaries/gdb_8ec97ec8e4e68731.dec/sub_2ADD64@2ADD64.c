int __fastcall sub_2ADD64(int a1, int (__fastcall *a2)(int, int, int), int a3)
{
  int v3; // r4
  int i; // r0

  v3 = *(_DWORD *)(a1 + 100);
  if ( !v3 )
    return 0;
  for ( i = a2(a1, v3, a3); !i; i = a2(a1, v3, a3) )
  {
    v3 = *(_DWORD *)(v3 + 12);
    if ( !v3 )
      return 0;
  }
  return v3;
}
