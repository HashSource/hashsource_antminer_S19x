size_t __fastcall sub_CF908(size_t result, const void *a2, unsigned int a3)
{
  unsigned int v3; // r4
  size_t v6; // r9
  const char *v7; // r7
  const char *v8; // r8
  const char *v9; // r0
  _BYTE v10[64]; // [sp+18h] [bp-E8h] BYREF
  _BYTE v11[64]; // [sp+58h] [bp-A8h] BYREF
  _BYTE v12[104]; // [sp+98h] [bp-68h] BYREF

  if ( a3 )
  {
    v3 = result;
    v6 = HIBYTE(result);
    v7 = (const char *)sub_CF7CC(result);
    if ( !v7 )
    {
      v7 = v10;
      sub_B5560(v10, 0x40u, "lib(%lu)", v6);
    }
    v8 = (const char *)sub_CF828(v3);
    if ( !v8 )
    {
      v8 = v11;
      sub_B5560(v11, 0x40u, "func(%lu)", (v3 >> 12) & 0xFFF);
    }
    v9 = (const char *)sub_CF888(v3);
    if ( !v9 )
    {
      sub_B5560(v12, 0x40u, "reason(%lu)", v3 & 0xFFF);
      v9 = v12;
    }
    sub_B5560(a2, a3, "error:%08lX:%s:%s:%s", v3, v7, v8, v9);
    result = strlen((const char *)a2);
    if ( result == a3 - 1 )
      return sub_B5560(a2, a3, "err:%lx:%lx:%lx:%lx", v3, v6, (v3 >> 12) & 0xFFF, v3 & 0xFFF);
  }
  return result;
}
