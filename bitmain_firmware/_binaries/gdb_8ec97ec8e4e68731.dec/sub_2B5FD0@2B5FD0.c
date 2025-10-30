_DWORD *__fastcall sub_2B5FD0(_DWORD *result)
{
  int v1; // r3
  int v2; // r3

  if ( result )
  {
    v1 = result[37];
    if ( v1
      && *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4) == 5
      && (v2 = *(_DWORD *)(v1 + 160)) != 0
      && (*(_BYTE *)(v2 + 2340) & 0x3F) == 4 )
    {
      result = (_DWORD *)result[35];
      if ( result )
        return (_DWORD *)result[43];
    }
    else
    {
      return 0;
    }
  }
  return result;
}
