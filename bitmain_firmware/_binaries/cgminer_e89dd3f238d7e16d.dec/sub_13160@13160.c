int __fastcall sub_13160(int result, _DWORD *a2)
{
  int v2; // [sp+4h] [bp-20h]
  int v3; // [sp+Ch] [bp-18h]
  int i; // [sp+18h] [bp-Ch]
  char v6; // [sp+1Fh] [bp-5h]

  v2 = result;
  v6 = 0;
  if ( result )
  {
    if ( pthread_mutex_trylock(&stru_86CE4) )
    {
      v6 = 1;
    }
    else
    {
      for ( i = 0; i < dword_90E90; ++i )
      {
        v3 = *(_DWORD *)(dword_90F34 + 4 * i);
        if ( *(_DWORD *)(v3 + 100) && *(_BYTE *)(v3 + 97) != 1 )
        {
          v6 = 1;
          break;
        }
      }
      pthread_mutex_unlock(&stru_86CE4);
    }
    if ( v6 != 1 )
      return sub_12F18(v2, a2, -1);
    else
      return sub_12F18(v2, a2, 0);
  }
  return result;
}
