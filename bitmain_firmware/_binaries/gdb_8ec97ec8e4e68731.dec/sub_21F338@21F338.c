int __fastcall sub_21F338(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
    sub_21F1F8(
      v2,
      *(_DWORD *)a1,
      **(_DWORD **)(a1 + 4),
      *(_DWORD *)(a1 + 8),
      **(char ***)(a1 + 12),
      **(char ***)(a1 + 16),
      0);
  return 0;
}
