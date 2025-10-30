int __fastcall sub_82638(int *a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r3
  int *v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r8
  int v15; // r7
  int v16; // r4
  int v17; // r3
  int v18; // r0
  _DWORD *v19; // r0
  int *v20; // r3
  _DWORD *v21; // r11
  int v22; // r1
  int v23; // r1
  int v24; // r3
  int v25; // r10
  int v26; // r10
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v30; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r7
  int v35; // r0
  int v36; // r8
  int v37; // r0
  int v38; // r4
  int v39; // r1
  int i; // r4
  int v41; // r1
  int v42; // [sp+Ch] [bp-18h]
  int v43; // [sp+14h] [bp-10h]
  _BOOL4 v44; // [sp+18h] [bp-Ch]
  int v45; // [sp+1Ch] [bp-8h]

  v43 = sub_D93F0();
  v6 = *(_DWORD *)(a1[257] + 16) & 0x30000;
  if ( v6 )
    goto LABEL_4;
  v7 = a1[315];
  if ( (v7 & 0x400000) == 0 )
  {
    v28 = a3;
    v45 = 0;
    a3 = a2;
    a2 = v28;
    goto LABEL_5;
  }
  if ( (v7 & 0x200000) == 0 )
    goto LABEL_4;
  if ( sub_10C010(a2, v7 << 10, v7 & 0x400000) <= 0 )
    goto LABEL_4;
  if ( *(_DWORD *)(sub_10C01C(a2, 0) + 24) != 0x80000 )
    goto LABEL_4;
  v34 = sub_10C010(a3, v32, v33);
  if ( v34 <= 0 )
    goto LABEL_4;
  while ( 1 )
  {
    v35 = sub_10C01C(a3, v6);
    if ( *(_DWORD *)(v35 + 24) == 0x80000 )
      break;
    if ( v34 == ++v6 )
      goto LABEL_4;
  }
  v36 = v35;
  v37 = sub_10BF44(0, v34);
  v45 = v37;
  if ( v37 )
  {
    v38 = v6 + 1;
    sub_10BD3C(v37, v36);
    if ( v34 > v38 )
    {
      do
      {
        v39 = sub_10C01C(a3, v38++);
        if ( *(_DWORD *)(v39 + 24) == 0x80000 )
          sub_10BD3C(v45, v39);
      }
      while ( v34 != v38 );
    }
    for ( i = 0; i != v34; ++i )
    {
      v41 = sub_10C01C(a3, i);
      if ( *(_DWORD *)(v41 + 24) != 0x80000 )
        sub_10BD3C(v45, v41);
    }
    a3 = v45;
  }
  else
  {
LABEL_4:
    v45 = 0;
  }
LABEL_5:
  v8 = (int *)a1[1];
  v9 = *(_DWORD *)(v8[25] + 48) & 8;
  if ( v9 )
    goto LABEL_73;
  v10 = *v8;
  v11 = *v8 != 0x10000;
  if ( v10 < 772 )
    v11 = 0;
  if ( !v11 )
  {
LABEL_73:
    v44 = 0;
    sub_A4BD4(a1);
    sub_8A8F4(a1);
    goto LABEL_28;
  }
  v12 = a1[305];
  if ( !v12 )
  {
LABEL_89:
    v44 = v12;
    goto LABEL_28;
  }
  v13 = (_DWORD *)a1[257];
  v11 = v13[5];
  if ( v11 )
  {
    v11 = v13[6];
    if ( v11 )
    {
      v44 = 0;
      goto LABEL_28;
    }
  }
  if ( v13[10] && (v9 = v13[11]) != 0
    || v13[15] && (v9 = v13[16]) != 0
    || v13[20] && (v9 = v13[21]) != 0
    || v13[25] && (v9 = v13[26]) != 0
    || v13[30] && (v9 = v13[31]) != 0
    || v13[35] && (v9 = v13[36]) != 0
    || v13[40] && (v9 = v13[41]) != 0 )
  {
    v44 = 0;
    goto LABEL_28;
  }
  v9 = v13[45];
  if ( !v9 )
  {
    v12 = 1;
    goto LABEL_89;
  }
  v44 = v13[46] == 0;
LABEL_28:
  LOBYTE(v14) = 0;
  v15 = 0;
  v16 = 0;
  v42 = 0;
  while ( v16 < sub_10C010(a3, v11, v9) )
  {
    v19 = (_DWORD *)sub_10C01C(a3, v16);
    v20 = (int *)a1[1];
    v21 = v19;
    v22 = *(_DWORD *)(v20[25] + 48);
    v9 = v22 << 28;
    if ( (v22 & 8) != 0 )
    {
      v17 = *a1;
      v11 = v19[10];
      if ( *a1 == 256 )
      {
        if ( v11 != 256 )
        {
          v18 = 65280;
          goto LABEL_32;
        }
      }
      else
      {
        v18 = *a1;
        if ( v11 == 256 )
          v11 = 65280;
LABEL_32:
        if ( v11 < v18 )
          goto LABEL_33;
        if ( v17 != 256 )
        {
          v11 = v21[11];
          if ( v11 == 256 )
            v11 = 65280;
          goto LABEL_56;
        }
      }
      v11 = v21[11];
      if ( v11 != 256 )
      {
        v17 = 65280;
LABEL_56:
        if ( v17 < v11 )
          goto LABEL_33;
      }
LABEL_57:
      v29 = a1[31];
      v15 = v21[4];
      v11 = *(_DWORD *)(v29 + 672);
      v30 = *(_DWORD *)(v29 + 676);
      v14 = v21[5];
      if ( (a1[402] & 0x20) != 0 )
      {
        v11 |= 0x20u;
        v30 |= 0x40u;
      }
      if ( (v15 & 0x1C8) != 0 && !a1[305]
        || (v11 & v15) == 0
        || (v30 & v14) == 0
        || (v15 & 4) != 0 && !sub_A2CB4(a1, v21[3]) )
      {
        goto LABEL_33;
      }
      goto LABEL_41;
    }
    v11 = *a1;
    if ( *a1 < v19[8] || v11 > v19[9] )
      goto LABEL_33;
    v23 = *v20;
    v24 = *v20 == 0x10000;
    if ( v23 < 772 )
      v24 |= 1u;
    if ( v24 )
      goto LABEL_57;
LABEL_41:
    v25 = sub_10BC4C(a2, v21);
    if ( v25 >= 0 && sub_854EC(a1, (char *)&dword_10000 + 2, v21[14], 0, v21) )
    {
      v9 = v15 << 29;
      if ( (v15 & 4) != 0 && (v14 & 8) != 0 && *(_BYTE *)(a1[31] + 852) )
      {
        if ( !v42 )
          v42 = sub_10C01C(a2, v25);
      }
      else
      {
        if ( !v44 )
        {
          v42 = sub_10C01C(a2, v25);
          break;
        }
        v26 = sub_10C01C(a2, v25);
        if ( v43 == sub_864EC(*(_DWORD *)(v26 + 52)) )
        {
          v42 = v26;
          break;
        }
        v9 = v42;
        v27 = v42;
        if ( !v42 )
          v27 = v26;
        v42 = v27;
      }
    }
LABEL_33:
    ++v16;
  }
  sub_10BDB4(v45);
  return v42;
}
