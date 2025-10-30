_DWORD *__fastcall sub_A2C80(_DWORD *result, _DWORD *a2, int *a3)
{
  int v3; // r3
  int v4; // r3

  v3 = result[345];
  if ( v3 )
  {
    result = (_DWORD *)result[344];
    *a2 = v3;
    *a3 = (int)result;
  }
  else
  {
    *a2 = &unk_1A9DB8;
    if ( (*(_DWORD *)(result[257] + 16) & 0x30000) != 0 )
      v4 = 2;
    else
      v4 = 3;
    *a3 = v4;
  }
  return result;
}
