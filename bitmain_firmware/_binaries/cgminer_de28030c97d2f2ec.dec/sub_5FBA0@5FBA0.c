int __fastcall sub_5FBA0(int a1, const void *a2, char *a3, size_t a4)
{
  int v5; // r0

  snprintf(a3, a4, "%p", a2);
  if ( sub_62124(a1, a3) )
    return -1;
  v5 = sub_680D0();
  return sub_61F40(a1, a3, v5);
}
