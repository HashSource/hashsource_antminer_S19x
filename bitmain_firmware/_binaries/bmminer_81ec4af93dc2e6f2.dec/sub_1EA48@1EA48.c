int __fastcall sub_1EA48(int a1, const void *a2, size_t *a3)
{
  size_t v4; // r4
  int v5; // r0

  v4 = *a3;
  v5 = *(_DWORD *)(a1 + 300);
  if ( *a3 >= 0x18 )
    v4 = 24;
  memcpy((void *)(v5 + 71), a2, v4);
  *a3 = v4;
  return 0;
}
