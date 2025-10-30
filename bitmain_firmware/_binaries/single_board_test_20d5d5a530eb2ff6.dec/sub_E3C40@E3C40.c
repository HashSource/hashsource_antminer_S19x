int __fastcall sub_E3C40(_BYTE *a1, void *dest, size_t a3)
{
  int v3; // r4

  v3 = 2 * ((*a1 >> 3) & 7) + 2;
  if ( v3 != a3 )
    return 0;
  memcpy(dest, a1 + 16, a3);
  return v3;
}
