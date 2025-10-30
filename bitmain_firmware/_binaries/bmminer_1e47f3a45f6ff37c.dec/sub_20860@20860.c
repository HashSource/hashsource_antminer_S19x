int __fastcall sub_20860(int a1, void *dest, size_t *a3)
{
  size_t v4; // r4

  v4 = *a3;
  if ( *a3 >= 0x80 )
    v4 = 128;
  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 300) + 119), v4);
  *a3 = v4;
  return 0;
}
