int __fastcall sub_31B1EC(_DWORD *a1, int a2)
{
  unsigned __int8 *v2; // r12
  int v4; // r3
  int *v6; // r7
  int v7; // r6
  int v8; // r3
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  int v11; // r3
  _BYTE *v12; // r3
  __int64 v13; // r2
  int v14; // r0
  int v15; // r5
  int v16; // r3
  int v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r5
  int v20; // r0
  int v21; // r3
  unsigned __int8 **v22; // r0
  unsigned __int8 *v23; // r3
  int v24; // r0
  _DWORD *v25; // r5
  int v26; // r0
  int v27; // r11
  __int64 v28; // r2
  int v29; // r0
  int v30; // r2
  bool v31; // zf
  int v32; // r11
  int v33; // r0
  unsigned __int8 *v34; // r2
  _DWORD *v35; // r0
  unsigned __int8 *v36; // r3
  _DWORD *v37; // r11
  int v38; // r2
  int v39; // r0
  int v40; // r2
  int v41; // r0
  int v42; // r2
  int v43; // r3
  bool v44; // zf
  _BOOL4 v45; // r3
  int v46; // r11
  _DWORD *v47; // r0
  __int64 v48; // r2
  int v49; // r1
  _DWORD *v51; // r0
  int v52; // r0
  int v53; // r0
  _BYTE *v54; // r1
  unsigned int v55; // r2
  unsigned int v56; // r1
  bool v57; // cc
  _DWORD *v58; // r0
  int v59; // r1
  int v60; // r0
  bool v61; // zf
  int v62; // r0
  unsigned __int8 *v63; // [sp+4h] [bp-8h]
  _BOOL4 v64; // [sp+4h] [bp-8h]
  int v65; // [sp+4h] [bp-8h]
  unsigned __int8 *v66; // [sp+4h] [bp-8h]
  int v67; // [sp+4h] [bp-8h]
  int v68; // [sp+Ch] [bp+0h] BYREF

  v2 = (unsigned __int8 *)a1[3];
  v4 = *v2;
  v68 = 0;
  if ( v4 == a2 )
  {
    a1[3] = v2 + 1;
    return sub_313728(a1, 46, 0);
  }
  v6 = &v68;
  while ( 1 )
  {
    v7 = a1[12];
    a1[12] = 1;
    v8 = *v2;
    if ( v8 == 76 )
    {
      v10 = (_DWORD *)sub_31D114(a1);
      goto LABEL_27;
    }
    if ( v8 == 84 )
    {
      v10 = sub_313D78(a1);
      goto LABEL_27;
    }
    if ( v8 == 115 )
      break;
    if ( v8 == 102 )
    {
      if ( v2[1] == 112 )
      {
        a1[3] = v2 + 2;
        if ( v2[2] == 84 )
        {
          v20 = 0;
          a1[3] = v2 + 3;
        }
        else
        {
          v29 = sub_313D1C((int)a1);
          if ( (v29 & 0x7FFFFFFF) == 0x7FFFFFFF )
            goto LABEL_32;
          v20 = v29 + 1;
        }
        v21 = a1[5];
        if ( v21 >= a1[6] )
          goto LABEL_32;
        v10 = (_DWORD *)(a1[4] + 16 * v21);
        v10[1] = 0;
        a1[5] = v21 + 1;
        *v10 = 6;
        v10[2] = v20;
LABEL_18:
        a1[12] = v7;
        goto LABEL_19;
      }
      goto LABEL_9;
    }
    if ( (unsigned int)(v8 - 48) <= 9 )
      goto LABEL_16;
    if ( v8 == 111 )
    {
      if ( v2[1] != 110 )
        goto LABEL_9;
      a1[3] = v2 + 2;
LABEL_16:
      v10 = (_DWORD *)sub_31ABF0(a1);
      if ( !v10 )
      {
LABEL_93:
        a1[12] = v7;
        return (int)v10;
      }
      if ( *(_BYTE *)a1[3] != 73 )
        goto LABEL_18;
      v24 = sub_31D3A4(a1);
      v10 = (_DWORD *)sub_313728(a1, 4, __SPAIR64__(v24, (unsigned int)v10));
      goto LABEL_27;
    }
    v61 = v8 == 116;
    if ( v8 != 116 )
      v61 = v8 == 105;
    if ( !v61 || v2[1] != 108 )
      goto LABEL_9;
    if ( v8 == 116 )
    {
      v18 = sub_319DD0((int)a1);
      v2 = (unsigned __int8 *)a1[3];
      v19 = v18;
      if ( !v2[1] )
        goto LABEL_32;
    }
    else
    {
      v19 = 0;
    }
    a1[3] = v2 + 2;
    v62 = sub_31B1EC(a1, 69);
    v10 = (_DWORD *)sub_313728(a1, 48, __SPAIR64__(v62, (unsigned int)v19));
LABEL_27:
    a1[12] = v7;
    if ( !v10 )
      return 0;
LABEL_19:
    v14 = sub_313728(a1, 46, (unsigned int)v10);
    *v6 = v14;
    if ( !v14 )
      return 0;
    v2 = (unsigned __int8 *)a1[3];
    v6 = (int *)(v14 + 12);
    if ( *v2 == a2 )
    {
      v15 = v68;
      a1[3] = v2 + 1;
      return v15;
    }
  }
  v16 = v2[1];
  if ( v16 == 114 )
  {
    a1[3] = v2 + 2;
    v25 = sub_319DD0((int)a1);
    v26 = sub_31ABF0(a1);
    v27 = v26;
    if ( *(_BYTE *)a1[3] == 73 )
    {
      v33 = sub_31D3A4(a1);
      HIDWORD(v28) = sub_313728(a1, 4, __SPAIR64__(v33, v27));
    }
    else
    {
      HIDWORD(v28) = v26;
    }
    LODWORD(v28) = v25;
    v10 = (_DWORD *)sub_313728(a1, 1, v28);
    goto LABEL_27;
  }
  if ( v16 == 112 )
  {
    a1[3] = v2 + 2;
    v17 = sub_31BA00(a1);
    v10 = (_DWORD *)sub_313728(a1, 74, (unsigned int)v17);
    goto LABEL_27;
  }
LABEL_9:
  v9 = sub_31A958(a1);
  v10 = v9;
  if ( !v9 )
    goto LABEL_93;
  v11 = *v9;
  if ( *v9 != 49 )
  {
    if ( v11 == 50 )
    {
      switch ( v9[2] )
      {
        case 0:
          goto LABEL_61;
        case 1:
          goto LABEL_100;
        default:
          goto LABEL_32;
      }
    }
    if ( v11 != 51 )
      goto LABEL_32;
    v12 = (_BYTE *)a1[3];
    if ( *v12 == 95 )
    {
      a1[3] = v12 + 1;
      HIDWORD(v13) = sub_31B1EC(a1, 69);
    }
    else
    {
LABEL_100:
      HIDWORD(v13) = sub_31BA00(a1);
    }
    goto LABEL_41;
  }
  v22 = (unsigned __int8 **)v9[2];
  v23 = *v22;
  a1[11] += v22[2] - 2;
  if ( *v23 == 115 && v23[1] == 116 )
  {
    if ( v23[2] )
    {
      switch ( (unsigned int)v22[3] )
      {
        case 0u:
          goto LABEL_61;
        case 1u:
          goto LABEL_51;
        case 2u:
          goto LABEL_62;
        case 3u:
          if ( v23 )
            goto LABEL_75;
          goto LABEL_32;
        default:
          goto LABEL_32;
      }
    }
    HIDWORD(v13) = sub_319DD0((int)a1);
LABEL_41:
    LODWORD(v13) = v10;
    v10 = (_DWORD *)sub_313728(a1, 54, v13);
    goto LABEL_27;
  }
  switch ( (unsigned int)v22[3] )
  {
    case 0u:
LABEL_61:
      v10 = (_DWORD *)sub_313728(a1, 53, (unsigned int)v10);
      goto LABEL_27;
    case 1u:
      if ( !v23 )
        goto LABEL_100;
LABEL_51:
      v30 = *v23;
      v31 = v30 == 109;
      if ( v30 != 109 )
        v31 = v30 == 112;
      if ( v31 && v23[1] == v30 )
      {
        v54 = (_BYTE *)a1[3];
        if ( *v54 == 95 )
        {
          v32 = 0;
          a1[3] = v54 + 1;
          v30 = *v23;
        }
        else
        {
          v32 = 1;
        }
      }
      else
      {
        v32 = 0;
      }
      if ( v30 == 115 && v23[1] == 80 && !v23[2] )
        HIDWORD(v13) = sub_31D23C(a1);
      else
        HIDWORD(v13) = sub_31BA00(a1);
      if ( v32 )
      {
        LODWORD(v13) = HIDWORD(v13);
        HIDWORD(v13) = sub_313728(a1, 56, v13);
      }
      goto LABEL_41;
    case 2u:
LABEL_62:
      if ( !v23 )
        goto LABEL_32;
      v34 = *(unsigned __int8 **)v10[2];
      if ( v34[1] != 99 )
        goto LABEL_64;
      v55 = *v34;
      v56 = v55 - 99;
      v55 -= 114;
      v57 = v55 > 1;
      if ( v55 > 1 )
        v57 = v56 > 1;
      if ( v57 )
      {
LABEL_64:
        v63 = v23;
        if ( *v23 == 102 )
          v35 = sub_31A958(a1);
        else
          v35 = (_DWORD *)sub_31BA00(a1);
        v36 = v63;
        v37 = v35;
      }
      else
      {
        v66 = v23;
        v58 = sub_319DD0((int)a1);
        v36 = v66;
        v37 = v58;
      }
      v38 = *v36;
      if ( v38 == 99 )
      {
        if ( v36[1] != 108 || v36[2] )
          goto LABEL_102;
        v40 = sub_31B1EC(a1, 69);
      }
      else
      {
        if ( v38 != 100 && v38 != 112 || v36[1] != 116 || v36[2] )
        {
LABEL_102:
          v40 = sub_31BA00(a1);
          goto LABEL_73;
        }
        v39 = sub_31ABF0(a1);
        v40 = v39;
        if ( *(_BYTE *)a1[3] == 73 )
        {
          v67 = v39;
          v60 = sub_31D3A4(a1);
          v40 = sub_313728(a1, 4, __SPAIR64__(v60, v67));
        }
      }
LABEL_73:
      v41 = sub_313728(a1, 56, __SPAIR64__(v40, (unsigned int)v37));
      v10 = (_DWORD *)sub_313728(a1, 55, __SPAIR64__(v41, (unsigned int)v10));
      goto LABEL_27;
    case 3u:
LABEL_75:
      v42 = *v23;
      switch ( v42 )
      {
        case 'q':
          if ( v23[1] != 117 || v23[2] )
            goto LABEL_32;
          v51 = (_DWORD *)sub_31BA00(a1);
          break;
        case 'f':
          v51 = sub_31A958(a1);
          break;
        case 'n':
          v43 = v23[1];
          v44 = v43 == 119;
          if ( v43 != 119 )
            v44 = v43 == 97;
          v45 = !v44;
          v64 = v45;
          if ( !v44 )
          {
LABEL_32:
            a1[12] = v7;
            return 0;
          }
          v46 = sub_31B1EC(a1, 95);
          v47 = sub_319DD0((int)a1);
          HIDWORD(v48) = a1[3];
          LODWORD(v48) = v47;
          v49 = (unsigned __int8)*(_BYTE *)HIDWORD(v48);
          switch ( v49 )
          {
            case 'E':
              v59 = HIDWORD(v48) + 1;
              HIDWORD(v48) = v64;
              a1[3] = v59;
              break;
            case 'p':
              if ( *(_BYTE *)(HIDWORD(v48) + 1) != 105 )
                goto LABEL_32;
              a1[3] = HIDWORD(v48) + 2;
              v48 = __PAIR64__(sub_31B1EC(a1, 69), (unsigned int)v47);
              break;
            case 'i':
              if ( *(_BYTE *)(HIDWORD(v48) + 1) != 108 )
              {
                a1[12] = v7;
                return v64;
              }
              v48 = __PAIR64__(sub_31BA00(a1), (unsigned int)v47);
              break;
            default:
              goto LABEL_32;
          }
          goto LABEL_98;
        default:
          goto LABEL_32;
      }
      v46 = (int)v51;
      v65 = sub_31BA00(a1);
      v48 = __PAIR64__(sub_31BA00(a1), v65);
      if ( HIDWORD(v48) )
      {
LABEL_98:
        v52 = sub_313728(a1, 59, v48);
        v53 = sub_313728(a1, 58, __SPAIR64__(v52, v46));
        v10 = (_DWORD *)sub_313728(a1, 57, __SPAIR64__(v53, (unsigned int)v10));
        goto LABEL_27;
      }
      a1[12] = v7;
      return 0;
    default:
      goto LABEL_32;
  }
}
