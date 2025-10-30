char *__fastcall sub_3B8EC(char *a1)
{
  char *v2; // r0
  char *v3; // r12

  if ( dword_9302C && *(_BYTE *)dword_9302C )
    return strcpy(a1, (const char *)dword_9302C);
  if ( getenv("HOME") && *getenv("HOME") )
  {
    v2 = getenv("HOME");
    strcpy(a1, v2);
    *(_WORD *)&a1[strlen(a1)] = 47;
  }
  else
  {
    *a1 = 0;
  }
  strcat(a1, ".bmminer/");
  mkdir(a1, 0x1FFu);
  v3 = &a1[strlen(a1)];
  strcpy(v3, "bmminer.conf");
  return *(char **)"bmminer.conf";
}
