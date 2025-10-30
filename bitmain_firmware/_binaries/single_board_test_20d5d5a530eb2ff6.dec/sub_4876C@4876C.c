int __fastcall sub_4876C(FILE *a1, FILE *a2)
{
  bool v2; // zf
  size_t v6; // r7
  unsigned __int8 *v7; // r0
  unsigned __int8 *v8; // r6
  _BOOL4 v9; // r4
  size_t v10; // r8
  _BYTE *v11; // r0
  void *v12; // r7
  size_t v13; // r5

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
    return 1;
  fseek(a1, 0, 2);
  v6 = ftell(a1);
  fseek(a1, 0, 0);
  v7 = (unsigned __int8 *)calloc(v6, 1u);
  v8 = v7;
  if ( !v7 )
    return 1;
  if ( v6 == fread(v7, 1u, v6, a1)
    && (v10 = sub_48430(v8), printf("decode_len:%d,src len:%d\n", v10, v6), v10)
    && (v11 = malloc(v10), (v12 = v11) != 0) )
  {
    v13 = sub_48458(v11, v8);
    printf("decoded_len:%d,decode len:%d\n", v13, v10);
    if ( v13 )
    {
      puts("decode_success");
      v9 = fwrite(v12, 1u, v13, a2) != v13;
    }
    else
    {
      v9 = 1;
    }
    free(v12);
  }
  else
  {
    v9 = 1;
  }
  free(v8);
  return v9;
}
