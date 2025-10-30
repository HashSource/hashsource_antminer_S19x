int __fastcall sub_8C224(int a1)
{
  int *v1; // r0
  int v3; // r1
  _DWORD *v6; // [sp+14h] [bp-18h]
  _DWORD *v7; // [sp+18h] [bp-14h]
  int nmemb; // [sp+1Ch] [bp-10h]
  _DWORD *j; // [sp+20h] [bp-Ch]
  unsigned int i; // [sp+24h] [bp-8h]

  nmemb = 2 * *(_DWORD *)(a1 + 8);
  v7 = calloc(nmemb, 4u);
  if ( v7 )
  {
    for ( i = 0; *(_DWORD *)(a1 + 8) > i; ++i )
    {
      for ( j = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * i); j; j = v6 )
      {
        v6 = (_DWORD *)j[4];
        j[4] = 0;
        j[3] = 0;
        sub_8F7E4(*j, nmemb);
        if ( v7[v3] )
        {
          *(_DWORD *)(v7[v3] + 12) = j;
          j[4] = v7[v3];
        }
        v7[v3] = j;
      }
    }
    free(*(void **)(a1 + 4));
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = nmemb;
    return 0;
  }
  else
  {
    v1 = _errno_location();
    sub_8CD10(2, "src/zc_hashtable.c", 126, "calloc fail, errno[%d]", *v1);
    return -1;
  }
}
