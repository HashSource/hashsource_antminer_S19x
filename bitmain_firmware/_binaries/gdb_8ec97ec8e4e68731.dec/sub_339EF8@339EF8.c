int sub_339EF8()
{
  int *v0; // r2
  int result; // r0
  int v2; // r3
  int v3; // r3

  v0 = (int *)sub_339E34();
  result = *v0;
  if ( *v0 )
  {
    if ( *(_BYTE *)(result + 32) != 71
      || *(_BYTE *)(result + 33) != 78
      || *(_BYTE *)(result + 34) != 85
      || *(_BYTE *)(result + 35) != 67
      || *(_BYTE *)(result + 36) != 67
      || *(_BYTE *)(result + 37) != 43
      || *(_BYTE *)(result + 38) != 43
      || *(unsigned __int8 *)(result + 39) > 1u )
    {
      *v0 = 0;
      return sub_348580(result + 32);
    }
    v2 = *(_DWORD *)(result + 20);
    if ( v2 < 0 )
    {
      v3 = v2 + 1;
      if ( !v3 )
        *v0 = *(_DWORD *)(result + 16);
    }
    else
    {
      v3 = v2 - 1;
      if ( !v3 )
      {
        *v0 = *(_DWORD *)(result + 16);
        return sub_348580(result + 32);
      }
      if ( v3 < 0 )
        sub_339780();
    }
    *(_DWORD *)(result + 20) = v3;
  }
  return result;
}
