int __fastcall sub_100F04(const char *a1)
{
  const char *v1; // r9
  int v2; // r0
  int v3; // r4
  const char *v4; // r0
  int v5; // r6
  const char *v6; // r5

  v1 = a1;
  if ( !strncmp(a1, "::", 2u) )
    v1 += 2;
  v2 = ((int (__fastcall *)(const char *))loc_100310)(v1);
  if ( v2 )
    v1 += v2 + 2;
  if ( !*v1 )
    return *(unsigned __int8 *)v1;
  v3 = 0;
  do
  {
    v4 = (const char *)sub_9360C(v1);
    v5 = *(unsigned __int8 *)v4;
    v6 = v4;
    v1 = v4 + 1;
    if ( v5 == 40 || v5 == 91 && !strncmp(v4 + 1, "abi:", 4u) && v6[5] != 58 )
      break;
    v3 = 67 * v3 - 113 + byte_438798[v5];
  }
  while ( v6[1] );
  return v3;
}
