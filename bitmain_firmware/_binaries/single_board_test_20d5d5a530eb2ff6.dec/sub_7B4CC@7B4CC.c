int __fastcall sub_7B4CC(int a1, const void *a2, size_t a3)
{
  _BYTE *v5; // r6

  if ( !a1 )
    return -1;
  if ( *(_DWORD *)a1 != 2 )
    return -1;
  if ( !a2 )
    return -1;
  v5 = sub_7ACE8(a2, a3);
  if ( !v5 )
    return -1;
  sub_7ACD8(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 12) = a3;
  return 0;
}
