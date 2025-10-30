char **__fastcall sub_754DC(char **a1, char *s)
{
  size_t v4; // r0
  char *v5; // r4

  v4 = strlen(s);
  a1[1] = (char *)(v4 + 8);
  v5 = (char *)sub_93028(v4 + 9);
  qmemcpy(v5, "operator", 8);
  strcpy(v5 + 8, s);
  *a1 = v5;
  sub_9253C(sub_74B6C, v5);
  return a1;
}
