int __fastcall sub_1CCA00(const char *a1, int *a2, char *a3)
{
  int v6; // r5
  int v7; // r0
  const char *v8; // r12
  const char *v9; // r4
  int v10; // t1
  int v11; // r0
  int v13; // [sp+0h] [bp-Ch] BYREF
  char v14; // [sp+4h] [bp-8h] BYREF

  if ( !a1 )
    return 0;
  v6 = strncmp(a1, "GNU ", 4u);
  if ( v6 )
    return 0;
  v7 = *((unsigned __int8 *)a1 + 4);
  if ( !a2 )
    a2 = &v13;
  if ( !a3 )
    a3 = &v14;
  v8 = a1 + 4;
  if ( a1[4] )
  {
    v9 = a1 + 5;
    do
    {
      v11 = isspace(v7);
      v8 = v9;
      if ( v11 )
        break;
      v10 = *(unsigned __int8 *)v9++;
      v7 = v10;
    }
    while ( v10 );
  }
  if ( sscanf(v8, "%d.%d", a2, a3) == 2 )
    return 1;
  return v6;
}
