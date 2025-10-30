int __fastcall sub_E0898(char **a1)
{
  const char *v2; // r0
  int result; // r0
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v2 = (const char *)sub_9360C(*a1);
  if ( (unsigned int)*(unsigned __int8 *)v2 - 48 > 9 )
    sub_946E0("Expected positive number, got: %s.", v2);
  result = strtol(v2, &endptr, 10);
  *a1 = endptr;
  return result;
}
