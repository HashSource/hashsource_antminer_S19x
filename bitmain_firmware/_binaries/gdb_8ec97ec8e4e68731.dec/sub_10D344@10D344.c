int __fastcall sub_10D344(int a1, int a2, _DWORD *a3)
{
  int v3; // r12
  int v6; // r0
  _DWORD *v7; // r4
  _DWORD *v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // lr
  int v14; // [sp+4h] [bp-34h] BYREF
  int v15; // [sp+8h] [bp-30h]
  int v16; // [sp+Ch] [bp-2Ch]
  int v17; // [sp+10h] [bp-28h]
  int v18; // [sp+14h] [bp-24h]
  _DWORD v19[8]; // [sp+18h] [bp-20h] BYREF

  if ( !dword_4872C0 )
    return 0;
  v6 = sub_15ECB4(a2);
  ((void (__fastcall *)(int *, int, int))loc_1679D0)(&v14, v6, a2);
  v7 = (_DWORD *)dword_4872C0;
  v19[0] = v14;
  v19[1] = v15;
  v19[2] = v16;
  v19[3] = v17;
  v19[4] = v18;
  v19[5] = dword_4878EC;
  v19[6] = dword_4878F0;
  v19[7] = dword_4878F4;
  if ( dword_4872C0 )
  {
    while ( !sub_10D0AC(v7 + 1, v19) )
    {
      v7 = (_DWORD *)*v7;
      if ( !v7 )
        return 0;
    }
    v8 = (_DWORD *)sub_15D27C(24);
    v8[5] = sub_189310(v7[9]);
    v9 = v15;
    v10 = v16;
    v11 = v17;
    v3 = 1;
    v12 = v18;
    *v8 = v14;
    v8[1] = v9;
    v8[2] = v10;
    v8[3] = v11;
    v8[4] = v12;
    *a3 = v8;
    return v3;
  }
  return 0;
}
