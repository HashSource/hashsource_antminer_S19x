int __fastcall sub_2A4DDC(int a1, int a2)
{
  const char **v2; // r3
  const char *v3; // r4
  int v6; // r0
  char *v7; // r3
  int v8; // r0
  char *v9; // r3
  int v10; // r0
  char *v11; // r3
  const char *v12; // r4
  int v13; // r0
  char *v14; // r3
  int result; // r0
  char *endptr[2]; // [sp+4h] [bp-8h] BYREF

  v2 = *(const char ***)(a1 + 136);
  if ( v2 )
  {
    v3 = *v2;
    if ( !*v2 )
      return -1;
    v6 = strtol(v3 + 16, endptr, 10);
    v7 = endptr[0];
    *(_DWORD *)(a2 + 80) = v6;
    if ( v3 + 16 == v7 )
      return -1;
    v8 = strtol(v3 + 28, endptr, 10);
    v9 = endptr[0];
    *(_DWORD *)(a2 + 24) = v8;
    if ( v3 + 28 == v9 )
      return -1;
    v10 = strtol(v3 + 34, endptr, 10);
    v11 = endptr[0];
    *(_DWORD *)(a2 + 28) = v10;
    if ( v3 + 34 == v11 )
      return -1;
    v12 = v3 + 40;
    v13 = strtol(v12, endptr, 8);
    v14 = endptr[0];
    *(_DWORD *)(a2 + 16) = v13;
    if ( v12 == v14 )
    {
      return -1;
    }
    else
    {
      result = 0;
      *(_QWORD *)(a2 + 48) = *(unsigned int *)(*(_DWORD *)(a1 + 136) + 4);
    }
  }
  else
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return -1;
  }
  return result;
}
