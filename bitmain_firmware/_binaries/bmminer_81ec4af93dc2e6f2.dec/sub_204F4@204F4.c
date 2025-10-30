int __fastcall sub_204F4(int a1, void *dest, size_t *a3)
{
  size_t v4; // r4

  v4 = *a3;
  if ( *a3 >= 9 )
    v4 = 9;
  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 300) + 62), v4);
  *a3 = v4;
  return 0;
}
