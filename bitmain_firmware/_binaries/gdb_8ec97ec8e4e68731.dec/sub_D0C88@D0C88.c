const char *__fastcall sub_D0C88(const char **a1)
{
  const char *v1; // r4
  const char *v3; // r4

  v1 = *a1;
  if ( **a1 != 105 || v1[1] != 102 )
    return 0;
  if ( !isspace(*((unsigned __int8 *)v1 + 2)) )
    return 0;
  *a1 = v1 + 2;
  v3 = (const char *)sub_9360C(v1 + 2);
  *a1 = v3;
  *a1 = &v3[strlen(v3)];
  return v3;
}
