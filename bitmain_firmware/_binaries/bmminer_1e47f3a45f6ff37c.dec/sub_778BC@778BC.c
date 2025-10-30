int __fastcall sub_778BC(int a1, const void *a2, size_t a3)
{
  void *v7; // [sp+14h] [bp-8h]

  if ( !a1 || *(_DWORD *)a1 != 2 || !a2 )
    return -1;
  v7 = sub_74E5C(a2, a3);
  if ( !v7 )
    return -1;
  sub_74DE8(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = a3;
  return 0;
}
