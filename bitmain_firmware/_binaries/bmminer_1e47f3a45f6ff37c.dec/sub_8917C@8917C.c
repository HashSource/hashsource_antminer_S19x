int __fastcall sub_8917C(int a1, int a2)
{
  int v4; // [sp+Ch] [bp-8h]

  if ( *(_DWORD *)(a1 + 6268) == 552052 || *(_DWORD *)(a1 + 6268) == 552388 )
  {
    v4 = sub_8C498(a2, a1 + 6272);
    if ( v4 )
      *(_DWORD *)(a1 + 8324) = *(_DWORD *)(v4 + 1028);
  }
  return 0;
}
