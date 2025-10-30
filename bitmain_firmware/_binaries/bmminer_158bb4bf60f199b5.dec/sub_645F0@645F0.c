char *__fastcall sub_645F0(char *a1, unsigned __int8 *a2)
{
  int v2; // r12
  const char *v3; // r1

  v2 = *a2;
  v3 = "false";
  if ( !v2 )
    v3 = "true";
  return strncpy(a1, v3, 0x50u);
}
