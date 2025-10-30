int __fastcall sub_69B1C(unsigned int a1, int a2, unsigned __int8 a3)
{
  int v4; // r1
  char v9[8]; // [sp+1Ch] [bp-818h] BYREF
  unsigned int v10; // [sp+81Ch] [bp-18h] BYREF
  __int16 v11; // [sp+820h] [bp-14h]
  char v12; // [sp+822h] [bp-12h]
  char v13; // [sp+823h] [bp-11h]
  int v14; // [sp+824h] [bp-10h]
  int v15; // [sp+828h] [bp-Ch]
  unsigned __int8 i; // [sp+82Fh] [bp-5h]

  v15 = -2147482111;
  if ( a1 <= 0xF )
  {
    if ( a3 <= 7u )
    {
      for ( i = 0; i < (unsigned int)a3; ++i )
      {
        v14 = sub_6A4B0(a1, *(unsigned __int8 *)(a2 + i));
        if ( v14 == -2147482112 )
        {
          v10 = a1;
          v11 = 0;
          v12 = ((*(unsigned __int8 *)(a2 + i) + a1) >> 3) & 0xF;
          v13 = (*(_BYTE *)(a2 + i) + a1) & 7;
          v15 = sub_6A5F8(&v10);
          if ( v15 < 0 )
          {
            snprintf(
              v9,
              0x800u,
              " open T-sensor error, chain is %d,slave addr is %d\n",
              a1,
              *(unsigned __int8 *)(a2 + i));
            sub_3AF5C(0, v9, 0, (int)v9);
            return v15;
          }
          v4 = *((unsigned __int8 *)&unk_5316AC + 68 * a1);
          *((_BYTE *)&unk_5316AC + 68 * a1) = v4 + 1;
          v14 = v4;
          *((_BYTE *)&unk_5316AC + 68 * a1 + 8 * v4 + 4) = *(_BYTE *)(a2 + i);
          *((_DWORD *)&unk_5316AC + 17 * a1 + 2 * v14 + 2) = v15;
        }
      }
      return 0;
    }
    else
    {
      snprintf(v9, 0x800u, " Bad T-sensor param, input num is %d\n", a3);
      sub_3AF5C(0, v9, 0, (int)v9);
      return -2147482111;
    }
  }
  else
  {
    snprintf(v9, 0x800u, " Bad T-sensor param, input chain is %d\n", a1);
    sub_3AF5C(0, v9, 0, (int)v9);
    return -2147482111;
  }
}
