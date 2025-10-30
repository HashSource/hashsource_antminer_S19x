int __fastcall sub_6C674(int a1, const void *a2, char *a3, size_t a4)
{
  int v5; // r0

  snprintf(a3, a4, "%p", a2);
  if ( sub_6EBE8(a1, a3) )
    return -1;
  v5 = sub_74C5C();
  return sub_6EA08(a1, a3, v5);
}
