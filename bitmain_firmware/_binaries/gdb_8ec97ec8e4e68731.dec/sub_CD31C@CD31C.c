int __fastcall sub_CD31C(int (__fastcall *a1)(int, int), int a2)
{
  int v2; // r4
  int i; // r0

  v2 = dword_478348;
  if ( !dword_478348 )
    return 0;
  for ( i = a1(dword_478348, a2); !i; i = a1(v2, a2) )
  {
    v2 = *(_DWORD *)(v2 + 8);
    if ( !v2 )
      return 0;
  }
  return v2;
}
