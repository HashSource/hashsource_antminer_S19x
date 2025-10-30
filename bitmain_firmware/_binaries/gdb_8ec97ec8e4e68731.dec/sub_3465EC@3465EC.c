unsigned int __fastcall sub_3465EC(unsigned int *a1, const void **a2)
{
  unsigned int result; // r0
  unsigned int *v5; // r2
  int v6; // r3
  const char *v7; // r5
  char *endptr; // [sp+4h] [bp-8h] BYREF

  if ( sub_344C74(a2, "mt19937") )
  {
    v7 = (const char *)*a2;
    result = strtoul(v7, &endptr, 0);
    if ( !*v7 || *endptr )
      sub_33D280("random_device::random_device(const std::string&)");
  }
  else
  {
    result = 5489;
  }
  v5 = a1;
  v6 = 1;
  *a1 = result;
  do
  {
    result = v6 + 1812433253 * (result ^ (result >> 30));
    ++v6;
    v5[1] = result;
    ++v5;
  }
  while ( v6 != 624 );
  a1[624] = 624;
  return result;
}
