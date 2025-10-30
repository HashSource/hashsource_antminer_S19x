int __fastcall sub_954E0(int a1, int a2)
{
  int *v3; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r2
  bool v7; // zf
  int v8; // r3
  int v9; // r5
  int v10; // r6
  int v12; // r2
  int v13; // r3
  void (__fastcall *v14)(int, int, int); // r6
  int (*v15)(); // r11
  int (*v16)(); // r8
  int (*v17)(); // r10
  int (*v18)(); // r9
  int v19; // r0
  int v20; // r3
  int v21; // r2
  bool v22; // zf
  int v23; // r0
  int v24; // r1
  int v25; // r0
  int v26; // r0
  bool v27; // cf
  int v28; // r3
  void (__fastcall *v29)(int, int, int); // r6
  int (*v30)(); // r11
  int (*v31)(); // r9
  int (*v32)(); // r7
  int (*v33)(); // r10
  int v34; // r3
  bool v35; // cf
  int v36; // r2
  bool v37; // zf
  int v38; // r0
  int v39; // r3
  int v40; // r2
  int v41; // r0
  int v42; // r0
  int v43; // r3
  int v44; // r3
  int *v45; // r3
  int v46; // r2
  int v47; // r3
  int v48; // r0
  int v49; // r3
  int v50; // r3
  bool v51; // zf
  int v52; // r3
  int v53; // r0
  _BOOL4 v54; // r0
  int v55; // r3
  int v56; // r3
  _BOOL4 v57; // r3
  int v58; // r0
  int v59; // r3
  int v60; // [sp+0h] [bp-3Ch]
  void (__fastcall *v61)(int, int, int); // [sp+8h] [bp-34h]
  unsigned int v62; // [sp+Ch] [bp-30h]
  unsigned int v63; // [sp+Ch] [bp-30h]
  unsigned int v65; // [sp+14h] [bp-28h]
  int (__fastcall *v66)(int, _DWORD *); // [sp+18h] [bp-24h] BYREF
  int v67; // [sp+1Ch] [bp-20h] BYREF
  _DWORD v68[7]; // [sp+20h] [bp-1Ch] BYREF

  if ( *(_DWORD *)(a1 + 44) == 1 )
    return -1;
  sub_D00F0(a1);
  v3 = _errno_location();
  v61 = *(void (__fastcall **)(int, int, int))(a1 + 1204);
  *v3 = 0;
  if ( !v61 )
    v61 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)(a1 + 1232) + 160);
  ++*(_DWORD *)(a1 + 80);
  if ( sub_95448(a1) )
  {
    if ( !sub_95464(a1) || (**(_DWORD **)(a1 + 124) & 0x800) != 0 )
      goto LABEL_6;
  }
  else if ( (**(_DWORD **)(a1 + 124) & 0x800) != 0 )
  {
    goto LABEL_6;
  }
  if ( !sub_8B034(a1) )
    return -1;
