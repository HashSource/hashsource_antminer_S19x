int __fastcall sub_69F74(unsigned int a1, unsigned __int8 a2, char a3, int a4, unsigned int a5)
{
  unsigned __int8 v9; // [sp+13h] [bp-821h] BYREF
  unsigned int v10; // [sp+14h] [bp-820h]
  char v11[8]; // [sp+1Ch] [bp-818h] BYREF
  unsigned __int8 v12; // [sp+81Fh] [bp-15h] BYREF
  int v13; // [sp+820h] [bp-14h]
  int v14; // [sp+824h] [bp-10h]
  int v15; // [sp+828h] [bp-Ch]
  unsigned int i; // [sp+82Ch] [bp-8h]

  v10 = a1;
  v9 = a2;
  v14 = 0;
  i = 0;
  v13 = 0;
  if ( a1 <= 0xF )
  {
    v15 = sub_6A4B0(v10, v9);
    if ( v15 == -2147482112
      && ((v14 = sub_69B1C(v10, (int)&v9, 1u), v14 < 0) || (v15 = sub_6A4B0(v10, v9), v15 == -2147482112)) )
    {
      snprintf(v11, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed\n", v10, v9);
      sub_3AF5C(0, v11, 0, (int)v11);
      return v14;
    }
    else
    {
      for ( i = 0; a5 > i; ++i )
      {
        v12 = i + a3;
        v14 = sub_6AB5C(dword_5316AC[17 * v10 + 2 + 2 * v15], &v12, 1, a4 + i, 1, 1);
        if ( v14 != 1 )
        {
          snprintf(v11, 0x800u, "fail to write tsensor by iic, chain:%d, slave: %d, addr: %d", v10, v9, v12);
          sub_3AF5C(0, v11, 0, (int)v11);
          return -2147482112;
        }
      }
      return a5;
    }
  }
  else
  {
    snprintf(v11, 0x800u, " Bad T-sensor param, input chain is %d\n", v10);
    sub_3AF5C(0, v11, 0, (int)v11);
    return -2147482111;
  }
}
