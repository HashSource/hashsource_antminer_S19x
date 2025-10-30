int __fastcall sub_13DB0(int *a1, const void *a2, char *s, size_t maxlen)
{
  snprintf(s, maxlen, "%p", a2);
  if ( sub_125C8((int)a1, s) )
    return -1;
  else
    return sub_12468(a1, s, (int)&unk_27100);
}
