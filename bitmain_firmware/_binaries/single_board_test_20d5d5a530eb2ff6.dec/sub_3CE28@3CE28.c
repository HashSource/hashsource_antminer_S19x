int __fastcall sub_3CE28(int a1)
{
  const char *v1; // r5
  FILE *v3; // r7
  FILE *v4; // r6
  int v5; // r8
  int v7; // r4

  v1 = (const char *)(a1 + 256);
  snprintf((char *)(a1 + 256), 0x80u, "%s.64", (const char *)a1);
  v3 = fopen((const char *)a1, "rb");
  v4 = fopen(v1, "wb");
  v5 = sub_4868C(v3, v4);
  fclose(v3);
  fclose(v4);
  if ( v5 )
    return 0;
  *(_BYTE *)(a1 + 385) = 1;
  v7 = sub_3CDA0(a1);
  remove(v1);
  return v7;
}