LABEL_6:
  v4 = *(_DWORD *)(a1 + 44);
  if ( (v4 & 0xFFFFFFFB) == 0 )
  {
    if ( !v4 )
    {
      *(_DWORD *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 68) = 0;
    }
    *(_DWORD *)(a1 + 28) = a2;
    if ( v61 )
    {
      v5 = *(_DWORD *)(a1 + 124);
      if ( *(_DWORD *)(v5 + 384) )
      {
        if ( *(_DWORD *)(v5 + 516) )
        {
          v45 = *(int **)(a1 + 4);
          if ( (*(_DWORD *)(v45[25] + 48) & 8) == 0 )
          {
            v46 = *v45;
            v47 = *v45 == 0x10000;
            if ( v46 < 772 )
              v47 |= 1u;
            if ( !v47 )
              goto LABEL_139;
          }
        }
      }
      v61(a1, 16, 1);
    }
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
    {
      v6 = *(_DWORD *)a1 & 0xFF00;
      if ( v6 == 65024 )
        goto LABEL_140;
      v7 = v6 == 256;
      if ( v6 == 256 )
        v7 = a2 == 0;
      if ( v7 )
      {
LABEL_140:
        v60 = 0;
        v48 = sub_854EC(a1, 9);
        v10 = v48;
        if ( !v48 )
        {
          v49 = 373;
          goto LABEL_144;
        }
        if ( *(_DWORD *)(a1 + 108) )
          goto LABEL_142;
        v58 = sub_BADF8(v48);
        v10 = v58;
        if ( v58 )
        {
          if ( sub_BAE84(v58, 0x4000) )
          {
            *(_DWORD *)(a1 + 108) = v10;
LABEL_142:
            v10 = sub_7F140((_DWORD *)a1);
            if ( !v10 )
            {
              v49 = 394;
LABEL_144:
              v9 = -1;
              sub_95494((_DWORD *)a1, -1, 353, 68, (int)"ssl/statem/statem.c", v49);
              goto LABEL_21;
            }
            v12 = *(_DWORD *)(a1 + 124);
            *(_DWORD *)(a1 + 116) = 0;
            *(_DWORD *)(v12 + 220) = 0;
            v10 = sub_8A850(a1);
            if ( !v10 )
            {
              v49 = 413;
              goto LABEL_144;
            }
            if ( sub_95464(a1) || *(_DWORD *)(a1 + 1516) )
            {
              if ( !sub_9D174(a1) )
                goto LABEL_20;
              v13 = *(_DWORD *)(a1 + 124);
              if ( !*(_DWORD *)(v13 + 384) || !*(_DWORD *)(v13 + 516) )
                *(_DWORD *)(a1 + 76) = 1;
            }
            v4 = 3;
            *(_DWORD *)(a1 + 44) = 3;
            *(_DWORD *)(a1 + 48) = 0;
            goto LABEL_33;
          }
          v59 = 385;
        }
        else
        {
          v59 = 380;
        }
        sub_95494((_DWORD *)a1, -1, 353, 68, (int)"ssl/statem/statem.c", v59);
        v9 = -1;
        goto LABEL_21;
      }
      v8 = 360;
LABEL_19:
      sub_95494((_DWORD *)a1, -1, 353, 68, (int)"ssl/statem/statem.c", v8);
      goto LABEL_20;
    }
LABEL_139:
    if ( *(int *)a1 >> 8 == 3 )
      goto LABEL_140;
    v8 = 366;
    goto LABEL_19;
  }
LABEL_33:
  if ( v4 == 4 )
  {
LABEL_72:
    v9 = 1;
    v10 = 0;
    goto LABEL_21;
  }
