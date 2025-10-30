int __fastcall tls_construct_client_key_exchange(int *a1, int a2)
{
  int v4; // r4
  _DWORD *v6; // r0
  int v7; // r3
  int v8; // r3
  int v9; // r7
  int v10; // r0
  int v11; // r9
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r4
  int v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r4
  int v18; // r8
  int v19; // r9
  int v20; // r0
  int v21; // r0
  int v22; // r1
  int v23; // r3
  int v24; // r7
  int v25; // r0
  int v26; // r4
  int v27; // r6
  int v28; // r0
  int v29; // r3
  int v30; // r0
  int v31; // r1
  int v32; // r3
  int v33; // r0
  int v34; // r3
  int v35; // [sp+8h] [bp-Ch] BYREF
  unsigned int v36[2]; // [sp+Ch] [bp-8h] BYREF

  v4 = *(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 16);
  if ( (v4 & 0x1C8) != 0 && !sub_965C4(a1, a2) )
    goto LABEL_10;
  if ( (v4 & 0x41) != 0 )
  {
    v8 = a1[285];
    v9 = 0;
    v35 = 0;
    v10 = *(_DWORD *)(v8 + 412);
    if ( v10 )
    {
      v11 = sub_10E89C(v10);
      if ( sub_DA044() )
      {
        v12 = (unsigned __int8 *)CRYPTO_malloc(48, "ssl/statem/statem_clnt.c", 2997);
        v13 = v12;
        if ( !v12 )
        {
          sub_95494(a1, 80, 409, 65, (int)"ssl/statem/statem_clnt.c", 3000);
          goto LABEL_10;
        }
        *v12 = BYTE1(a1[321]);
        v12[1] = a1[321];
        if ( sub_F497C(v12 + 2, 46) <= 0 )
        {
          sub_95494(a1, 80, 409, 65, (int)"ssl/statem/statem_clnt.c", 3009);
        }
        else if ( *a1 <= 768 || (v9 = sub_A8398(a2, 2)) != 0 )
        {
          v14 = sub_DB4F8(v11, 0);
          v9 = v14;
          if ( v14 && sub_DAA54(v14) > 0 && sub_DAAA0(v9, 0, v36, v13, 48) > 0 )
          {
            if ( sub_A82B8(a2, v36[0], &v35) && sub_DAAA0(v9, v35, v36, v13, 48) > 0 )
            {
              sub_DB4BC(v9);
              if ( *a1 <= 768 || (v9 = sub_A7EDC(a2)) != 0 )
              {
                v9 = sub_8C670((int)a1, v35, v36[0], v13, 48);
                if ( v9 )
                {
                  v15 = a1[31];
                  *(_DWORD *)(v15 + 592) = v13;
                  *(_DWORD *)(v15 + 596) = 48;
                  return 1;
                }
              }
              else
              {
                sub_95494(a1, 80, 409, 68, (int)"ssl/statem/statem_clnt.c", 3038);
              }
            }
            else
            {
              sub_95494(a1, 80, 409, 119, (int)"ssl/statem/statem_clnt.c", 3029);
            }
          }
          else
          {
            sub_95494(a1, 80, 409, 6, (int)"ssl/statem/statem_clnt.c", 3023);
          }
        }
        else
        {
          sub_95494(a1, 80, 409, 68, (int)"ssl/statem/statem_clnt.c", 3016);
        }
        sub_E0758((int)v13, 48, (size_t)"ssl/statem/statem_clnt.c");
        sub_DB4BC(v9);
        goto LABEL_10;
      }
      v34 = 2992;
    }
    else
    {
      v34 = 2985;
    }
    sub_95494(a1, 80, 409, 68, (int)"ssl/statem/statem_clnt.c", v34);
    goto LABEL_10;
  }
  if ( (v4 & 0x102) == 0 )
  {
    if ( (v4 & 0x84) != 0 )
    {
      v23 = a1[31];
      v36[0] = v4 & 0x102;
      v24 = *(_DWORD *)(v23 + 856);
      if ( v24 )
      {
        v25 = sub_82F68(*(_DWORD *)(v23 + 856));
        v26 = v25;
        if ( v25 )
        {
          if ( sub_83144(a1, v25, v24, 0) )
          {
            v33 = sub_DA760(v26, v36);
            if ( v33 )
            {
              if ( sub_A8544(a2, v36[0], v33, 1) )
              {
                CRYPTO_free(v36[0], "ssl/statem/statem_clnt.c", 3166);
                sub_DA240(v26);
                return 1;
              }
              sub_95494(a1, 80, 405, 68, (int)"ssl/statem/statem_clnt.c", 3160);
            }
            else
            {
              sub_95494(a1, 80, 405, 16, (int)"ssl/statem/statem_clnt.c", 3154);
            }
          }
        }
        else
        {
          sub_95494(a1, 80, 405, 65, (int)"ssl/statem/statem_clnt.c", 3140);
        }
        CRYPTO_free(v36[0], "ssl/statem/statem_clnt.c", 3166);
        sub_DA240(v26);
      }
      else
      {
        sub_95494(a1, 80, 405, 68, (int)"ssl/statem/statem_clnt.c", 3133);
      }
    }
    else if ( (v4 & 0x10) != 0 )
    {
      if ( sub_96830(a1, a2) )
        return 1;
    }
    else if ( (v4 & 0x20) != 0 )
    {
      v20 = a1[396];
      v36[0] = v4 & 0x10;
      if ( !v20 )
        goto LABEL_35;
      v21 = sub_B85BC(v20);
      v22 = v21 + 14;
      if ( v21 + 7 >= 0 )
        v22 = v21 + 7;
      if ( sub_A8420(a2, v22 >> 3, v36, 2) )
      {
        sub_B8648(a1[396], v36[0]);
        CRYPTO_free(*(_DWORD *)(a1[285] + 496), "ssl/statem/statem_clnt.c", 3307);
        v27 = a1[285];
        v28 = sub_E9E3C(a1[391], "ssl/statem/statem_clnt.c", 3308);
        v29 = a1[285];
        *(_DWORD *)(v27 + 496) = v28;
        if ( *(_DWORD *)(v29 + 496) )
          return 1;
        sub_95494(a1, 80, 410, 65, (int)"ssl/statem/statem_clnt.c", 3311);
      }
      else
      {
LABEL_35:
        sub_95494(a1, 80, 410, 68, (int)"ssl/statem/statem_clnt.c", 3302);
      }
    }
    else
    {
      if ( (v4 & 8) != 0 )
        return 1;
      sub_95494(a1, 80, 488, 68, (int)"ssl/statem/statem_clnt.c", 3354);
    }
LABEL_10:
    sub_E0758(*(_DWORD *)(a1[31] + 592), *(_DWORD *)(a1[31] + 596), (size_t)"ssl/statem/statem_clnt.c");
    v6 = (_DWORD *)a1[31];
    v6[148] = 0;
    v6[149] = 0;
    sub_E0758(v6[150], v6[151], (size_t)"ssl/statem/statem_clnt.c");
    v7 = a1[31];
    *(_DWORD *)(v7 + 600) = 0;
    *(_DWORD *)(v7 + 604) = 0;
    return 0;
  }
  v16 = a1[31];
  v36[0] = v4 & 0x41;
  v17 = *(_DWORD *)(v16 + 856);
  if ( !v17 )
  {
    v18 = 0;
    sub_95494(a1, 80, 404, 68, (int)"ssl/statem/statem_clnt.c", 3075);
    goto LABEL_30;
  }
  v18 = sub_82F68(*(_DWORD *)(v16 + 856));
  if ( !v18 )
  {
    v32 = 3082;
    goto LABEL_52;
  }
  v19 = sub_DA134();
  if ( !v19 )
  {
    v32 = 3090;
    goto LABEL_52;
  }
  if ( !sub_83144(a1, v18, v17, 0) )
  {
LABEL_30:
    sub_DA240(v18);
    goto LABEL_10;
  }
  sub_BFE28(v19, &v35, 0);
  v30 = sub_B85BC(v35);
  v31 = v30 + 14;
  if ( v30 + 7 >= 0 )
    v31 = v30 + 7;
  if ( !sub_A8420(a2, v31 >> 3, v36, 2) )
  {
    v32 = 3104;
LABEL_52:
    sub_95494(a1, 80, 404, 68, (int)"ssl/statem/statem_clnt.c", v32);
    goto LABEL_30;
  }
  sub_B8648(v35, v36[0]);
  sub_DA240(v18);
  return 1;
}
