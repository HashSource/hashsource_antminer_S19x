int __fastcall sub_76340(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r8
  unsigned __int8 *v10; // r7
  int v11; // r0
  int v13; // r7
  int v14; // r1
  unsigned __int8 v15[8]; // [sp+Fh] [bp-809h] BYREF
  unsigned __int8 v16; // [sp+17h] [bp-801h] BYREF
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v15[0] = a2;
  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d\n", a1);
    nullsub_8();
    return -2147482111;
  }
  v8 = sub_76154(a1, v15[0]);
  if ( v8 == -2147482112 )
  {
    v13 = sub_7619C(a1, v15, 1u);
    v14 = v15[0];
    if ( v13 >= 0 )
    {
      v8 = sub_76154(a1, v15[0]);
      if ( v8 != -2147482112 )
        goto LABEL_3;
      v14 = v15[0];
    }
    snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed\n", a1, v14);
    nullsub_8();
    return v13;
  }
LABEL_3:
  if ( !a5 )
    return a5;
  v9 = a4 + a5;
  v10 = &byte_65E5D8[68 * a1 + 8 * v8];
  while ( 1 )
  {
    v11 = *((_DWORD *)v10 + 2);
    v16 = a3;
    ++a4;
    ++a3;
    if ( sub_76814(v11, &v16) != 1 )
      break;
    if ( a4 == v9 )
      return a5;
  }
  snprintf(s, 0x800u, "fail to write tsensor by iic, chain:%d, slave: %d, addr: %d", a1, v15[0], v16);
  nullsub_8();
  return -2147482112;
}
