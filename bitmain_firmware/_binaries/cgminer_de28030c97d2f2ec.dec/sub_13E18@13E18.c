void *__fastcall sub_13E18(int a1)
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
    v9 = sub_65ED4(result);
    snprintf(s, 0x40u, "%s", byte_87B48);
    v2 = sub_67728(s);
    sub_6611C(v9, "miner_version", v2);
    snprintf(v7, 0x40u, "%s", byte_87C48);
    v3 = sub_67728(v7);
    sub_6611C(v9, "CompileTime", v3);
    snprintf(v6, 0x40u, "%s", byte_87D48);
    if ( byte_954EC )
      snprintf(v6, 0x40u, "%s", &byte_954EC);
    v4 = sub_67728(v6);
    sub_6611C(v9, "type", v4);
    return (void *)sub_6611C(a1, "INFO", v9);
  }
  return result;
}
