int __fastcall sub_C6040(int *a1)
{
  int v2; // r0
  int v3; // r6
  int *v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int *v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2

  v2 = sub_E0740(60, "crypto/ec/ec_kmeth.c", 157);
  v3 = v2;
  if ( v2 )
  {
    if ( a1 )
    {
      v4 = (int *)v2;
      v5 = *a1;
      v6 = a1[1];
      v7 = a1[2];
      v8 = a1[3];
      v9 = a1 + 4;
      *v4 = v5;
      v4[1] = v6;
      v4[2] = v7;
      v4[3] = v8;
      v4 += 4;
      v10 = *v9;
      v11 = v9[1];
      v12 = v9[2];
      v13 = v9[3];
      v9 += 4;
      *v4 = v10;
      v4[1] = v11;
      v4[2] = v12;
      v4[3] = v13;
      v4 += 4;
      v14 = *v9;
      v15 = v9[1];
      v16 = v9[2];
      v17 = v9[3];
      v9 += 4;
      *v4 = v14;
      v4[1] = v15;
      v4[2] = v16;
      v4[3] = v17;
      v4 += 4;
      v18 = v9[1];
      v19 = v9[2];
      *v4 = *v9;
      v4[1] = v18;
      v4[2] = v19;
    }
    *(_DWORD *)(v3 + 4) |= 1u;
  }
  return v3;
}
