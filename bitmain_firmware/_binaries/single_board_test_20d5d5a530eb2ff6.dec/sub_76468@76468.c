int __fastcall sub_76468(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v6; // r0
  int v8; // r8
  int v9; // r1
  unsigned __int8 v10; // [sp+Eh] [bp-802h] BYREF
  unsigned __int8 v11; // [sp+Fh] [bp-801h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v11 = a2;
  v10 = a3;
  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d\n", a1);
    nullsub_8();
    return -2147482111;
  }
  v6 = sub_76154(a1, v11);
  if ( v6 == -2147482112 )
  {
    v8 = sub_7619C(a1, &v11, 1u);
    v9 = v11;
    if ( v8 >= 0 )
    {
      v6 = sub_76154(a1, v11);
      if ( v6 != -2147482112 )
        goto LABEL_3;
      v9 = v11;
    }
    snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed\n", a1, v9);
    nullsub_8();
    return v8;
  }
LABEL_3:
  if ( a5 == sub_767A0(*(_DWORD *)&byte_65E5D8[68 * a1 + 8 + 8 * v6], &v10) )
    return a5;
  snprintf(s, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d\n", a1, v11, v10);
  nullsub_8();
  return -2147482112;
}
