int __fastcall sub_13908(int result, _DWORD *a2)
{
  int v2; // [sp+4h] [bp-20h]
  int v3; // [sp+Ch] [bp-18h]
  int i; // [sp+18h] [bp-Ch]
  char v6; // [sp+1Fh] [bp-5h]

  v2 = result;
  v6 = 0;
  if ( result )
  {
    if ( pthread_mutex_trylock(&stru_87E7C) )
    {
      v6 = 1;
    }
    else
    {
      for ( i = 0; i < dword_92028; ++i )
      {
        v3 = *(_DWORD *)(dword_920CC + 4 * i);
        if ( *(_DWORD *)(v3 + 100) && *(_BYTE *)(v3 + 97) != 1 )
        {
          v6 = 1;
          break;
        }
      }
      pthread_mutex_unlock(&stru_87E7C);
    }
    if ( v6 != 1 )
      return sub_136C8(v2, a2, -1);
    else
      return sub_136C8(v2, a2, 0);
  }
  return result;
}
