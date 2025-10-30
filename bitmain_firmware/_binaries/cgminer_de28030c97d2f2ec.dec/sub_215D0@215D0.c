void __fastcall sub_215D0(char *a1)
{
  int v2; // [sp+8h] [bp-Ch]
  char *ptr; // [sp+Ch] [bp-8h]

  if ( a1 )
  {
    ptr = (char *)(*(_DWORD *)a1 - 4);
    v2 = **(_DWORD **)a1 - 4;
    while ( ptr + 4 != a1 )
    {
      sub_1FA6C((int)(ptr + 4));
      free(ptr);
      ptr = (char *)v2;
      v2 = *(_DWORD *)(v2 + 4) - 4;
    }
    pthread_cond_destroy((pthread_cond_t *)(a1 + 40));
    pthread_mutex_destroy((pthread_mutex_t *)(a1 + 12));
    memset(a1, 0, 0x58u);
    free(a1);
  }
}
