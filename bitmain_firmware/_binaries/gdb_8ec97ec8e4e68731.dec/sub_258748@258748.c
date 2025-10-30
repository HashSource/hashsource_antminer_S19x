bool __fastcall sub_258748(const char **a1)
{
  const char *v1; // r4
  const char *v3; // r4
  int v4; // r5
  int v5; // t1
  int v6; // r0
  bool v7; // zf
  _BOOL4 result; // r0
  _BOOL4 v9; // r3

  v1 = *a1;
  if ( strncmp(*a1, "[abi:", 5u) )
    return 0;
  v3 = v1 + 5;
  do
  {
    v5 = *(unsigned __int8 *)v3++;
    v4 = v5;
    v6 = isalnum(v5);
    v7 = v6 == 0;
    result = v6 != 0;
    v9 = v5 == 95;
    if ( v7 )
      result = v9;
  }
  while ( result );
  if ( v4 == 93 )
  {
    result = 1;
    *a1 = v3;
  }
  return result;
}
