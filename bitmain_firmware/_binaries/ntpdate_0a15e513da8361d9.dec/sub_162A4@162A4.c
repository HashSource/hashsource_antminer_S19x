void __fastcall sub_162A4(void **a1)
{
  char *v2; // r5
  _DWORD *v3; // r3
  _DWORD *i; // r0
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // [sp+0h] [bp-Ch] BYREF

  if ( !a1 || (v2 = (char *)*a1) == 0 || *(_DWORD *)v2 != 1281586296 )
    sub_10C38();
  v3 = (_DWORD *)*((_DWORD *)v2 + 13);
  if ( v3 )
  {
    *((_DWORD *)v2 + 13) = 0;
    v7 = v3;
    sub_15E98(&v7);
  }
  if ( pthread_mutex_destroy((pthread_mutex_t *)(v2 + 28)) )
    sub_15644("./../lib/isc/log.c", 479, "((pthread_mutex_destroy(((&lctx->lock))) == 0) ? 0 : 34) == 0");
  for ( i = (_DWORD *)*((_DWORD *)v2 + 2062); i; i = (_DWORD *)*((_DWORD *)v2 + 2062) )
  {
    v6 = i[4];
    if ( v6 )
    {
      *(_DWORD *)(v6 + 12) = i[3];
      v5 = i[3];
    }
    else
    {
      if ( *((_DWORD **)v2 + 2063) != i )
        sub_10C38();
      v5 = i[3];
      *((_DWORD *)v2 + 2063) = v5;
    }
    if ( v5 )
      *(_DWORD *)(v5 + 16) = v6;
    else
      *((_DWORD *)v2 + 2062) = v6;
    free(i);
  }
  free(v2);
  *a1 = 0;
}
