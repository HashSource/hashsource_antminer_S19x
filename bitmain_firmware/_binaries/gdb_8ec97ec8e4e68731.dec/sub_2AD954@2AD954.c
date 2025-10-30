const char *__fastcall sub_2AD954(int a1, char *s, int *a3)
{
  size_t v6; // r5
  char *v7; // r0
  const char *v8; // r6
  int v9; // r4
  char *v10; // r5
  _DWORD *v11; // r7
  int v12; // r2

  v6 = strlen(s);
  v7 = (char *)sub_2AB368(v6 + 8);
  v8 = v7;
  if ( v7 )
  {
    memcpy(v7, s, v6);
    if ( a3 )
    {
      v9 = *a3;
      if ( *a3 > 999999 )
LABEL_11:
        sub_2A6BF0((int)"section.c", 1059, (int)"bfd_get_unique_section_name");
    }
    else
    {
      v9 = 1;
    }
    v10 = (char *)&v8[v6];
    v11 = (_DWORD *)(a1 + 72);
    while ( 1 )
    {
      v12 = v9++;
      sprintf(v10, ".%d", v12);
      if ( !sub_2AAC2C(v11, v8, 0, 0) )
        break;
      if ( (_UNKNOWN *)v9 == &loc_F4240 )
        goto LABEL_11;
    }
    if ( a3 )
      *a3 = v9;
  }
  return v8;
}
