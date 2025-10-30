int __fastcall sub_7D810(_DWORD *a1, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v6; // r7
  int v7; // r5
  unsigned int v8; // r11
  int v9; // r8
  int *v10; // r10
  int v11; // r2
  _DWORD *v12; // r4
  int v13; // r5
  int v14; // r1
  int v15; // r0
  int v16; // r5
  int v17; // r1
  int v18; // r2
  int result; // r0
  int v20; // r2
  unsigned int v21; // r3
  int v22; // r1
  int v23; // r3

  if ( a1[964] <= a4 && ((v6 = a1 + 414, (a1[316] & 2) != 0) || a1[967] == a3) && a1[965] == a2 )
  {
    v7 = a1[418];
    v8 = 0;
    v9 = 0;
    v10 = _errno_location();
    while ( 1 )
    {
      v11 = v9 + v8;
      v12 = &v6[v9 + v8];
      if ( !v7 )
      {
        do
        {
          if ( v8 >= a1[408] - 1 )
            break;
          ++v8;
          v13 = v12[9];
          v9 = 4 * v8;
          v11 = 5 * v8;
          v12 = &v6[5 * v8];
        }
        while ( !v13 );
      }
      v14 = a1[3];
      *v10 = 0;
      v15 = v14;
      if ( !v14 )
        break;
      v16 = v6[v11];
      v17 = v12[3];
      v18 = v12[4];
      a1[5] = 2;
      result = sub_B69CC(v15, v17 + v16, v18);
      if ( result <= 0 )
        goto LABEL_15;
      v7 = v12[4] - result;
      if ( v7 )
      {
        v20 = v12[3];
        v12[4] = v7;
        v12[3] = result + v20;
      }
      else
      {
        v21 = a1[408];
        v22 = v12[3];
        v7 = 0;
        v12[4] = 0;
        v12[3] = result + v22;
        if ( v8 + 1 >= v21 )
        {
          v23 = a1[966];
          a1[5] = 1;
          *a5 = v23;
          return 1;
        }
      }
    }
    sub_95494(a1, 80, 159, 128, "ssl/record/rec_layer_s3.c", 1174);
    result = -1;
LABEL_15:
    if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
      v12[4] = 0;
  }
  else
  {
    sub_95494(a1, 80, 159, 127, "ssl/record/rec_layer_s3.c", 1151);
    return -1;
  }
  return result;
}
