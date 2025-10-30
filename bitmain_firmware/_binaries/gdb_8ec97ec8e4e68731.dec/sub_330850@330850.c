int __fastcall sub_330850(int a1, int a2, int a3, int *a4, char a5, int *a6)
{
  int v6; // r6
  int v8; // r12
  int v9; // r10
  int v13; // r9
  _BOOL4 v14; // r3
  int v15; // r12
  int v16; // r11
  int v17; // r0
  int v18; // r11
  int v19; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r1
  int v23; // r2
  unsigned __int64 v24; // r2
  int v25; // r11
  int v26; // r3
  int v27; // [sp+8h] [bp-34h]
  int v28; // [sp+18h] [bp-24h] BYREF
  int v29[7]; // [sp+1Ch] [bp-20h] BYREF

  v6 = *(unsigned __int8 *)(a2 + 8);
  v8 = *(unsigned __int8 *)(a3 + 8);
  v28 = 0;
  v9 = *a4;
  if ( ((v6 | v8) & 0x70) == 0 )
  {
    if ( a5 )
      v13 = *(_DWORD *)(a3 + 4);
    else
      v13 = sub_327B04(a3);
    if ( v13 == 0x80000000 )
      goto LABEL_4;
    v14 = a4[2] - (v9 - 1) > v13 || (unsigned int)(v13 + 2147483646) <= 1;
    if ( v14 || v13 > a4[1] )
      goto LABEL_4;
    v15 = *(_DWORD *)a2;
    if ( *(_WORD *)(a2 + 10) || v15 != 1 || (v6 & 0x70) != 0 )
    {
      v18 = v13 - *(_DWORD *)(a2 + 4);
      v27 = *(_DWORD *)(a2 + 4);
      if ( v9 < v15 - v18 )
        goto LABEL_4;
      if ( v18 <= 0 )
      {
        sub_32AB6C(a1, a2);
        if ( v18 )
        {
          v17 = sub_32845C((char *)(a1 + 10), *(_DWORD *)a1, -v18);
          v26 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v17;
          v16 = v18 + v26;
          *(_DWORD *)(a1 + 4) = v16;
        }
        else
        {
          v17 = *(_DWORD *)a1;
          v16 = *(_DWORD *)(a1 + 4);
        }
      }
      else
      {
        v19 = a4[2];
        v20 = a4[3];
        v29[1] = a4[1];
        v29[2] = v19;
        v29[3] = v20;
        v29[0] = v15 - v18;
        v21 = a4[4];
        v22 = a4[5];
        v23 = a4[6];
        *(_BYTE *)(a1 + 8) = v6;
        *(_DWORD *)(a1 + 4) = v27;
        v29[4] = v21;
        v29[5] = v22;
        v29[6] = v23;
        sub_328A00(a1, v29, (unsigned __int16 *)(a2 + 10), v15, &v28, a6);
        LODWORD(v24) = v28;
        if ( v28 )
        {
          HIDWORD(v24) = a6;
          sub_329110(a1, v29, v24);
        }
        v16 = *(_DWORD *)(a1 + 4);
        v28 = 0;
        v17 = *(_DWORD *)a1;
        if ( v13 < v16 )
        {
          if ( v9 == v17 )
          {
            *a6 = *a6 & 0xFFFFF75F | 0x80;
            return a1;
          }
          v17 = sub_32845C((char *)(a1 + 10), *(_DWORD *)a1, 1);
          v25 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v17;
          v16 = v25 - 1;
          *(_DWORD *)(a1 + 4) = v16;
        }
      }
    }
    else
    {
      sub_32AB6C(a1, a2);
      v16 = v13;
      *(_DWORD *)(a1 + 4) = v13;
      v17 = *(_DWORD *)a1;
    }
    if ( a4[1] - v17 + 1 >= v16 )
    {
      sub_329598((_DWORD *)a1, a4, &v28, a6);
      *a6 &= ~0x2000u;
      return a1;
    }
LABEL_4:
    *a6 |= 0x80u;
    return a1;
  }
  if ( (((unsigned __int8)v6 | (unsigned __int8)v8) & 0x30) != 0 )
  {
    sub_32AC0C(a1, a2, a3, a4, a6);
    return a1;
  }
  else
  {
    if ( (((unsigned __int8)v6 ^ (unsigned __int8)v8) & 0x40) != 0 )
      goto LABEL_4;
    sub_32AB6C(a1, a2);
    return a1;
  }
}
