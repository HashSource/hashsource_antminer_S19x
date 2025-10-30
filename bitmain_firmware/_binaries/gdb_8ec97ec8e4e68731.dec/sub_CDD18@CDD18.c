int sub_CDD18()
{
  int v0; // r3
  int v1; // r2
  int v2; // r12
  int v3; // r1
  int result; // r0
  int v5; // t1

  v0 = dword_478368;
  if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
  {
    v1 = *(_DWORD *)dword_478368;
    if ( *(_DWORD *)dword_478368 )
    {
      v2 = dword_487D2C;
      v3 = dword_478368 + 4 * dword_47836C - 4;
      do
      {
        result = *(_DWORD *)(v1 + 48);
        if ( result == v2 )
          *(_BYTE *)(v1 + 39) = 0;
        if ( v0 == v3 )
          break;
        v5 = *(_DWORD *)(v0 + 4);
        v0 += 4;
        v1 = v5;
      }
      while ( v5 );
    }
  }
  return result;
}
