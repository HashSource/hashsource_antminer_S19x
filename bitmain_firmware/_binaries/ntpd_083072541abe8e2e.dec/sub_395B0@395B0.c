int sub_395B0()
{
  int v0; // r4
  int *v1; // r5
  int v2; // t1
  int (*v3)(void); // r3
  int result; // r0

  if ( num_refclock_conf )
  {
    v0 = 0;
    v1 = (int *)&refclock_conf;
    do
    {
      v2 = *v1++;
      v3 = *(int (**)(void))(v2 + 16);
      if ( v3 )
        result = v3();
      ++v0;
    }
    while ( (unsigned __int8)num_refclock_conf > v0 );
  }
  return result;
}
