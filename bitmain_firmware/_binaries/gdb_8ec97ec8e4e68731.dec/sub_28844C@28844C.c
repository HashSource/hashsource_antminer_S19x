int __fastcall sub_28844C(const char *a1)
{
  int result; // r0
  int v3; // r2
  int *v4; // r3
  bool v5; // zf

  if ( !a1 || !*a1 )
    goto LABEL_13;
  if ( !strcasecmp(a1, "none") || !strcasecmp(a1, "off") )
  {
    dword_46DEF4 = 0;
    return 0;
  }
  if ( !strcasecmp(a1, "audible") || !strcasecmp(a1, "on") )
  {
LABEL_13:
    dword_46DEF4 = 1;
    return 0;
  }
  result = strcasecmp(a1, "visible");
  v5 = result == 0;
  if ( result )
  {
    result = 1;
  }
  else
  {
    v4 = &dword_46DEF4;
    v3 = 2;
  }
  if ( v5 )
    *v4 = v3;
  return result;
}
