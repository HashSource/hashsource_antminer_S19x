int __fastcall sub_3CEA0(int a1)
{
  const char *v1; // r5
  const char *v3; // r8
  FILE *v4; // r7
  FILE *v5; // r0
  bool v6; // zf
  FILE *v8; // r6
  int v9; // r9
  FILE *v10; // r7
  FILE *v11; // r6
  int v12; // r9
  int v13; // r4

  v1 = (const char *)(a1 + 128);
  snprintf((char *)(a1 + 128), 0x80u, "%s.lz4", (const char *)a1);
  v3 = (const char *)(a1 + 256);
  snprintf((char *)(a1 + 256), 0x80u, "%s.64", (const char *)a1);
  v4 = fopen((const char *)a1, "rb");
  v5 = fopen(v1, "wb");
  v6 = v5 == 0;
  if ( v5 )
    v6 = v4 == 0;
  if ( v6 )
    return 0;
  v8 = v5;
  v9 = sub_4883C(v4, v5);
  fclose(v4);
  fclose(v8);
  if ( v9 )
    return 0;
  v10 = fopen(v1, "rb");
  v11 = fopen((const char *)(a1 + 256), "wb");
  v12 = sub_4868C(v10, v11);
  fclose(v10);
  fclose(v11);
  if ( v12 )
    return 0;
  *(_BYTE *)(a1 + 384) = 1;
  *(_BYTE *)(a1 + 385) = 1;
  v13 = sub_3CDA0(a1);
  remove(v1);
  remove(v3);
  return v13;
}
