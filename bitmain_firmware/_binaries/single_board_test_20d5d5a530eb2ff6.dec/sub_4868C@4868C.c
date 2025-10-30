int __fastcall sub_4868C(FILE *a1, FILE *a2)
{
  bool v2; // zf
  int v3; // r7
  _BOOL4 v4; // r4
  int v8; // r9
  size_t v9; // r5
  unsigned __int8 *v10; // r8
  _BYTE *v11; // r0
  bool v12; // zf
  _BYTE *v13; // r7
  _BYTE *v14; // r1
  size_t v15; // r1

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  v3 = v2;
  if ( v2 )
    return 1;
  fseek(a1, v3, 2);
  v8 = ftell(a1);
  v9 = sub_48560(v8);
  printf("file_size:%d,encodelen:%d\n", v8, v9);
  fseek(a1, v3, v3);
  v10 = (unsigned __int8 *)calloc(v8, 1u);
  v11 = malloc(v9);
  v12 = v10 == 0;
  if ( v10 )
    v12 = v11 == 0;
  v13 = v11;
  if ( v12 )
  {
    v4 = 1;
    if ( !v10 )
      goto LABEL_16;
  }
  else if ( v8 == fread(v10, 1u, v8, a1) )
  {
    v14 = sub_48578(v13, v10, v8);
    if ( (_BYTE *)v9 == v14 )
    {
      v15 = fwrite(v13, 1u, v9, a2);
      v4 = v9 != v15;
      printf("encode_success,writelen:%d\n", v15);
    }
    else
    {
      v4 = 1;
      printf("encoded_res:%d,encodelen:%d\n", v14, v9);
    }
  }
  else
  {
    v4 = 1;
  }
  free(v10);
LABEL_16:
  if ( !v13 )
    return v4;
  free(v13);
  return v4;
}
