int __fastcall sub_10C40(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r12
  const char *v4; // r1
  const char *v5; // r2
  int i; // r0
  int v7; // t1
  int v8; // r3

  v2 = strlen(a1);
  v3 = v2 - 1;
  v4 = &a1[v2 - 2];
  v5 = a1 - 1;
  for ( i = 0; ; i = 10 * (v7 + v8) )
  {
    v8 = i - 48;
    if ( v5 == v4 )
      break;
    v7 = *(unsigned __int8 *)++v5;
  }
  return (unsigned __int8)a1[v3] + v8;
}
