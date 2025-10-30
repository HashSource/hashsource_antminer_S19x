char *__fastcall sub_87004(int a1, int a2)
{
  char *v3; // r0
  const char *v4; // r4
  int v5; // t1
  char *v6; // r0
  char *v7; // r7
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r8
  int v11; // [sp+4h] [bp-Ch]

  v3 = (char *)dword_107334;
  v4 = (const char *)(a2 + 1);
  if ( !dword_107334 )
  {
    v11 = a2;
    v3 = sub_7E2F8(12);
    a2 = v11;
  }
  if ( v3[*(unsigned __int8 *)(a2 + 1)] )
  {
    do
      v5 = *(unsigned __int8 *)++v4;
    while ( v3[v5] );
  }
  v6 = strchr(v4, 62);
  v7 = v6;
  if ( v6 )
  {
    v8 = (unsigned __int8 *)malloc(v6 - v4 + 1);
    v9 = v8;
    if ( !v8 )
      sub_C610(v7 - v4 + 1);
    memcpy(v8, v4, v7 - v4);
    v9[v7 - v4] = 0;
    sub_86D90((int *)(a1 + 12), v9);
    ++v7;
    free(v9);
  }
  return v7;
}
