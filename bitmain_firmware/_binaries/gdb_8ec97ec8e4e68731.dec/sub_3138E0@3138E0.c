int __fastcall sub_3138E0(int result)
{
  unsigned int v1; // r3
  unsigned int *v2; // r2
  unsigned int v3; // r3

  if ( !result )
    return result;
  while ( 1 )
  {
    v1 = *(_DWORD *)result;
    if ( *(_DWORD *)result <= 0x20u )
      break;
    if ( v1 != 76 && (v1 < 0x4C || v1 - 78 > 1) )
      return 0;
LABEL_16:
    result = *(_DWORD *)(result + 8);
    if ( !result )
      return result;
  }
  if ( v1 >= 0x1C )
    goto LABEL_16;
  if ( v1 == 4 )
  {
    v2 = *(unsigned int **)(result + 8);
    if ( !v2 )
      return 1;
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 > 8 )
        break;
      if ( v3 >= 7 )
        return 0;
      if ( *v2 - 1 <= 1 )
      {
        v2 = (unsigned int *)v2[3];
        if ( v2 )
          continue;
      }
      return 1;
    }
    if ( v3 != 52 )
      return 1;
  }
  return 0;
}
