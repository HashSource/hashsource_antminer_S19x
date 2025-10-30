_DWORD *__fastcall sub_297A18(char *a1, int a2)
{
  _DWORD *v4; // r4
  size_t v5; // r0
  char *v6; // r0

  v4 = sub_93028(0xCu);
  if ( a1 )
  {
    v5 = strlen(a1);
    v6 = (char *)sub_93028(v5 + 1);
    a1 = strcpy(v6, a1);
  }
  *v4 = a1;
  v4[1] = a2;
  v4[2] = 0;
  return v4;
}
