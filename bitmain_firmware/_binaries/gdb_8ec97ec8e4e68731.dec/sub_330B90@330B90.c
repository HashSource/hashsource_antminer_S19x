int __fastcall sub_330B90(int a1, int a2, int *a3)
{
  char v3; // r3
  int v5; // r4
  int v6; // r1
  int *v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r6
  int v17; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD v18[2]; // [sp+10h] [bp-28h] BYREF
  char v19; // [sp+18h] [bp-20h]
  __int16 v20; // [sp+1Ah] [bp-1Eh]
  int v21[5]; // [sp+1Ch] [bp-1Ch] BYREF
  int v22; // [sp+30h] [bp-8h]
  int v23; // [sp+34h] [bp-4h]

  v3 = *(_BYTE *)(a2 + 8);
  v5 = a1;
  v17 = 0;
  if ( (v3 & 0x70) != 0 )
  {
    if ( (v3 & 0x40) != 0 )
      sub_32AB6C(a1, a2);
    else
      sub_32AC0C(a1, a2, 0, a3, &v17);
    v6 = v17;
  }
  else
  {
    if ( *(int *)(a2 + 4) >= 0 )
      return sub_32AB6C(a1, a2);
    v9 = a3;
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[2];
    v13 = v9[3];
    v9 += 4;
    v19 = 0;
    v18[1] = 0;
    v21[0] = v10;
    v21[1] = v11;
    v21[2] = v12;
    v21[3] = v13;
    v20 = 0;
    v14 = v9[1];
    v15 = v9[2];
    v16 = *(_DWORD *)a2;
    v18[0] = 1;
    v22 = v14;
    v23 = v15;
    v21[4] = 0;
    v21[0] = v16;
    sub_330B40(v5, a2, (int)v18, v21);
    v6 = v22 | v17;
    v17 |= v22;
  }
  if ( v6 )
  {
    sub_327DE4(v5, v6, (int)a3);
    return v5;
  }
  return v5;
}
