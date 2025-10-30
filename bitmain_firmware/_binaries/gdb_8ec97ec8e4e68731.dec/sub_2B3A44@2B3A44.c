void __fastcall sub_2B3A44(int a1, int a2)
{
  int v2; // r0

  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 28);
    if ( *(_DWORD *)(v2 + 44) == 4 && !*(_DWORD *)(v2 + 388) )
      sub_2FCBD4();
  }
}
