int sub_CDB70()
{
  int v0; // r0
  int v1; // r6
  int v2; // r0
  int *v3; // r4
  int v4; // t1
  int result; // r0

  v0 = sub_183A3C();
  if ( dword_478368 >= (unsigned int)(dword_478368 + 4 * dword_47836C) )
    return 0;
  v1 = v0;
  v2 = *(_DWORD *)dword_478368;
  if ( !*(_DWORD *)dword_478368 )
    return 0;
  v3 = (int *)(dword_478368 + 4);
  while ( 1 )
  {
    if ( *(_DWORD *)(v2 + 48) == *(_DWORD *)(v1 + 36) )
    {
      if ( *(_BYTE *)(v2 + 39) )
      {
        if ( !*(_DWORD *)(v2 + 152) )
        {
          result = sub_CC420(v2);
          if ( result )
            break;
        }
      }
    }
    if ( (unsigned int)v3 < dword_478368 + 4 * dword_47836C )
    {
      v4 = *v3++;
      v2 = v4;
      if ( v4 )
        continue;
    }
    return 0;
  }
  return result;
}
