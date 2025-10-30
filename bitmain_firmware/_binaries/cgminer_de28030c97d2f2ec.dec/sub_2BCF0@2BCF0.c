int __fastcall sub_2BCF0(sem_t *a1)
{
  int result; // r0
  int v3; // [sp+Ch] [bp-8h]

  do
  {
    result = sem_trywait(a1);
    v3 = result;
    if ( result < 0 )
    {
      result = sub_1FB6C();
      if ( result )
        v3 = 0;
    }
  }
  while ( !v3 );
  return result;
}
