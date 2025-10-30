int __fastcall sub_3DB9C(int result)
{
  int v1; // r4
  pthread_t v2; // r0

  if ( result )
  {
    v1 = result;
    v2 = *(_DWORD *)(result + 12);
    if ( v2 )
    {
      pthread_cancel(v2);
      *(_DWORD *)(v1 + 12) = 0;
    }
    return sem_destroy((sem_t *)(v1 + 16));
  }
  return result;
}
