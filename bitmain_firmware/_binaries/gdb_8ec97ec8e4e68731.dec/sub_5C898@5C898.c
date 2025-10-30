void __fastcall sub_5C898(const char *a1, const char *a2)
{
  void *v2; // r4

  if ( a2 )
    v2 = (void *)sub_93140("%s %s", a1, a2);
  else
    v2 = (void *)sub_327254(a1);
  sub_2435B0(v2, 0);
  if ( v2 )
    free(v2);
}
