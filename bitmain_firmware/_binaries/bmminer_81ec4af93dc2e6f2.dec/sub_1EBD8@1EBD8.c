int __fastcall sub_1EBD8(int a1, const void *a2, size_t *a3)
{
  size_t v4; // r4
  int v5; // r0

  v4 = *a3;
  v5 = *(_DWORD *)(a1 + 300);
  if ( *a3 >= 0xA )
    v4 = 10;
  memcpy((void *)(v5 + 38), a2, v4);
  *a3 = v4;
  return 0;
}
