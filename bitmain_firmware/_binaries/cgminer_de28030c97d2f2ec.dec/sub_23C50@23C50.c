char *__fastcall sub_23C50(_DWORD *a1, unsigned int a2)
{
  char *s; // [sp+Ch] [bp-8h]

  s = (char *)sub_23B88(a1, a2);
  if ( s )
    return strdup(s);
  else
    return 0;
}
