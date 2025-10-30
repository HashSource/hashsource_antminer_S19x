char *__fastcall sub_3C7DC(char *a1)
{
  char *v2; // r0
  char *v3; // r12

  if ( dword_941C4 && *(_BYTE *)dword_941C4 )
    return strcpy(a1, (const char *)dword_941C4);
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
