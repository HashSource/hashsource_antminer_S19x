_DWORD *__fastcall sub_F5548(_DWORD *a1, char *s)
{
  size_t v4; // r6

  v4 = strlen(s);
  if ( strcspn(s, " \t\n*|\"';:?><") == v4 )
  {
    sub_220F84((int)a1, s);
    return a1;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return a1;
  }
}