LABEL_34:
  if ( v4 == 2 )
    goto LABEL_81;
  if ( v4 != 3 )
  {
    v56 = *(_DWORD *)(a1 + 72);
    v57 = v56 != 0;
    if ( v4 != 1 )
      v57 = 0;
    if ( !v57 )
      sub_95494((_DWORD *)a1, 80, 353, 256, (int)"ssl/statem/statem.c", 455);
    sub_D0048(20, 353, 66, "ssl/statem/statem.c", 456);
    goto LABEL_20;
  }
  v14 = *(void (__fastcall **)(int, int, int))(a1 + 1204);
  if ( !v14 )
    v14 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)(a1 + 1232) + 160);
  if ( *(_DWORD *)(a1 + 28) )
  {
    v15 = ossl_statem_server_construct_message;
    v16 = ossl_statem_server_post_work;
    v17 = ossl_statem_server_pre_work;
    v18 = ossl_statem_server_write_transition;
  }
  else
  {
    v15 = (int (*)())ossl_statem_client_construct_message;
    v16 = (int (*)())ossl_statem_client_post_work;
    v17 = (int (*)())ossl_statem_client_pre_work;
    v18 = (int (*)())ossl_statem_client_write_transition;
  }
  v19 = *(_DWORD *)(a1 + 48);
  while ( 2 )
  {
    switch ( v19 )
    {
      case 0:
        if ( !v14 )
          goto LABEL_65;
        if ( *(_DWORD *)(a1 + 28) )
        {
          v14(a1, 8193, 1);
LABEL_65:
          v19 = ((int (__fastcall *)(int))v18)(a1);
          v27 = v19 != 0;
          if ( v19 == 1 )
          {
LABEL_99:
            *(_DWORD *)(a1 + 48) = v19;
            *(_DWORD *)(a1 + 52) = 3;
            continue;
          }
        }
        else
        {
          v14(a1, 4097, 1);
          v19 = ((int (__fastcall *)(int))v18)(a1);
          v27 = v19 != 0;
          if ( v19 == 1 )
            goto LABEL_99;
        }
        if ( !v27 )
        {
          if ( !*(_DWORD *)(a1 + 72) || *(_DWORD *)(a1 + 44) != 1 )
          {
            v28 = 804;
            goto LABEL_75;
          }
          goto LABEL_20;
        }
        if ( v19 != 2 )
        {
LABEL_69:
          v19 = *(_DWORD *)(a1 + 48);
          continue;
        }
        *(_DWORD *)(a1 + 44) = 2;
        *(_DWORD *)(a1 + 56) = 0;
LABEL_81:
        v29 = *(void (__fastcall **)(int, int, int))(a1 + 1204);
        v67 = 0;
        if ( !v29 )
          v29 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)(a1 + 1232) + 160);
        if ( *(_DWORD *)(a1 + 28) )
        {
          v30 = ossl_statem_server_max_message_size;
          v31 = ossl_statem_server_post_process_message;
          v32 = ossl_statem_server_process_message;
          v33 = ossl_statem_server_read_transition;
        }
        else
        {
          v30 = (int (*)())ossl_statem_client_max_message_size;
          v31 = (int (*)())ossl_statem_client_post_process_message;
          v32 = (int (*)())ossl_statem_client_process_message;
          v33 = (int (*)())ossl_statem_client_read_transition;
        }
        if ( *(_DWORD *)(a1 + 76) )
        {
          *(_DWORD *)(a1 + 76) = 0;
          *(_DWORD *)(a1 + 1280) = 1;
        }
        v34 = *(_DWORD *)(a1 + 56);
LABEL_88:
        v35 = v34 != 0;
        if ( v34 == 1 )
        {
          if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
            goto LABEL_112;
LABEL_128:
          if ( !sub_9C62C(a1, &v67) )
            goto LABEL_20;
          goto LABEL_112;
        }
        while ( 2 )
        {
          if ( v35 )
            goto LABEL_91;
          if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
            v42 = sub_9AC40(a1, &v66, &v67);
          else
            v42 = sub_9C4AC(a1, &v66);
          if ( !v42 )
            goto LABEL_20;
          if ( v29 )
          {
            if ( *(_DWORD *)(a1 + 28) )
              v29(a1, 8193, 1);
            else
              v29(a1, 4097, 1);
          }
          if ( !((int (__fastcall *)(int, _DWORD))v33)(a1, v66) )
            goto LABEL_20;
          v62 = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 520);
          if ( v62 > ((int (__fastcall *)(int))v30)(a1) )
          {
            sub_95494((_DWORD *)a1, 47, 352, 152, (int)"ssl/statem/statem.c", 603);
            goto LABEL_20;
          }
          v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8;
          if ( !v43 )
          {
            v43 = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 520);
            if ( v43 )
            {
              v53 = *(_DWORD *)(a1 + 108);
              v65 = v43 + 4;
              v63 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(v53 + 4);
              if ( sub_BAF60(v53) )
                v54 = v65 < v63;
              else
                v54 = 1;
              if ( v54 )
              {
                sub_95494((_DWORD *)a1, 80, 352, 7, (int)"ssl/statem/statem.c", 613);
                goto LABEL_20;
              }
              v55 = *(_DWORD *)(a1 + 4);
              *(_DWORD *)(a1 + 112) = v63 + *(_DWORD *)(*(_DWORD *)(a1 + 108) + 4);
              v43 = *(_DWORD *)(*(_DWORD *)(v55 + 100) + 48) & 8;
            }
          }
          *(_DWORD *)(a1 + 56) = 1;
          if ( !v43 )
            goto LABEL_128;
