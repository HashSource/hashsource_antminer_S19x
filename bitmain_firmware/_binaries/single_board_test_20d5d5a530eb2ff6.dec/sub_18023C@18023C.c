int __fastcall sub_18023C(int a1, int a2, int a3)
{
  int *v6; // r4
  int v7; // r0
  bool v8; // zf
  int v9; // r8
  int v10; // r9
  int v11; // r2
  int v12; // r10
  int v14; // r2
  int v15; // r0
  int v16; // r0
  int v17; // r3
  void (__fastcall *v18)(int, int *, int *, int *); // r10
  int v19; // r3
  int v20; // r0
  int (__fastcall *v21)(int, int *, int *, int *); // r10
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r7
  int v26; // r3
  int v27; // [sp+Ch] [bp-10h]
  int v28; // [sp+Ch] [bp-10h]
  _BYTE *v29; // [sp+14h] [bp-8h] BYREF

  v6 = (int *)sub_B66C8(a1);
  v7 = sub_B7170(a1);
  if ( (a2 == 0) | ((unsigned int)a3 >> 31) )
    return 0;
  v8 = v7 == 0;
  if ( v7 )
    v8 = v6 == 0;
  v9 = v7;
  v10 = v8;
  if ( v8 )
    return 0;
  v11 = *v6;
  v27 = a2;
LABEL_9:
  while ( 2 )
  {
    switch ( v11 )
    {
      case 0:
        v21 = (int (__fastcall *)(int, int *, int *, int *))v6[8];
        if ( v21 && !v21(a1, v6 + 12, v6 + 13, v6 + 15) )
        {
          v12 = 0;
          sub_B66FC(a1, 15);
          return v12;
        }
        if ( v6[13] <= 0 )
          v11 = 2;
        else
          v11 = 1;
        *v6 = v11;
        continue;
      case 1:
        v18 = (void (__fastcall *)(int, int *, int *, int *))v6[9];
        if ( v6[13] <= 0 )
          continue;
        while ( 2 )
        {
          v20 = sub_B7170(a1);
          v15 = sub_B69CC(v20, v6[12] + v6[14], v6[13]);
          if ( v15 > 0 )
          {
            v19 = v6[13] - v15;
            v8 = v6[13] == v15;
            v6[13] = v19;
            if ( v19 >= 0 && !v8 )
            {
              v6[14] += v15;
              continue;
            }
            if ( v18 )
              v18(a1, v6 + 12, v6 + 13, v6 + 15);
            *v6 = 2;
            v6[14] = 0;
            v11 = 2;
            goto LABEL_9;
          }
          break;
        }
LABEL_28:
        v28 = v15;
        sub_B66FC(a1, 15);
        sub_B724C(a1);
        v12 = v28;
        if ( v10 )
          return v10;
        return v12;
      case 2:
        v22 = sub_AE038(0, a3, v6[7]);
        v23 = v6[2];
        v24 = v22 - a3;
        v6[4] = v24;
        if ( v24 > v23 )
          return 0;
        v25 = v6[6];
        v26 = v6[7];
        v29 = (_BYTE *)v6[1];
        sub_ADE9C(&v29, 0, a3, v26, v25);
        v11 = 3;
        v6[5] = a3;
        *v6 = 3;
        continue;
      case 3:
        v15 = sub_B69CC(v9, v6[1] + v6[3], v6[4]);
        if ( v15 <= 0 )
          goto LABEL_28;
        v17 = v6[4] - v15;
        v6[4] = v17;
        if ( v17 )
        {
          v11 = *v6;
          v6[3] += v15;
        }
        else
        {
          v11 = 4;
          v6[3] = 0;
          *v6 = 4;
        }
        continue;
      case 4:
        v14 = v6[5];
        if ( v14 >= a3 )
          v14 = a3;
        v15 = sub_B69CC(v9, v27, v14);
        if ( v15 <= 0 )
          goto LABEL_28;
        v10 += v15;
        a3 -= v15;
        v27 += v15;
        v16 = v6[5] - v15;
        v6[5] = v16;
        if ( !v16 )
          *v6 = 2;
        if ( !a3 )
        {
          sub_B66FC(a1, 15);
          v12 = v10;
          sub_B724C(a1);
          return v12;
        }
        v11 = *v6;
        continue;
      case 5:
      case 6:
        sub_B66FC(a1, 15);
        return 0;
      default:
        continue;
    }
  }
}
