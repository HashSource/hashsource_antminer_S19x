int __fastcall sub_1EBC8(int a1, void *dest, size_t *a3)
{
  size_t v4; // r4

  v4 = *a3;
  if ( *a3 >= 0x18 )
    v4 = 24;
  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 300) + 71), v4);
  *a3 = v4;
  return 0;
}
