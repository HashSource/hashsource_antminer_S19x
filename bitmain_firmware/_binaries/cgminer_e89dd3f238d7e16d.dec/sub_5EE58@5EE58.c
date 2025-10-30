int __fastcall sub_5EE58(int a1, const void *a2, char *a3, size_t a4)
{
  int v5; // r0

  snprintf(a3, a4, "%p", a2);
  if ( sub_613CC(a1, a3) )
    return -1;
  v5 = sub_6743C();
  return sub_611EC(a1, a3, v5);
}
