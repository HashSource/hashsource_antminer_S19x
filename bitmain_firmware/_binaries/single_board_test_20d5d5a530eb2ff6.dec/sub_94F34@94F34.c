int __fastcall sub_94F34(int a1, int a2)
{
  int v5; // r3
  int v6; // r1
  int v7; // r1
  int v8; // r1
  time_t v9; // r0
  int v10; // r0
  int v11; // r8
  int v12; // r0
  int v13; // r9
  _BOOL4 v14; // r4
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // [sp+4h] [bp-5Ch]
  int v20; // [sp+Ch] [bp-54h] BYREF
  int v21; // [sp+10h] [bp-50h] BYREF
  int v22; // [sp+14h] [bp-4Ch] BYREF
  int v23; // [sp+18h] [bp-48h] BYREF
  int v24; // [sp+1Ch] [bp-44h] BYREF
  int v25; // [sp+20h] [bp-40h] BYREF
  int v26; // [sp+24h] [bp-3Ch] BYREF
  int v27; // [sp+28h] [bp-38h] BYREF
  _BYTE v28[4]; // [sp+2Ch] [bp-34h] BYREF
  unsigned int v29; // [sp+30h] [bp-30h] BYREF
  unsigned int v30; // [sp+34h] [bp-2Ch] BYREF
  int v31; // [sp+38h] [bp-28h] BYREF
  int v32; // [sp+3Ch] [bp-24h] BYREF

  if ( (**(_DWORD **)(a1 + 124) & 0x800) == 0 )
    return 2;
  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 1232) + 132) )
  {
    sub_95494(a1, 80, 613, 287, "ssl/statem/extensions_srvr.c", 1786);
    return 0;
  }
  if ( sub_A8450(a2, a2, 44, 0, 2)
    && sub_A8398(a2, 2)
    && sub_A8398(a2, 2)
    && sub_A820C(a2, &v27)
    && sub_A8250(a2, 4214, &v24)
    && sub_A8450(a2, v6, 1, 0, 2)
    && sub_A8450(a2, v7, 772, 0, 2)
    && sub_A8450(a2, v8, *(unsigned __int16 *)(*(_DWORD *)(a1 + 124) + 854), 0, 2)
    && (*(int (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)(a1 + 4) + 80))(
         *(_DWORD *)(*(_DWORD *)(a1 + 124) + 528),
         a2,
         v28)
    && sub_A8450(a2, 1, *(_DWORD *)(*(_DWORD *)(a1 + 124) + 856) == 0, 0, 1)
    && (v9 = time(0), sub_A8450(a2, 8, v9, v9 >> 31, 8))
    && sub_A8398(a2, 2)
    && sub_A8250(a2, 64, &v20) )
  {
    if ( !sub_A9244(a1, 0) || !sub_8B6E8(a1, v20, 0x40u, &v30) )
      return 0;
    if ( sub_A82B8(a2, v30, &v21) && v20 == v21 && sub_A7EDC(a2) && sub_A8398(a2, 1) && sub_A8250(a2, 4096, &v22) )
    {
      if ( !(*(int (__fastcall **)(int, int, int *))(*(_DWORD *)(a1 + 1232) + 132))(a1, v22, &v32) )
      {
        sub_95494(a1, 80, 613, 400, "ssl/statem/extensions_srvr.c", 1834);
        return 0;
      }
      if ( sub_A82B8(a2, v32, &v23)
        && v22 == v23
        && sub_A7EDC(a2)
        && sub_A820C(a2, &v29)
        && (v10 = sub_A8250(a2, 32, &v25)) != 0 )
      {
        v31 = 32;
        v29 -= v27;
        if ( v29 <= 0x1056 )
        {
          v11 = sub_D14F4(v10);
          v12 = sub_DA2B8(855, 0, *(_DWORD *)(a1 + 1504) + 400, 32);
          v13 = v12;
          if ( v11 && (v14 = v12 == 0, v12) )
          {
            v15 = sub_D93F0(v12);
            if ( sub_D9454(v11, 0, v15) <= 0 || sub_D97AC(v11, v25, &v31, v24, v29) <= 0 )
            {
              v16 = 1872;
            }
            else
            {
              if ( v29 + v31 > 0x1076 )
              {
                sub_95494(a1, 80, 613, 68, "ssl/statem/extensions_srvr.c", 1878);
LABEL_45:
                sub_D1504(v11);
                sub_DA240(v13);
                return v14;
              }
              if ( sub_A82B8(a2, v31, &v26) && v25 == v26 && v24 == v25 - v29 && sub_A7EDC(a2) && sub_A7EDC(a2) )
              {
                v14 = 1;
                goto LABEL_45;
              }
              v16 = 1888;
            }
            v19 = v16;
            v17 = a1;
            v18 = 68;
          }
          else
          {
            v19 = 1864;
            v17 = a1;
            v18 = 65;
          }
          v14 = 0;
          sub_95494(v17, 80, 613, v18, "ssl/statem/extensions_srvr.c", v19);
          goto LABEL_45;
        }
        v5 = 1852;
      }
      else
      {
        v5 = 1844;
      }
    }
    else
    {
      v5 = 1827;
    }
  }
  else
  {
    v5 = 1806;
  }
  sub_95494(a1, 80, 613, 68, "ssl/statem/extensions_srvr.c", v5);
  return 0;
}
