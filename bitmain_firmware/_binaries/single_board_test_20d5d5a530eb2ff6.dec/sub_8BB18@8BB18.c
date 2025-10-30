int __fastcall sub_8BB18(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r6
  int v9; // r0
  int v10; // r6
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r2
  unsigned int v23; // r3
  int v24; // lr
  int v25; // r0
  int v26; // r1
  int v27; // lr
  int v28; // r0
  int v29; // r1
  int v30; // r3
  int v31; // r0
  unsigned int v32; // r3
  int v33; // r2
  int v34; // r1
  int v35; // r2
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r3
  void *v41; // r0
  int v42; // r0
  int v43; // r3
  int v44; // r1
  int v45; // r6
  int (__fastcall *v46)(int); // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v51; // r0

  if ( a1 )
  {
    if ( *(_DWORD *)a1 )
    {
      v2 = sub_E0740(3984, "ssl/ssl_lib.c", 691);
      v3 = v2;
      if ( v2 )
      {
        __dmb(0xBu);
        *(_DWORD *)(v2 + 1256) = 1;
        __dmb(0xBu);
        v4 = sub_10C510();
        *(_DWORD *)(v3 + 3944) = v4;
        if ( !v4 )
        {
          v51 = v3;
          v3 = 0;
          CRYPTO_free(v51, "ssl/ssl_lib.c", 698);
          goto LABEL_28;
        }
        sub_7D388((_DWORD *)(v3 + 1616), v3);
        v5 = *(_DWORD *)(a1 + 524);
        v6 = *(_DWORD *)(a1 + 180);
        v7 = *(_DWORD *)(a1 + 184);
        v8 = *(_DWORD *)(a1 + 176);
        *(_DWORD *)(v3 + 1260) = *(_DWORD *)(a1 + 172);
        v9 = *(_DWORD *)(a1 + 188);
        *(_DWORD *)(v3 + 1264) = v8;
        *(_DWORD *)(v3 + 180) = v5;
        v10 = *(_DWORD *)(a1 + 588);
        v11 = *(_DWORD *)(a1 + 544);
        *(_DWORD *)(v3 + 1268) = v6;
        v12 = *(_DWORD *)(a1 + 548);
        *(_DWORD *)(v3 + 1272) = v7;
        v13 = *(_DWORD *)(a1 + 576);
        *(_DWORD *)(v3 + 1276) = v9;
        *(_DWORD *)(v3 + 1528) = v10;
        *(_DWORD *)(v3 + 3920) = v11;
        *(_DWORD *)(v3 + 3924) = v12;
        *(_DWORD *)(v3 + 3948) = v13;
        v14 = sub_10BDE0(*(_DWORD *)(a1 + 12));
        *(_DWORD *)(v3 + 196) = v14;
        if ( !v14 )
          goto LABEL_28;
        v15 = sub_8440C(*(_DWORD *)(a1 + 192));
        *(_DWORD *)(v3 + 1028) = v15;
        if ( !v15 )
          goto LABEL_28;
        v16 = *(_DWORD *)(a1 + 196);
        v17 = *(_DWORD *)(a1 + 200);
        v18 = *(_DWORD *)(a1 + 204);
        v19 = *(_DWORD *)(a1 + 208);
        *(_DWORD *)(v3 + 1612) = *(_DWORD *)(a1 + 532);
        *(_DWORD *)(v3 + 1620) = v16;
        v20 = *(_DWORD *)(a1 + 552);
        *(_DWORD *)(v3 + 132) = v17;
        v21 = *(_DWORD *)(a1 + 556);
        *(_DWORD *)(v3 + 136) = v18;
        v22 = *(_DWORD *)(a1 + 560);
        *(_DWORD *)(v3 + 1196) = v19;
        v23 = *(_DWORD *)(a1 + 212);
        *(_DWORD *)(v3 + 3932) = v20;
        *(_DWORD *)(v3 + 3936) = v21;
        *(_DWORD *)(v3 + 3940) = v22;
        *(_DWORD *)(v3 + 1104) = v23;
        if ( v23 > 0x20 )
          goto LABEL_28;
        v24 = *(_DWORD *)(a1 + 220);
        v25 = *(_DWORD *)(a1 + 224);
        v26 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(v3 + 1108) = *(_DWORD *)(a1 + 216);
        *(_DWORD *)(v3 + 1112) = v24;
        *(_DWORD *)(v3 + 1116) = v25;
        *(_DWORD *)(v3 + 1120) = v26;
        v27 = *(_DWORD *)(a1 + 236);
        v28 = *(_DWORD *)(a1 + 240);
        v29 = *(_DWORD *)(a1 + 244);
        *(_DWORD *)(v3 + 1124) = *(_DWORD *)(a1 + 232);
        *(_DWORD *)(v3 + 1128) = v27;
        *(_DWORD *)(v3 + 1132) = v28;
        *(_DWORD *)(v3 + 1136) = v29;
        v30 = *(_DWORD *)(a1 + 252);
        *(_DWORD *)(v3 + 1200) = *(_DWORD *)(a1 + 248);
        *(_DWORD *)(v3 + 1156) = v30;
        v31 = sub_113394();
        *(_DWORD *)(v3 + 144) = v31;
        if ( !v31 )
          goto LABEL_28;
        sub_1137F0(v31);
        *(_DWORD *)(v3 + 36) = *(_DWORD *)(a1 + 260);
        *(_BYTE *)(v3 + 1472) = *(_BYTE *)(a1 + 348);
        v32 = *(_DWORD *)(a1 + 284);
        v33 = *(_DWORD *)(a1 + 276);
        *(_DWORD *)(v3 + 1292) = *(_DWORD *)(a1 + 280);
        v34 = *(_DWORD *)(a1 + 288);
        *(_DWORD *)(v3 + 1288) = v33;
        *(_DWORD *)(v3 + 1296) = v32;
        if ( v32 > 1 )
          *(_DWORD *)(v3 + 1620) = 1;
        if ( v34 )
          sub_7D520(v3, v34);
        sub_89EF8(a1);
        v35 = *(_DWORD *)(a1 + 344);
        *(_DWORD *)(v3 + 1232) = a1;
        *(_DWORD *)(v3 + 1328) = 0;
        *(_DWORD *)(v3 + 1340) = v35;
        *(_DWORD *)(v3 + 1332) = 0;
        *(_DWORD *)(v3 + 1372) = 0;
        *(_DWORD *)(v3 + 1352) = 0;
        *(_DWORD *)(v3 + 1356) = 0;
        *(_DWORD *)(v3 + 1360) = 0;
        *(_DWORD *)(v3 + 1364) = 0;
        *(_DWORD *)(v3 + 1368) = 0;
        sub_89EF8(a1);
        v36 = *(_DWORD *)(a1 + 356);
        *(_DWORD *)(v3 + 1504) = a1;
        if ( v36 )
        {
          v37 = sub_E9E68(v36, *(_DWORD *)(a1 + 352), "ssl/ssl_lib.c", 781);
          *(_DWORD *)(v3 + 1380) = v37;
          if ( !v37 )
          {
            *(_DWORD *)(v3 + 1376) = 0;
            goto LABEL_28;
          }
          *(_DWORD *)(v3 + 1376) = *(_DWORD *)(a1 + 352);
        }
        v38 = *(_DWORD *)(a1 + 364);
        if ( v38 )
        {
          v39 = sub_E9E68(v38, 2 * *(_DWORD *)(a1 + 360), "ssl/ssl_lib.c", 793);
          *(_DWORD *)(v3 + 1396) = v39;
          if ( !v39 )
          {
            *(_DWORD *)(v3 + 1392) = 0;
            goto LABEL_28;
          }
          *(_DWORD *)(v3 + 1392) = *(_DWORD *)(a1 + 360);
        }
        v40 = *(_DWORD *)(v3 + 1232);
        *(_DWORD *)(v3 + 1436) = 0;
        if ( !*(_DWORD *)(v40 + 376) )
        {
LABEL_22:
          v42 = *(_DWORD *)(a1 + 116);
          v43 = *(_DWORD *)a1;
          v44 = *(_DWORD *)(a1 + 580);
          *(_DWORD *)(v3 + 3900) = *(_DWORD *)(a1 + 112);
          v45 = *(_DWORD *)(a1 + 584);
          *(_DWORD *)(v3 + 3904) = v42;
          *(_DWORD *)(v3 + 4) = v43;
          *(_DWORD *)(v3 + 3972) = v45;
          v46 = *(int (__fastcall **)(int))(v43 + 12);
          *(_DWORD *)(v3 + 3968) = v44;
          *(_DWORD *)(v3 + 1236) = 0;
          *(_DWORD *)(v3 + 1240) = 0;
          *(_DWORD *)(v3 + 1520) = -1;
          if ( v46(v3) )
          {
            *(_DWORD *)(v3 + 28) = *(_DWORD *)(*(_DWORD *)a1 + 24) != (_DWORD)ssl_undefined_function;
            if ( sub_8B034(v3) )
            {
              if ( sub_DBE44(0, v3, v3 + 1244) )
              {
                v47 = *(_DWORD *)(a1 + 436);
                v48 = *(_DWORD *)(a1 + 440);
                v49 = *(_DWORD *)(a1 + 444);
                *(_DWORD *)(v3 + 1216) = *(_DWORD *)(a1 + 432);
                *(_DWORD *)(v3 + 3908) = 0;
                *(_DWORD *)(v3 + 1220) = v47;
                *(_DWORD *)(v3 + 1224) = v48;
                *(_DWORD *)(v3 + 1228) = v49;
                if ( sub_8BABC((_DWORD *)v3, *(_DWORD *)(a1 + 268), *(_DWORD *)(a1 + 272)) )
                  return v3;
              }
            }
          }
          goto LABEL_28;
        }
        v41 = (void *)CRYPTO_malloc(*(_DWORD *)(v40 + 380), "ssl/ssl_lib.c", 806);
        *(_DWORD *)(v3 + 1428) = v41;
        if ( v41 )
        {
          memcpy(v41, *(const void **)(*(_DWORD *)(v3 + 1232) + 376), *(_DWORD *)(*(_DWORD *)(v3 + 1232) + 380));
          *(_DWORD *)(v3 + 1432) = *(_DWORD *)(*(_DWORD *)(v3 + 1232) + 380);
          goto LABEL_22;
        }
        *(_DWORD *)(v3 + 1432) = 0;
      }
LABEL_28:
      sub_8B45C(v3);
      sub_D0048(20, 186, 65, "ssl/ssl_lib.c", 857);
      return 0;
    }
    sub_D0048(20, 186, 228, "ssl/ssl_lib.c", 687);
    return 0;
  }
  else
  {
    sub_D0048(20, 186, 195, "ssl/ssl_lib.c", 683);
    return 0;
  }
}
