int __fastcall sub_2CAF20(int a1, int a2)
{
  int v2; // r3
  _DWORD *v4; // r5
  int v5; // r8
  int v6; // r0
  _DWORD *v7; // r4
  int v8; // r7
  _DWORD **v9; // r2
  _DWORD **v10; // r6
  int v11; // r11
  char v12; // r9
  int v13; // r8
  int v14; // r8
  int v15; // r10
  _DWORD *v16; // r3
  _DWORD *v18; // r2
  int v19; // r1
  int v20; // r2
  _DWORD *v21; // r0
  int v22; // t1
  int v23; // r10
  int v24; // r1
  _DWORD *v25; // r10
  int v26; // r8
  _DWORD *v27; // r2
  _DWORD *v28; // r9
  int v29; // r12
  int v30; // r1
  int v31; // r10
  int v32; // r10
  int v33; // r1
  _DWORD *v34; // r0
  _DWORD *v35; // r8
  int v36; // r2
  const void *v37; // r1
  int v38; // r2
  _DWORD *v39; // r1
  int v40; // r2
  int v41; // t1
  _DWORD *i; // r3
  unsigned __int8 *v43; // r3
  int v44; // r1
  int v45; // r2
  _DWORD *v46; // r3
  int v47; // [sp+4h] [bp-18h]
  int v48; // [sp+8h] [bp-14h]
  _DWORD *v49; // [sp+14h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 2348);
  v5 = *(_DWORD *)(v2 + 444);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 6) & 4) == 0 )
    {
      v6 = (*(int (**)(void))(v2 + 348))();
      v7 = (_DWORD *)*v4;
      v47 = v6;
      if ( *v4 )
      {
LABEL_4:
        v8 = 0;
        v9 = 0;
        v10 = 0;
        v11 = v5;
        v48 = a1;
        while ( 1 )
        {
          while ( v7[1] != 1 )
          {
LABEL_5:
            v4 = v7;
            v7 = (_DWORD *)*v7;
            if ( !v7 )
              goto LABEL_15;
          }
          v12 = *((_BYTE *)v7 + 32);
          if ( (v12 & 1) != 0 )
          {
            if ( (v7[2] & 1) == 0 )
              goto LABEL_25;
            v13 = v7[9];
            if ( !v13 )
            {
LABEL_10:
              if ( v10 )
                goto LABEL_11;
LABEL_36:
              v10 = (_DWORD **)v4;
              v9 = (_DWORD **)v4;
              goto LABEL_5;
            }
            v19 = v7[10];
          }
          else
          {
            v13 = v7[9];
            if ( !v13 )
              goto LABEL_25;
            v19 = v7[10];
            v20 = *(_DWORD *)(v19 + 20) & 0x10;
            if ( !v20 )
            {
              v21 = v7 + 10;
              while ( ++v20 != v13 )
              {
                v22 = v21[1];
                ++v21;
                if ( (*(_DWORD *)(v22 + 20) & 0x10) != 0 )
                  goto LABEL_28;
              }
LABEL_25:
              if ( !v10 )
                goto LABEL_14;
              goto LABEL_11;
            }
          }
LABEL_28:
          v23 = *(_DWORD *)(v11 + 20);
          if ( (unsigned __int64)sub_347674(*(_DWORD *)(v19 + 28), v23) >> 32 )
            goto LABEL_10;
          v24 = v23;
          v25 = (_DWORD *)v7[v13 + 9];
          v26 = v25[7] + v25[9];
          if ( !((unsigned __int64)sub_347674(v26, v24) >> 32) )
            goto LABEL_10;
          if ( (v12 & 8) != 0 )
            sub_2A6BBC("elf-nacl.c", 136);
          v27 = sub_2AD09C(v48, 0x90u);
          if ( !v27 )
            return 0;
          v49 = v27;
          v28 = sub_2AD09C(v48, 0xA8u);
          if ( !v28 )
            return 0;
          v29 = v25[9];
          v30 = v25[8];
          v31 = *(_DWORD *)(v11 + 20);
          v28[7] = v26;
          v28[8] = v30 + v29;
          v32 = v31 - ((unsigned __int64)sub_347674(v26, v31) >> 32);
          v33 = v7[9] + 12;
          v28[9] = v32;
          v28[5] = (char *)&loc_100018 + 3;
          v28[35] = v49;
          v49[3] = v26;
          v49[6] = v32;
          v49[1] = 1;
          v49[2] = 6;
          v34 = (_DWORD *)sub_2ACBF4(v48, 4 * v33);
          v35 = v34;
          if ( !v34 )
            return 0;
          v36 = v7[9];
          v37 = v7;
          v7 = v34;
          memcpy(v34, v37, 4 * (v36 + 11));
          v38 = v35[9];
          v35[9] = v38 + 1;
          v35[v38 + 10] = v28;
          *v4 = v35;
          if ( !v10 )
            goto LABEL_36;
LABEL_11:
          if ( !v8 )
          {
            v14 = v7[9];
            if ( v14 )
            {
              v15 = v7[10];
              if ( v47 <= (unsigned __int64)sub_347674(*(_DWORD *)(v15 + 32), *(_DWORD *)(v11 + 20)) >> 32
                && (*(_DWORD *)(v15 + 20) & 0x18) == 8 )
              {
                v39 = v7 + 10;
                v40 = 0;
                while ( v14 != ++v40 )
                {
                  v41 = v39[1];
                  ++v39;
                  if ( (*(_DWORD *)(v41 + 20) & 0x18) != 8 )
                    goto LABEL_14;
                }
                for ( i = *v10; i != v7; i = (_DWORD *)*i )
                {
                  if ( i[1] == 1 )
                    *((_BYTE *)i + 32) &= 0xCFu;
                }
                v9 = (_DWORD **)v4;
                v8 = 1;
                *((_BYTE *)v7 + 32) |= 0x30u;
                goto LABEL_5;
              }
            }
          }
LABEL_14:
          v9 = (_DWORD **)v4;
          v4 = v7;
          v7 = (_DWORD *)*v7;
          if ( !v7 )
          {
LABEL_15:
            if ( v10 == v9 )
              v8 = 0;
            if ( v8 )
            {
              v16 = *v10;
              v18 = *v9;
              *v10 = (_DWORD *)**v10;
              *v16 = *v18;
              *v18 = v16;
              return 1;
            }
            return 1;
          }
        }
      }
    }
  }
  else
  {
    v7 = (_DWORD *)*v4;
    v43 = *(unsigned __int8 **)(*(_DWORD *)(v2 + 444) + 392);
    v44 = *v43;
    if ( *v4 )
    {
      v45 = v43[1];
      v46 = (_DWORD *)*v4;
      do
      {
        v46 = (_DWORD *)*v46;
        v44 += v45;
      }
      while ( v46 );
      v47 = v44;
      goto LABEL_4;
    }
  }
  return 1;
}
