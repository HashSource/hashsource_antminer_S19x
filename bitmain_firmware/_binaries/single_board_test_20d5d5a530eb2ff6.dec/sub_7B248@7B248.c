int __fastcall sub_7B248(int *a1, const void *a2, char *s, size_t maxlen)
{
  snprintf(s, maxlen, "%p", a2);
  if ( sub_79A64((int)a1, s) )
    return -1;
  else
    return sub_79904(a1, s, (int)&unk_21CA88);
}
