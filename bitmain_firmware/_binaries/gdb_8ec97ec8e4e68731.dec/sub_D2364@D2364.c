int __fastcall sub_D2364(int result)
{
  int v1; // r3
  int v2; // r2
  int v3; // r12
  int v4; // r1
  int v5; // t1

  v1 = dword_478368;
  if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
  {
    v2 = *(_DWORD *)dword_478368;
    if ( *(_DWORD *)dword_478368 )
    {
      v3 = dword_478368 + 4 * dword_47836C - 4;
      do
      {
        v4 = *(_DWORD *)(v2 + 232);
        if ( v4 && *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4) == result )
          *(_DWORD *)(v2 + 232) = 0;
        if ( v1 == v3 )
          break;
        v5 = *(_DWORD *)(v1 + 4);
        v1 += 4;
        v2 = v5;
      }
      while ( v5 );
    }
  }
  return result;
}
