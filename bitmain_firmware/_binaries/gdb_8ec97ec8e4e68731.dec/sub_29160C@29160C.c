int __fastcall sub_29160C(const char **a1, const char **a2)
{
  const char *v2; // r0
  const char *v3; // r1

  v2 = *a1;
  v3 = *a2;
  if ( *(unsigned __int8 *)v2 == *(unsigned __int8 *)v3 )
    return strcmp(v2, v3);
  else
    return *(unsigned __int8 *)v2 - *(unsigned __int8 *)v3;
}
