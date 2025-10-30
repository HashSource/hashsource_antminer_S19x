int __fastcall sub_70180(void **a1)
{
  int v1; // r5

  v1 = (int)a1;
  if ( a1 )
  {
    v1 = sub_70788(*a1);
    free(a1);
  }
  return v1;
}
