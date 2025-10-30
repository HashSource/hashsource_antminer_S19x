_DWORD *__fastcall sub_791C8(_DWORD *result, unsigned int *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r12
  bool v4; // cf
  unsigned int v5; // r3

  if ( !result || *result != 1114990113 )
    sub_6ECC0(
      (int)"./../lib/isc/buffer.c",
      185,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/buffer.c", 186, 0, "r != ((void *)0)");
  v2 = result[5];
  v3 = result[4];
  v4 = v3 >= v2;
  if ( v3 >= v2 )
  {
    v5 = 0;
  }
  else
  {
    result = (_DWORD *)result[1];
    v5 = v2 - v3;
  }
  if ( v4 )
    *a2 = v5;
  else
    a2[1] = v5;
  if ( v4 )
    a2[1] = v5;
  else
    v3 += (unsigned int)result;
  if ( !v4 )
    *a2 = v3;
  return result;
}
