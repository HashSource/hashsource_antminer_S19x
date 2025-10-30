int __fastcall sub_2ACF4(sem_t *a1)
{
  int result; // r0
  int v3; // [sp+Ch] [bp-8h]

  do
  {
    result = sem_trywait(a1);
    v3 = result;
    if ( result < 0 )
    {
      result = sub_1F264();
      if ( result )
        v3 = 0;
    }
  }
  while ( !v3 );
  return result;
}
