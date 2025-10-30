signed int __fastcall sub_15BB54(int a1, char *a2, int a3)
{
  char *v4; // r7
  int *v5; // r4
  int v6; // r0
  bool v7; // zf
  _BOOL4 v8; // r5
  signed int v9; // r8
  int v10; // r1
  char *v11; // r1
  int v12; // r3
  int v13; // r3
  char *v14; // r3
  char *v15; // r5
  signed int v16; // r5
  int v17; // r3
  signed int v18; // r2
  signed int v19; // r3
  int v21; // r0
  signed int v22; // r5
  void *v23; // r0
  int v24; // r0
  int v25; // r10
  signed int v26; // r2
  int v28; // [sp+Ch] [bp-18h]
  int v29; // [sp+14h] [bp-10h]
  int v30; // [sp+1Ch] [bp-8h] BYREF

  if ( !a2 )
    return 0;
  v4 = a2;
  v5 = (int *)sub_B66C8(a1);
  v6 = sub_B7170(a1);
  v7 = v6 == 0;
  if ( v6 )
    v7 = v5 == 0;
  v29 = v6;
  v8 = v7;
  if ( v7 )
    return 0;
  if ( *v5 > 0 )
  {
    v10 = v5[1];
    v9 = *v5 - v10;
    v11 = (char *)v5 + v10 + 32;
    if ( v9 >= a3 )
      v9 = a3;
    a3 -= v9;
    memcpy(v4, v11, v9);
    v4 += v9;
    v12 = v5[1] + v9;
    v7 = v12 == *v5;
    v5[1] = v12;
    if ( v7 )
    {
      *v5 = v8;
      v5[1] = v8;
    }
  }
  else
  {
    v9 = v8;
  }
  v13 = sub_D8904(v5[5]);
  if ( v13 == 1 )
    v13 = 0;
  v28 = v13;
  if ( a3 <= 0 || v5[2] <= 0 )
    goto LABEL_27;
  v14 = (char *)v5[6];
  while ( 1 )
  {
    v15 = (char *)v5[7];
    if ( v15 == v14 )
      goto LABEL_40;
    while ( 1 )
    {
      v16 = v15 - v14;
      if ( v16 <= 0 )
        goto LABEL_31;
      if ( a3 <= 256 )
        break;
      while ( 1 )
      {
        v25 = a3 - v28;
        v26 = a3 - v28;
        if ( a3 - v28 >= v16 )
          v26 = v16;
        if ( !sub_D8188((_DWORD *)v5[5], (int)v4, &v30, v14, v26) )
        {
          sub_B66FC(a1, 15);
          return 0;
        }
        v16 -= v25;
        v9 += v30;
        v4 += v30;
        a3 -= v30;
        if ( v16 > 0 )
        {
          v14 = (char *)(v5[6] + v25);
          v5[6] = (int)v14;
          goto LABEL_22;
        }
        v5[6] = v5[7];
LABEL_37:
        if ( a3 <= 0 || v5[2] <= 0 )
          goto LABEL_27;
        v14 = (char *)v5[6];
        v15 = (char *)v5[7];
        if ( v15 != v14 )
          break;
LABEL_40:
        v5[6] = (int)(v5 + 80);
        v5[7] = (int)(v5 + 80);
        v24 = sub_B6740(v29, (int)(v5 + 80), 4096);
        v16 = v24;
        if ( v24 <= 0 )
        {
LABEL_31:
          if ( !sub_B6708(v29, 8) )
          {
            v5[2] = v16;
            v21 = sub_D83A0((_DWORD *)v5[5], (unsigned int)(v5 + 8), v5);
            v18 = *v5;
            v5[1] = 0;
            v5[4] = v21;
LABEL_33:
            if ( v18 >= a3 )
              v18 = a3;
            v22 = v18;
            if ( v18 > 0 )
            {
              v23 = v4;
              v9 += v18;
              a3 -= v18;
              v4 += v18;
              memcpy(v23, v5 + 8, v18);
              v5[1] = v22;
              goto LABEL_37;
            }
LABEL_27:
            sub_B66FC(a1, 15);
            sub_B724C(a1);
            v19 = v9;
            if ( !v9 )
              return v5[2];
            return v19;
          }
          if ( !v9 )
          {
            v9 = v16;
            goto LABEL_27;
          }
          sub_B66FC(a1, 15);
          sub_B724C(a1);
          return v9;
        }
        v14 = (char *)v5[6];
        v5[7] += v24;
        if ( a3 <= 256 )
          goto LABEL_22;
      }
    }
LABEL_22:
    if ( v16 >= 256 )
      v16 = 256;
    if ( !sub_D8188((_DWORD *)v5[5], (int)(v5 + 8), v5, v14, v16) )
      break;
    v17 = v5[6];
    v18 = *v5;
    v5[2] = 1;
    v14 = (char *)(v17 + v16);
    v5[6] = (int)v14;
    if ( v18 )
      goto LABEL_33;
    if ( a3 <= 0 )
      goto LABEL_27;
  }
  sub_B66FC(a1, 15);
  v5[4] = 0;
  return 0;
}
