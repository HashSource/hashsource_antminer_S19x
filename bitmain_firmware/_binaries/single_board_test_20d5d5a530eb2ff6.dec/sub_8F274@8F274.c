int __fastcall sub_8F274(_DWORD *a1, int a2, int a3, int *a4, int *a5, int a6)
{
  int v6; // r4
  int v7; // r11
  unsigned __int8 *v9; // r6
  unsigned int v10; // r7
  int v11; // r0
  unsigned __int8 *v12; // r10
  unsigned int v13; // r5
  int v14; // r4
  unsigned int v15; // r5
  unsigned __int8 *v16; // r8
  unsigned int v17; // r7
  int v18; // r2
  _DWORD *v19; // r3
  int v20; // r3
  unsigned __int8 **v21; // r2
  _BOOL4 v22; // r3
  unsigned int v23; // r3
  bool v24; // r1
  bool v25; // r1
  _BOOL4 v26; // r1
  unsigned __int8 *v27; // r0
  void (__fastcall *v28)(_DWORD *, bool, int, unsigned __int8 *, unsigned int, _DWORD); // r11
  int v30; // r1
  int v31; // r0
  int v32; // r3
  int v33; // r2
  _BOOL4 v34; // r3
  int *v35; // r4
  int v36; // r3
  int v37; // r1
  int v38; // [sp+Ch] [bp-30h]
  int v39; // [sp+10h] [bp-2Ch]
  int v40; // [sp+14h] [bp-28h]
  int v41; // [sp+18h] [bp-24h]
  int v42; // [sp+24h] [bp-18h]
  int v43; // [sp+28h] [bp-14h]
  int v45; // [sp+34h] [bp-8h] BYREF

  v6 = a1[257];
  v7 = a3;
  v9 = *(unsigned __int8 **)a2;
  v10 = *(_DWORD *)(a2 + 4);
  *a4 = 0;
  v41 = v6 + 240;
  v39 = a3 & 0x80;
  if ( (a3 & 0x80) != 0 )
  {
    sub_9234C(a1[257] + 240);
    if ( v6 != -240 )
      goto LABEL_3;
  }
  else if ( v6 != -240 )
  {
LABEL_3:
    v43 = *(_DWORD *)(v6 + 244) + 26;
    v11 = 24 * v43;
    goto LABEL_4;
  }
  v11 = 624;
  v43 = 26;
LABEL_4:
  v38 = sub_E0740(v11, "ssl/statem/extensions.c", 577);
  if ( v38 )
  {
    if ( v10 )
    {
      if ( v10 <= 1 )
        goto LABEL_38;
      v12 = 0;
      v13 = v10;
      v42 = v7 & 0x100;
      v40 = v7;
      while ( 2 )
      {
        v14 = v9[1] | (*v9 << 8);
        if ( v13 - 2 <= 1 )
          goto LABEL_38;
        v15 = v13 - 4;
        v16 = v9 + 4;
        v17 = v9[3] | (v9[2] << 8);
        if ( v17 > v15 )
          goto LABEL_38;
        v13 = v15 - v17;
        v9 = &v16[v17];
        v18 = 0;
        v19 = &unk_2162B0;
        while ( v14 != *v19 )
        {
          ++v18;
          v19 += 8;
          if ( v18 == 26 )
          {
            if ( !v41 )
              goto LABEL_51;
            v45 = 0;
            if ( v39 )
              v30 = 1;
            else
              v30 = v42 ? 0 : 2;
            v31 = sub_92300(v41, v30, v14, &v45);
            if ( !v31 )
              goto LABEL_51;
            v32 = *(_DWORD *)(v31 + 8);
            if ( (v40 & v32) == 0 )
              goto LABEL_53;
            if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
            {
              if ( (v32 & 1) == 0 )
              {
                v33 = v45 + 26;
                goto LABEL_50;
              }
LABEL_53:
              sub_95494(a1, 47, 435, 110, "ssl/statem/extensions.c", 607);
              goto LABEL_39;
            }
            if ( (v32 & 2) != 0 )
              goto LABEL_53;
            v33 = v45 + 26;
LABEL_50:
            v21 = (unsigned __int8 **)(v38 + 24 * v33);
            if ( !v21 )
              goto LABEL_51;
            goto LABEL_17;
          }
        }
        v20 = v19[1];
        if ( (v40 & v20) == 0 )
          goto LABEL_53;
        if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
        {
          if ( (v20 & 1) != 0 )
            goto LABEL_53;
        }
        else if ( (v20 & 2) != 0 )
        {
          goto LABEL_53;
        }
        v21 = (unsigned __int8 **)(v38 + 24 * v18);
        if ( !v21 )
        {
LABEL_51:
          v21 = 0;
          goto LABEL_18;
        }
LABEL_17:
        if ( v21[2] == (unsigned __int8 *)1 )
          goto LABEL_53;
LABEL_18:
        v22 = v14 == 41;
        if ( !v39 )
          v22 = 0;
        if ( v22 && v13 )
          goto LABEL_53;
        v23 = -1431655765 * (((int)v21 - v38) >> 3);
        if ( v23 <= 0x19 )
        {
          v24 = v14 != 44;
          if ( (v40 & 0x6080) != 0 )
            v24 = 0;
          v25 = v14 != 65281 && v24;
          v26 = v14 != 18 && v25;
          if ( v26 && (*((_BYTE *)a1 + v23 + 1300) & 2) == 0 )
          {
            v34 = v14 != 65000;
            if ( !v42 )
              v34 = 1;
            if ( v34 )
            {
              sub_95494(a1, 110, 435, 217, "ssl/statem/extensions.c", 639);
              goto LABEL_39;
            }
          }
        }
        if ( v21 )
        {
          *v21 = v16;
          v21[1] = (unsigned __int8 *)v17;
          v27 = v12 + 1;
          v28 = (void (__fastcall *)(_DWORD *, bool, int, unsigned __int8 *, unsigned int, _DWORD))a1[332];
          v21[5] = v12++;
          v21[4] = (unsigned __int8 *)v14;
          v21[2] = (unsigned __int8 *)1;
          if ( v28 )
          {
            v12 = v27;
            v28(a1, a1[7] == 0, v14, v16, v17, a1[333]);
          }
        }
        if ( v13 )
        {
          if ( v13 != 1 )
            continue;
LABEL_38:
          sub_95494(a1, 50, 435, 110, "ssl/statem/extensions.c", 593);
LABEL_39:
          CRYPTO_free(v38, "ssl/statem/extensions.c", 677);
          return 0;
        }
        break;
      }
      v7 = v40;
    }
    if ( a6 )
    {
      v35 = (int *)&unk_2162B0;
      do
      {
        while ( 1 )
        {
          v36 = v35[2];
          __pld(v35 + 41);
          if ( v36 )
          {
            v37 = v35[1];
            if ( (v7 & v37) != 0 )
            {
              if ( sub_8F1B0(a1, v37, v7) )
                break;
            }
          }
          v35 += 8;
          if ( v35 == &dword_2165F0 )
            goto LABEL_72;
        }
        if ( !((int (__fastcall *)(_DWORD *, int))v35[2])(a1, v7) )
          goto LABEL_39;
        v35 += 8;
      }
      while ( v35 != &dword_2165F0 );
    }
LABEL_72:
    *a4 = v38;
    if ( a5 )
      *a5 = v43;
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 435, 65, "ssl/statem/extensions.c", 580);
    return 0;
  }
}
