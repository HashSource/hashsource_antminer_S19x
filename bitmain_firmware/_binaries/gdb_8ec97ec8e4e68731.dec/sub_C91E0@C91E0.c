int __fastcall sub_C91E0(int result)
{
  int v1; // r4
  int v2; // r11
  int v3; // r7
  int *v4; // r5
  int v5; // t1
  int v6; // r8
  unsigned int v7; // r3
  bool v8; // cc

  if ( dword_478368 < (unsigned int)(dword_478368 + 4 * dword_47836C) )
  {
    v1 = *(_DWORD *)dword_478368;
    if ( *(_DWORD *)dword_478368 )
    {
      v2 = 0;
      v3 = result;
      v4 = (int *)(dword_478368 + 4);
      do
      {
        if ( *(_DWORD *)(v3 + 1032) == *(_DWORD *)(v1 + 48) && !*(_BYTE *)(v1 + 37) )
        {
          v6 = *(_DWORD *)(v1 + 16);
          result = v3;
          v7 = *(_DWORD *)(v6 + 12);
          v8 = v7 > 0x1F;
          if ( v7 != 31 )
            v8 = v7 - 1 > 1;
          if ( !v8 && *(_DWORD *)(v1 + 12) <= 1u || v7 - 27 <= 2 )
          {
            result = sub_2018E8(v3, *(_DWORD *)(v1 + 52));
            if ( result )
            {
              *(_BYTE *)(v1 + 37) = 1;
              *(_BYTE *)(v1 + 39) = 0;
              result = sub_1B9D50(v6);
              if ( !v2 )
              {
                sub_22F048(result);
                v2 = 1;
                result = sub_946B0(
                           "Temporarily disabling breakpoints for unloaded shared library \"%s\"",
                           (const char *)(v3 + 520));
              }
            }
          }
        }
        if ( (unsigned int)v4 >= dword_478368 + 4 * dword_47836C )
          break;
        v5 = *v4++;
        v1 = v5;
      }
      while ( v5 );
    }
  }
  return result;
}
