void __fastcall sub_3E058(sem_t *a1, const char *a2, const char *a3, int a4)
{
  if ( sem_post(a1) )
    sub_3C758(a1, a2, a3, a4);
}
