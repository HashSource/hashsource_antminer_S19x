int __fastcall sub_48668(int a1, const void *a2, size_t a3)
{
  _BYTE *v6; // r7

  if ( !a1 )
    return -1;
  if ( *(_DWORD *)a1 != 2 || a2 == 0 )
    return -1;
  v6 = sub_4777C(a2, a3);
  if ( !v6 )
    return -1;
  sub_47764(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = a3;
  return 0;
}
