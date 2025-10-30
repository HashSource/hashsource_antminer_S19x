int __fastcall sub_1EC90(int a1, void *dest, size_t *a3)
{
  size_t v4; // r4

  v4 = *a3;
  if ( *a3 >= 4 )
    v4 = 4;
  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 300) + 53), v4);
  *a3 = v4;
  return 0;
}