LABEL_112:
          v39 = v67;
          *(_DWORD *)(a1 + 1280) = 0;
          v40 = *(_DWORD *)(a1 + 112);
          if ( v39 < 0 )
          {
            sub_95494((_DWORD *)a1, 80, 352, 68, (int)"ssl/statem/statem.c", 633);
            goto LABEL_20;
          }
          v68[1] = v39;
          v68[0] = v40;
          v41 = ((int (__fastcall *)(int, _DWORD *))v32)(a1, v68);
          *(_DWORD *)(a1 + 116) = 0;
          if ( v41 != 1 )
          {
            if ( v41 )
            {
              if ( v41 != 2 )
              {
LABEL_131:
                v34 = 0;
                *(_DWORD *)(a1 + 56) = 0;
                v35 = 0;
                continue;
              }
              v34 = 2;
              *(_DWORD *)(a1 + 56) = 2;
              *(_DWORD *)(a1 + 60) = 3;
LABEL_91:
              if ( v34 != 2 )
              {
                sub_95494((_DWORD *)a1, 80, 352, 68, (int)"ssl/statem/statem.c", 689);
                goto LABEL_20;
              }
              v38 = ((int (__fastcall *)(int, _DWORD))v31)(a1, *(_DWORD *)(a1 + 60));
              *(_DWORD *)(a1 + 60) = v38;
              switch ( v38 )
              {
                case 0:
                  if ( *(_DWORD *)(a1 + 72) && *(_DWORD *)(a1 + 44) == 1 )
                    goto LABEL_20;
                  v52 = 667;
                  break;
                case 1:
                  goto LABEL_132;
                case 2:
                  goto LABEL_131;
                case 3:
                case 4:
                case 5:
                  goto LABEL_20;
                default:
                  v34 = *(_DWORD *)(a1 + 56);
                  goto LABEL_88;
              }
            }
            else
            {
              if ( *(_DWORD *)(a1 + 72) && *(_DWORD *)(a1 + 44) == 1 )
                goto LABEL_20;
              v52 = 643;
            }
            sub_95494((_DWORD *)a1, 80, 352, 256, (int)"ssl/statem/statem.c", v52);
            goto LABEL_20;
          }
          break;
        }
