int __fastcall sub_251AC(sem_t *a1, const char *a2, const char *a3, int a4)
{
  int result; // r0

  result = sem_post(a1);
  if ( result )
    sub_22538(a1, a2, a3, a4);
  return result;
}
