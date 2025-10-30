char *__fastcall sub_2D7F4(char *a1)
{
  size_t v2; // r0
  char *v3; // r12
  size_t v4; // lr
  char *v6; // r0

  if ( dword_73478 && *(_BYTE *)dword_73478 )
    return strcpy(a1, (const char *)dword_73478);
  if ( getenv("HOME") && *getenv("HOME") )
  {
    v6 = getenv("HOME");
    *(_WORD *)stpcpy(a1, v6) = 47;
  }
  else
  {
    *a1 = 0;
  }
  strcat(a1, ".bmminer/");
  mkdir(a1, 0x1FFu);
  v2 = strlen(a1);
  v3 = &a1[v2];
  v4 = v2;
  *(_DWORD *)&a1[v4] = *(_DWORD *)"bmminer.conf";
  strcpy(v3 + 4, "ner.conf");
  return *(char **)"bmminer.conf";
}