LABEL_132:
        v44 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48);
        if ( (v44 & 8) != 0 )
          sub_A71B4(a1, v44 << 28);
        v4 = 3;
        *(_DWORD *)(a1 + 48) = 0;
        *(_DWORD *)(a1 + 44) = 3;
        goto LABEL_34;
      case 1:
        v26 = ((int (__fastcall *)(int, _DWORD))v17)(a1, *(_DWORD *)(a1 + 52));
        *(_DWORD *)(a1 + 52) = v26;
        switch ( v26 )
        {
          case 0:
            if ( *(_DWORD *)(a1 + 72) && *(_DWORD *)(a1 + 44) == 1 )
              goto LABEL_20;
            v28 = 812;
            goto LABEL_75;
          case 1:
LABEL_71:
            *(_DWORD *)(a1 + 44) = 4;
            goto LABEL_72;
          case 2:
            *(_DWORD *)(a1 + 48) = 2;
            goto LABEL_43;
          case 3:
          case 4:
          case 5:
            goto LABEL_20;
          default:
LABEL_43:
            if ( !((int (__fastcall *)(int, _DWORD *, int (__fastcall **)(int, _DWORD *), int *, int))v15)(
                    a1,
                    v68,
                    &v66,
                    &v67,
                    v60) )
              goto LABEL_20;
            if ( v67 == -1 )
            {
              *(_DWORD *)(a1 + 48) = 3;
              v19 = 3;
              *(_DWORD *)(a1 + 52) = 3;
              continue;
            }
            if ( !sub_A8620(v68, *(_DWORD *)(a1 + 108))
              || !(*(int (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 52))(
                    a1,
                    v68,
                    v67) )
            {
              sub_A8640(v68);
              sub_95494((_DWORD *)a1, 80, 586, 68, (int)"ssl/statem/statem.c", 840);
              goto LABEL_20;
            }
            if ( !v66 || v66(a1, v68) )
            {
              if ( !(*(int (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 56))(
                      a1,
                      v68,
                      v67)
                || !sub_A8054(v68) )
              {
                sub_A8640(v68);
                sub_95494((_DWORD *)a1, 80, 586, 68, (int)"ssl/statem/statem.c", 852);
                goto LABEL_20;
              }
LABEL_51:
              v20 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 100);
              if ( (*(_DWORD *)(v20 + 48) & 8) != 0 )
              {
                if ( !*(_DWORD *)(a1 + 92) )
                {
                  v21 = *(_DWORD *)(a1 + 64);
                  v22 = v21 == 35;
                  if ( v21 != 35 )
                    v22 = v21 == 16;
                  if ( !v22 )
                    goto LABEL_100;
LABEL_57:
                  v23 = sub_9A4FC(a1, 20);
LABEL_58:
                  if ( v23 > 0 )
                  {
                    v24 = 3;
                    *(_DWORD *)(a1 + 48) = 3;
                    *(_DWORD *)(a1 + 52) = 3;
LABEL_60:
                    v25 = ((int (__fastcall *)(int, int))v16)(a1, v24);
                    *(_DWORD *)(a1 + 52) = v25;
                    switch ( v25 )
                    {
                      case 0:
                        if ( *(_DWORD *)(a1 + 72) && *(_DWORD *)(a1 + 44) == 1 )
                          goto LABEL_20;
                        v28 = 873;
                        break;
                      case 1:
                        goto LABEL_71;
                      case 2:
                        *(_DWORD *)(a1 + 48) = 0;
                        v19 = 0;
                        continue;
                      case 3:
                      case 4:
                      case 5:
                        goto LABEL_20;
                      default:
                        goto LABEL_69;
                    }
LABEL_75:
                    sub_95494((_DWORD *)a1, 80, 586, 256, (int)"ssl/statem/statem.c", v28);
                  }
                  goto LABEL_20;
                }
                sub_A7050(a1);
                v50 = *(_DWORD *)(a1 + 64);
                v51 = v50 == 35;
                if ( v50 != 35 )
                  v51 = v50 == 16;
                v20 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 100);
                if ( !v51 )
                {
LABEL_100:
                  v23 = (*(int (__fastcall **)(int))(v20 + 60))(a1);
                  goto LABEL_58;
                }
                if ( (*(_DWORD *)(v20 + 48) & 8) != 0 )
                  goto LABEL_57;
              }
              else
              {
                v36 = *(_DWORD *)(a1 + 64);
                v37 = v36 == 35;
                if ( v36 != 35 )
                  v37 = v36 == 16;
                if ( !v37 )
                  goto LABEL_100;
              }
              v23 = sub_9B420(a1, 20);
              goto LABEL_58;
            }
            sub_A8640(v68);
            if ( !*(_DWORD *)(a1 + 72) || *(_DWORD *)(a1 + 44) != 1 )
            {
              v28 = 845;
              goto LABEL_75;
            }
LABEL_20:
            v9 = -1;
            v10 = 0;
LABEL_21:
            --*(_DWORD *)(a1 + 80);
            sub_BAE3C(v10);
            if ( !v61 )
              return v9;
            if ( a2 )
              v61(a1, 8194, v9);
            else
              v61(a1, 4098, v9);
            return v9;
        }
      case 2:
        goto LABEL_51;
      case 3:
        v24 = *(_DWORD *)(a1 + 52);
        goto LABEL_60;
      default:
        sub_95494((_DWORD *)a1, 80, 586, 68, (int)"ssl/statem/statem.c", 891);
        goto LABEL_20;
    }
  }
}
