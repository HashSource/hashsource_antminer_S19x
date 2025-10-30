bool __fastcall sub_178B94(char *s1)
{
  int v3; // r1

  if ( *s1 == 95 && s1[1] == 95 && ((v3 = (unsigned __int8)s1[2], (unsigned int)(v3 - 48) <= 9) || strchr("Qt", v3)) )
    return 1;
  else
    return strncmp(s1, "__ct__", 6u) == 0;
}
