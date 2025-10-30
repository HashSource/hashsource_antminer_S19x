size_t __fastcall sub_8AC08(int a1, void *dest, size_t a3)
{
  size_t v4; // r4

  if ( !a3 )
    return 32;
  if ( a3 >= 0x20 )
    a3 = 32;
  v4 = a3;
  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 124) + 172), a3);
  return v4;
}
