void __fastcall sub_195384(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0;
}
