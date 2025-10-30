int __fastcall sub_4A1F0(int result)
{
  int v1; // r4
  pthread_t v2; // r0
  sem_t *v3; // r0

  v1 = result;
  if ( result )
  {
    v2 = *(_DWORD *)(result + 12);
    if ( v2 )
    {
      pthread_cancel(v2);
      v3 = (sem_t *)(v1 + 16);
      *(_DWORD *)(v1 + 12) = 0;
    }
    else
    {
      v3 = (sem_t *)(v1 + 16);
    }
    return sem_destroy(v3);
  }
  return result;
}
