sem_t *__fastcall sub_6E26C(sem_t *a1, unsigned int value)
{
  if ( sem_init(a1, 0, value) )
    return 0;
  else
    return a1;
}
