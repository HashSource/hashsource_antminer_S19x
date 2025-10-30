_DWORD *__fastcall sub_1273EC(int a1, _DWORD *a2)
{
  _DWORD *result; // r0
  _DWORD *v4; // r5

  if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFEFF) == 0xA )
  {
    result = sub_B8AEC(*(_BYTE **)(a1 + 8), *(_DWORD *)a1, a2);
    v4 = result;
    if ( result )
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x100) != 0 )
      {
        sub_B86BC((_BOOL4)result, 1);
        return v4;
      }
    }
    else
    {
      sub_D0048(13, 228, 105, (int)"crypto/asn1/a_int.c", 505);
      return 0;
    }
  }
  else
  {
    sub_D0048(13, 228, 225, (int)"crypto/asn1/a_int.c", 499);
    return 0;
  }
  return result;
}
