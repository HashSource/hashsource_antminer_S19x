int __fastcall sub_44794(int a1, const void *a2, char *s)
{
  int v5; // r0

  snprintf(s, 0xBu, "%p", a2);
  if ( sub_45B10(a1, s) )
    return -1;
  v5 = sub_48A28();
  return sub_4587C(a1, s, v5);
}
