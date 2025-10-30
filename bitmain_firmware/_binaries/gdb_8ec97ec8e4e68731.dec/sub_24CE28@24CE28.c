int __fastcall sub_24CE28(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int8 *v5; // r0
  int v6; // r3
  int v7; // r2
  int result; // r0
  bool v9; // cf
  int v10; // r3
  int v11; // r2
  unsigned int v12; // [sp+0h] [bp-Ch] BYREF
  int v13; // [sp+4h] [bp-8h]

  v5 = sub_99188(a1, &v12);
  if ( a2 )
  {
    a2[30] += v12;
    sub_99188(v5 + 1, &v12);
    v6 = a2[38];
    v7 = a2[39];
    result = v13;
    v9 = __CFADD__(v6, v12);
    a2[38] = v6 + v12;
    a2[39] = result + v9 + v7;
  }
  else
  {
    a3[14] += v12;
    sub_99188(v5 + 1, &v12);
    v10 = a3[16];
    v11 = a3[17];
    result = v13;
    v9 = __CFADD__(v10, v12);
    a3[16] = v10 + v12;
    a3[17] = result + v9 + v11;
  }
  return result;
}
