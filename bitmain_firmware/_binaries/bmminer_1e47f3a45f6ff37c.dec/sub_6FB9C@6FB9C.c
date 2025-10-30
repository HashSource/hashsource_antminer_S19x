int __fastcall sub_6FB9C(int a1, const void *a2, char *a3, size_t a4)
{
  int v5; // r0

  snprintf(a3, a4, "%p", a2);
  if ( sub_72120(a1, a3) )
    return -1;
  v5 = sub_780D0();
  return sub_71F3C(a1, a3, v5);
}
