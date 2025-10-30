unsigned int __fastcall sub_E08E8(_DWORD *a1)
{
  int v2; // r5
  const char *v3; // r0
  unsigned int result; // r0
  char *endptr; // [sp+4h] [bp-8h] BYREF

  v2 = *a1;
  v3 = (const char *)sub_9360C(*a1);
  if ( (unsigned int)*(unsigned __int8 *)v3 - 48 > 9 )
    sub_946E0("Expected positive number, got: %s.", v3);
  result = strtoul(v3, &endptr, 10);
  *a1 += &endptr[-v2];
  return result;
}
