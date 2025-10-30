void __fastcall sub_49FC4(char *a1)
{
  int v2; // r2
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r3
  bool v6; // zf

  if ( a1 )
  {
    v2 = **(_DWORD **)a1;
    v3 = (_DWORD *)(*(_DWORD *)a1 - 4);
    v4 = (_DWORD *)(v2 - 4);
    if ( a1 != *(char **)a1 )
    {
      do
      {
        v5 = (_DWORD *)v3[2];
        *(_DWORD *)(v2 + 4) = v5;
        *v5 = v2;
        free(v3);
        v3 = v4;
        v2 = v4[1];
        v6 = v4 + 1 == (_DWORD *)a1;
        v4 = (_DWORD *)(v2 - 4);
      }
      while ( !v6 );
    }
    pthread_cond_destroy((pthread_cond_t *)(a1 + 40));
    pthread_mutex_destroy((pthread_mutex_t *)(a1 + 12));
    free(a1);
  }
}
