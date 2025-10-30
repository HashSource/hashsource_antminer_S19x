int __fastcall sub_959D4(const char *a1, int a2)
{
  const char *i; // r6
  const char *v5; // r0
  size_t v6; // r6
  int v7; // r9
  int *v8; // r4
  unsigned int v9; // r8
  const char *v10; // r5
  int result; // r0
  int v12; // r2
  int v13; // r3
  char dest[132]; // [sp+4h] [bp-64h] BYREF

  if ( !a1 )
    sub_946E0("Must specify section name and its virtual address");
  for ( i = a1; !isspace(*(unsigned __int8 *)i); ++i )
    ;
  v5 = i;
  v6 = i - a1;
  v7 = sub_14CB9C(v5);
  v8 = *(int **)(dword_487D2C + 40);
  v9 = *(_DWORD *)(dword_487D2C + 44);
  if ( v9 <= (unsigned int)v8 )
  {
LABEL_12:
    if ( v6 >= 0x64 )
      v6 = 99;
    strncpy(dest, a1, v6);
    dest[v6] = 0;
    sub_946E0("Section %s not found", dest);
  }
  while ( 1 )
  {
    v10 = *(const char **)v8[2];
    result = strncmp(a1, v10, v6);
    if ( !result && !v10[v6] )
      break;
    v8 += 4;
    if ( v9 <= (unsigned int)v8 )
      goto LABEL_12;
  }
  v12 = v8[1];
  v13 = *v8;
  *v8 = v7;
  v8[1] = v7 + v12 - v13;
  if ( a2 )
    return sub_959A8();
  return result;
}
