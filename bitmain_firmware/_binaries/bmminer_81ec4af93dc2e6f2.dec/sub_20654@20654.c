int __fastcall sub_20654(int a1, const void *a2, size_t *a3)
{
  size_t v4; // r4
  int v5; // r0

  v4 = *a3;
  v5 = *(_DWORD *)(a1 + 300);
  if ( *a3 >= 0xE )
    v4 = 14;
  memcpy((void *)(v5 + 23), a2, v4);
  *a3 = v4;
  return 0;
}
