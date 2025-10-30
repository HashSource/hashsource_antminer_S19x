int __fastcall sub_6C02C(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, _WORD *a4)
{
  unsigned __int8 v8; // [sp+13h] [bp-821h] BYREF
  unsigned int v9; // [sp+14h] [bp-820h]
  char v10[8]; // [sp+1Ch] [bp-818h] BYREF
  __int16 v11; // [sp+81Eh] [bp-16h] BYREF
  int v12; // [sp+820h] [bp-14h]
  int v13; // [sp+824h] [bp-10h]
  int v14; // [sp+828h] [bp-Ch]
  int v15; // [sp+82Ch] [bp-8h]

  v9 = a1;
  v8 = a2;
  v14 = 0;
  v13 = 0;
  if ( a1 <= 0xF )
  {
    v15 = sub_6C2E0(v9, v8);
    if ( v15 == -2147482112
      && ((v14 = sub_6B938(v9, (int)&v8, 1u), v14 < 0) || (v15 = sub_6C2E0(v9, v8), v15 == -2147482112)) )
    {
      snprintf(v10, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed\n", v9, v8);
      sub_3B6AC(0, v10, 0, (int)v10);
      return v14;
    }
    else
    {
      v11 = 0;
      v12 = sub_6D460(dword_536504[17 * v9 + 2 + 2 * v15]);
      v14 = sub_6C72C(v12, (unsigned __int8)(v9 + v8), 0, &v11);
      if ( v14 )
      {
        snprintf(v10, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d\n", v9, v8, a3);
        sub_3B6AC(0, v10, 0, (int)v10);
        return -2147482112;
      }
      else
      {
        *a4 = v11;
        v14 = 2;
        return 2;
      }
    }
  }
  else
  {
    snprintf(v10, 0x800u, " Bad T-sensor param, input chain is %d\n", v9);
    sub_3B6AC(0, v10, 0, (int)v10);
    return -2147482111;
  }
}
