int __fastcall sub_39FEC(int a1, void *dest, size_t *a3)
{
  size_t v4; // r4

  v4 = *a3;
  if ( *a3 >= 0xA )
    v4 = 10;
  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 300) + 38), v4);
  *a3 = v4;
  return 0;
}
