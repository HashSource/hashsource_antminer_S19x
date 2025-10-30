int __fastcall sub_249934(const char *a1)
{
  int v1; // r4
  const char *v3; // r2
  int v4; // r3
  int v5; // t1
  const char *v6; // r5
  int v7; // t1
  int result; // r0
  _BOOL4 v9; // r3

  v1 = *(unsigned __int8 *)a1;
  if ( !*a1 )
    sub_946E0("Must supply a non-empty variable name");
  if ( (unsigned int)(v1 - 48) <= 9 )
  {
    v3 = a1;
    do
    {
      v5 = *(unsigned __int8 *)++v3;
      v4 = v5;
    }
    while ( (unsigned int)(v5 - 48) <= 9 );
    if ( !v4 )
      goto LABEL_12;
  }
  v6 = a1;
  while ( 1 )
  {
    result = isalnum(v1);
    v9 = v1 != 95;
    if ( result )
      v9 = 0;
    if ( v9 )
      break;
    v7 = *(unsigned __int8 *)++v6;
    v1 = v7;
  }
  if ( v1 )
LABEL_12:
    sub_946E0("$%s is not a valid trace state variable name", a1);
  return result;
}
