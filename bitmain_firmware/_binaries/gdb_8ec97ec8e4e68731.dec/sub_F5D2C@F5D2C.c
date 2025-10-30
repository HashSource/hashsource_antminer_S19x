void __fastcall sub_F5D2C(void **a1)
{
  void **v1; // r4
  void *v3; // r0
  void *v4; // t1

  v1 = (void **)*a1;
  if ( *a1 )
  {
    v3 = *v1;
    if ( !*v1 )
      goto LABEL_6;
    do
    {
      free(v3);
      v4 = v1[1];
      ++v1;
      v3 = v4;
    }
    while ( v4 );
    v1 = (void **)*a1;
    if ( *a1 )
LABEL_6:
      free(v1);
    *a1 = 0;
  }
}
