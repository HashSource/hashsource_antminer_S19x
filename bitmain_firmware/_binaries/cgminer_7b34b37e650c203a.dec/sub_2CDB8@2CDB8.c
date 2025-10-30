_BYTE *__fastcall sub_2CDB8(_BYTE *result, unsigned int a2)
{
  void *v2; // r3
  _BYTE *v3; // r4

  v2 = (void *)*((_DWORD *)result + 77);
  *((_DWORD *)result + 17) = bswap32(a2);
  if ( v2 )
  {
    v3 = result;
    free(v2);
    result = sub_22C24((int)(v3 + 68), 4);
    *((_DWORD *)v3 + 77) = result;
  }
  return result;
}
