int __fastcall sub_4883C(FILE *a1, int a2)
{
  bool v2; // zf
  int result; // r0
  void *v6; // r0
  void *v7; // r6
  int v8; // r7
  size_t v9; // r4
  int v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  int v14; // [sp+4h] [bp-54h] BYREF
  _DWORD s[20]; // [sp+8h] [bp-50h] BYREF

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
    return 1;
  v6 = malloc(0x4000u);
  v7 = v6;
  if ( !v6 )
    puts("error: memory allocation failed ");
  memset(s, 0, 0x38u);
  s[8] = 12;
  v8 = sub_5BA00(&v14, a2, s);
  if ( ((int (*)(void))sub_57568)() )
  {
    v13 = (const char *)sub_57574(v8);
    printf("LZ4F_writeOpen error: %s\n", v13);
    free(v7);
    return 1;
  }
  else
  {
    do
    {
      v9 = fread(v7, 1u, 0x4000u, a1);
      if ( ferror(a1) )
      {
        puts("fread error");
        goto LABEL_14;
      }
      if ( !v9 )
        goto LABEL_14;
      v8 = sub_5BB14(v14, (int)v7);
    }
    while ( !((int (*)(void))sub_57568)() );
    v12 = (const char *)sub_57574(v8);
    printf("LZ4F_write: %s\n", v12);
LABEL_14:
    free(v7);
    v10 = sub_5BB9C(v14);
    result = sub_57568(v10);
    if ( result )
    {
      v11 = (const char *)sub_57574(v8);
      printf("LZ4F_writeClose: %s\n", v11);
      return 1;
    }
  }
  return result;
}
