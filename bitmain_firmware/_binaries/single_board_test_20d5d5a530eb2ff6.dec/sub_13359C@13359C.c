int __fastcall sub_13359C(void *a1, int a2, int a3)
{
  if ( *(_DWORD *)(a2 + 4) > a3 )
    return 0;
  memset(a1, 0, 4 * a3);
  if ( *(_DWORD *)a2 )
    memcpy(a1, *(const void **)a2, 4 * *(_DWORD *)(a2 + 4));
  return 1;
}
