int __fastcall sub_1B7F4(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r12
  int v6; // r4
  unsigned __int8 *v7; // lr
  int v8; // t1
  int v9; // r3
  double v11; // [sp+0h] [bp-2Ch] BYREF
  char v12[32]; // [sp+8h] [bp-24h] BYREF

  v3 = 0;
  v4 = sub_30578(a1, a2);
  v5 = dword_A0D68;
  v6 = dword_A0D68 + 64;
  v7 = (unsigned __int8 *)(dword_A0D68 + 12918);
  v11 = (double)v4;
  strcpy(v12, "total_freqavg");
  do
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v5 + 4);
      v5 += 4;
      if ( v8 == 1 )
        break;
      ++v7;
      if ( v5 == v6 )
        goto LABEL_7;
    }
    v9 = *v7++;
    if ( v9 )
      v3 += v9;
  }
  while ( v5 != v6 );
LABEL_7:
  v11 = (double)(int)((double)v4 / (double)v3 * 100.0) / 100.0;
  return sub_43F2C(a1, v12, &v11, 1);
}
