void *__fastcall sub_13644(int a1)
{
  void *result; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  char v6[64]; // [sp+Ch] [bp-C8h] BYREF
  char v7[64]; // [sp+4Ch] [bp-88h] BYREF
  char s[64]; // [sp+8Ch] [bp-48h] BYREF
  int v9; // [sp+CCh] [bp-8h]

  memset(s, 0, sizeof(s));
  memset(v7, 0, sizeof(v7));
  result = memset(v6, 0, sizeof(v6));
  if ( a1 )
  {
    v9 = sub_651D4(result);
    snprintf(s, 0x40u, "%s", byte_869B0);
    v2 = sub_66A38(s);
    sub_65420(v9, "miner_version", v2);
    snprintf(v7, 0x40u, "%s", byte_86AB0);
    v3 = sub_66A38(v7);
    sub_65420(v9, "CompileTime", v3);
    snprintf(v6, 0x40u, "%s", byte_86BB0);
    if ( byte_94354 )
      snprintf(v6, 0x40u, "%s", &byte_94354);
    v4 = sub_66A38(v6);
    sub_65420(v9, "type", v4);
    return (void *)sub_65420(a1, "INFO", v9);
  }
  return result;
}
