int __fastcall sub_2E7D00(int result, int a2)
{
  int v2; // r4
  unsigned int v4; // r3

  v2 = *(_DWORD *)(result + 100);
  if ( v2 )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 20) & 0x8001) == 1 )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(v2 + 140) + 4);
        if ( v4 <= 1 || v4 == 8 )
        {
          result = sub_2DF2C0(a2, (const char **)v2);
          if ( !result )
            break;
        }
      }
      v2 = *(_DWORD *)(v2 + 12);
      if ( !v2 )
        return result;
    }
    *(_DWORD *)(*(_DWORD *)(a2 + 28) + 108) = v2;
  }
  return result;
}
