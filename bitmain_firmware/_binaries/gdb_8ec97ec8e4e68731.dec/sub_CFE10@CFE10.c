void sub_CFE10()
{
  int v0; // r4
  int *v1; // r5
  int v2; // t1
  unsigned int v3; // r3
  bool v4; // cc

  if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
  {
    v0 = *(_DWORD *)dword_478368;
    if ( *(_DWORD *)dword_478368 )
    {
      v1 = (int *)(dword_478368 + 4);
      while ( 1 )
      {
        v3 = *(_DWORD *)(*(_DWORD *)(v0 + 16) + 12);
        v4 = v3 > 0x1F;
        if ( v3 != 31 )
          v4 = v3 - 1 > 1;
        if ( v4 )
        {
          if ( v3 - 27 <= 2 && *(_DWORD *)(v0 + 48) == dword_487D2C )
          {
LABEL_15:
            if ( !*(_BYTE *)(v0 + 37) && sub_20192C() )
              *(_BYTE *)(v0 + 37) = 1;
          }
        }
        else if ( *(_DWORD *)(v0 + 48) == dword_487D2C )
        {
          goto LABEL_15;
        }
        if ( (unsigned int)v1 < dword_478368 + 4 * dword_47836C )
        {
          v2 = *v1++;
          v0 = v2;
          if ( v2 )
            continue;
        }
        return;
      }
    }
  }
}
