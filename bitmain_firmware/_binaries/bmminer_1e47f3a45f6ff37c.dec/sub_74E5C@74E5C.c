void *__fastcall sub_74E5C(const void *a1, size_t a2)
{
  void *dest; // [sp+Ch] [bp-8h]

  dest = sub_74DA0(a2 + 1);
  if ( !dest )
    return 0;
  memcpy(dest, a1, a2);
  *((_BYTE *)dest + a2) = 0;
  return dest;
}
