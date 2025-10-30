int __fastcall sub_6A234(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  unsigned __int8 v8; // [sp+12h] [bp-81Ah] BYREF
  unsigned __int8 v9; // [sp+13h] [bp-819h] BYREF
  unsigned int v10; // [sp+14h] [bp-818h]
  char v11[16]; // [sp+1Ch] [bp-810h] BYREF
  int v12; // [sp+81Ch] [bp-10h]
  int v13; // [sp+820h] [bp-Ch]
  int v14; // [sp+824h] [bp-8h]

  v10 = a1;
  v9 = a2;
  v8 = a3;
  v13 = 0;
  v12 = 0;
  if ( a1 <= 0xF )
  {
    v14 = sub_6A4B0(v10, v9);
    if ( v14 == -2147482112
      && ((v13 = sub_69B1C(v10, (int)&v9, 1u), v13 < 0) || (v14 = sub_6A4B0(v10, v9), v14 == -2147482112)) )
    {
      snprintf(v11, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed\n", v10, v9);
      sub_3AF5C(0, v11, 0, (int)v11);
      return v13;
    }
    else
    {
      v13 = sub_6AA94(dword_5316AC[17 * v10 + 2 + 2 * v14], &v8, 2, a4, a5, 1);
      if ( a5 == v13 )
      {
        return v13;
      }
      else
      {
        snprintf(v11, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d\n", v10, v9, v8);
        sub_3AF5C(0, v11, 0, (int)v11);
        return -2147482112;
      }
    }
  }
  else
  {
    snprintf(v11, 0x800u, " Bad T-sensor param, input chain is %d\n", v10);
    sub_3AF5C(0, v11, 0, (int)v11);
    return -2147482111;
  }
}
