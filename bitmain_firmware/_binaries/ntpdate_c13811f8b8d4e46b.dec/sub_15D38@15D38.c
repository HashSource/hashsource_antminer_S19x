void __fastcall sub_15D38(void **a1)
{
  char *v2; // r5
  _DWORD *i; // r0
  int v4; // r2
  int v5; // r3
  _DWORD *v6; // [sp+0h] [bp-Ch] BYREF

  if ( !a1 || (v2 = (char *)*a1) == 0 || *(_DWORD *)v2 != 1281586296 )
    sub_1073C();
  if ( *((_DWORD *)v2 + 13) )
  {
    v6 = (_DWORD *)*((_DWORD *)v2 + 13);
    *((_DWORD *)v2 + 13) = 0;
    sub_15930(&v6);
  }
  if ( pthread_mutex_destroy((pthread_mutex_t *)(v2 + 28)) )
    sub_150D0("./../lib/isc/log.c", 479, "((pthread_mutex_destroy(((&lctx->lock))) == 0) ? 0 : 34) == 0");
  for ( i = (_DWORD *)*((_DWORD *)v2 + 2062); i; i = (_DWORD *)*((_DWORD *)v2 + 2062) )
  {
    v5 = i[4];
    if ( v5 )
    {
      *(_DWORD *)(v5 + 12) = i[3];
      v4 = i[3];
    }
    else
    {
      if ( *((_DWORD **)v2 + 2063) != i )
        sub_1073C();
      v4 = i[3];
      *((_DWORD *)v2 + 2063) = v4;
    }
    if ( v4 )
      *(_DWORD *)(v4 + 16) = v5;
    else
      *((_DWORD *)v2 + 2062) = v5;
    free(i);
  }
  free(v2);
  *a1 = 0;
}
