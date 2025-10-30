int __fastcall sub_10C5C(const char *a1)
{
  size_t v2; // r0
  const char *v3; // r1
  int v4; // r3
  int v5; // t1

  v2 = strlen(a1);
  v3 = a1 - 1;
  v4 = 0;
  while ( v3 != &a1[v2 - 2] )
  {
    v5 = *(unsigned __int8 *)++v3;
    v4 = 10 * (v4 - 48 + v5);
  }
  return (unsigned __int8)a1[v2 - 1] - 48 + v4;
}
