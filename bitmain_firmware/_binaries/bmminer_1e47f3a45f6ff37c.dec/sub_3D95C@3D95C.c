void __fastcall sub_3D95C(char *a1)
{
  _DWORD *v2; // r3
  bool v3; // zf
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _DWORD *i; // r4
  _DWORD *v7; // r2

  if ( a1 )
  {
    v2 = *(_DWORD **)a1;
    v3 = a1 == *(char **)a1;
    v4 = (_DWORD *)(*(_DWORD *)a1 - 4);
    v5 = (_DWORD *)*v2;
    if ( !v3 )
      v2 = (_DWORD *)*v2;
    for ( i = v5 - 1; !v3; i = v2 - 1 )
    {
      v7 = (_DWORD *)v4[2];
      v2[1] = v7;
      *v7 = v2;
      free(v4);
      v2 = (_DWORD *)i[1];
      v4 = i;
      v3 = i + 1 == (_DWORD *)a1;
    }
    pthread_cond_destroy((pthread_cond_t *)(a1 + 40));
    pthread_mutex_destroy((pthread_mutex_t *)(a1 + 12));
    memset(a1, 0, 0x58u);
    free(a1);
  }
}
