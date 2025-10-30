int sub_CEEA8()
{
  int result; // r0
  int v1; // r5
  _DWORD *v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // r3
  int v5; // [sp+4h] [bp-4h] BYREF

  result = off_489A24(&dword_4899A0);
  if ( result )
  {
    if ( off_489A30(&dword_4899A0, &v5) )
    {
      v1 = dword_478348;
      if ( !dword_478348 )
        return 1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)(v1 + 12) - 7) <= 2 )
          {
            v2 = *(_DWORD **)(v1 + 28);
            *(_DWORD *)(v1 + 208) = 0;
            if ( v2 )
              break;
          }
LABEL_5:
          v1 = *(_DWORD *)(v1 + 8);
          if ( !v1 )
            return 1;
        }
        while ( *(_UNKNOWN **)(v1 + 4) != &unk_478374 )
        {
          if ( off_489A34() )
            goto LABEL_13;
LABEL_10:
          v2 = (_DWORD *)*v2;
          if ( !v2 )
            goto LABEL_5;
        }
        if ( (v5 & *(_DWORD *)(v1 + 216)) != (v2[13] & *(_DWORD *)(v1 + 216)) )
          goto LABEL_10;
LABEL_13:
        *(_DWORD *)(v1 + 208) = 2;
        v1 = *(_DWORD *)(v1 + 8);
        if ( !v1 )
          return 1;
      }
    }
    v3 = (_DWORD *)dword_478348;
    if ( dword_478348 )
    {
      do
      {
        if ( (unsigned int)(v3[3] - 7) <= 2 )
          v3[52] = 1;
        v3 = (_DWORD *)v3[2];
      }
      while ( v3 );
    }
    return 1;
  }
  else
  {
    v4 = (_DWORD *)dword_478348;
    if ( dword_478348 )
    {
      do
      {
        if ( (unsigned int)(v4[3] - 7) <= 2 )
          v4[52] = 0;
        v4 = (_DWORD *)v4[2];
      }
      while ( v4 );
    }
  }
  return result;
}
