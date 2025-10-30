char *__fastcall sub_21A30(char **a1, const char *a2)
{
  char *v2; // r3
  char *s; // [sp+Ch] [bp-8h]

  s = *a1;
  if ( *a1 )
    v2 = strpbrk(s, a2);
  else
    v2 = 0;
  if ( v2 )
  {
    *v2 = 0;
    *a1 = v2 + 1;
  }
  else
  {
    *a1 = 0;
  }
  return s;
}
