int __fastcall sub_E21EC(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r1
  int v5; // r12
  int v6; // r2
  int v7; // r3
  bool v8; // zf
  _DWORD *v9; // r3
  int v10; // r4
  int v11; // lr
  int v12; // r12
  int v13; // r2
  _DWORD *v14; // r1
  int v17; // [sp+10h] [bp-18h] BYREF
  int v18; // [sp+14h] [bp-14h] BYREF
  int v19; // [sp+1Ch] [bp-Ch] BYREF
  int v20; // [sp+20h] [bp-8h] BYREF
  int v21; // [sp+24h] [bp-4h] BYREF

  v18 = a2;
  v3 = (_DWORD *)a1[6];
  v4 = (_DWORD *)a1[7];
  v17 = a3;
  if ( v4 != v3 )
  {
    v5 = *(v4 - 2);
    v6 = *(v4 - 4);
    v20 = *(v4 - 3) + 1;
    v19 = v5;
    if ( v4 != (_DWORD *)52 )
    {
      v7 = *(v4 - 5);
      v8 = v7 == 0;
      if ( v7 )
        ++v6;
      else
        v7 = *(v4 - 7);
      if ( v8 )
        v6 += (v7 - *(v4 - 8)) >> 4;
    }
    v9 = (_DWORD *)a1[8];
    v21 = v6;
    if ( v4 != v9 )
      goto LABEL_9;
LABEL_13:
    sub_E3E0C(a1 + 6, v4, &v18, &v17, &v20, &v21, &v19);
    return a1[7] - 52;
  }
  v19 = 0;
  v20 = 1;
  v21 = 1;
  if ( v4 == (_DWORD *)a1[8] )
    goto LABEL_13;
LABEL_9:
  if ( v4 )
  {
    v10 = v20;
    v11 = v21;
    v12 = v19;
    v4[1] = v17;
    v13 = v18;
    v4[10] = v10;
    v4[9] = v11;
    v4[11] = v12;
    *v4 = v13;
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 0;
    v4[5] = 0;
    v4[6] = 0;
    v4[7] = 0;
    v4[8] = 0;
    v4[12] = 0;
  }
  v14 = v4 + 13;
  a1[7] = v14;
  return (int)(v14 - 13);
}
