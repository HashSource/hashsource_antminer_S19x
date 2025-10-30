_DWORD *__fastcall sub_31BA00(_DWORD *a1)
{
  unsigned __int8 *v1; // r1
  int v2; // r3
  int v4; // r0
  int v5; // r3
  _DWORD *v6; // r5
  int v7; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r3
  _BYTE *v11; // r3
  __int64 v12; // r2
  _DWORD *v13; // r0
  int v14; // r1
  _DWORD *v15; // r0
  _DWORD *v16; // r5
  unsigned __int8 **v17; // r1
  unsigned __int8 *v18; // r6
  _DWORD *v19; // r0
  int v20; // r0
  _DWORD *v22; // r5
  int v23; // r0
  int v24; // r6
  int v25; // r0
  int v26; // r0
  int v27; // r3
  bool v28; // zf
  int v29; // r7
  unsigned __int8 *v30; // r3
  _DWORD *v31; // r7
  int v32; // r3
  int v33; // r6
  int v34; // r0
  int v35; // r3
  _DWORD *v36; // r0
  int v37; // r7
  int v38; // r8
  __int64 v39; // r2
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r3
  bool v44; // zf
  _BOOL4 v45; // r6
  _DWORD *v46; // r0
  int v47; // r1
  _BYTE *v48; // r2
  unsigned int v49; // r3
  unsigned int v50; // r2
  bool v51; // cc
  int v52; // r0
  bool v53; // zf
  int v54; // r0

  v1 = (unsigned __int8 *)a1[3];
  v2 = *v1;
  if ( v2 == 76 )
    return (_DWORD *)sub_31D114(a1);
  if ( v2 == 84 )
    return sub_313D78(a1);
  if ( v2 != 115 )
  {
    if ( v2 == 102 )
    {
      if ( v1[1] == 112 )
      {
        a1[3] = v1 + 2;
        if ( v1[2] == 84 )
        {
          v4 = 0;
          a1[3] = v1 + 3;
          goto LABEL_8;
        }
        v26 = sub_313D1C((int)a1);
        if ( (v26 & 0x7FFFFFFF) != 0x7FFFFFFF )
        {
          v4 = v26 + 1;
LABEL_8:
          v5 = a1[5];
          if ( v5 < a1[6] )
          {
            v6 = (_DWORD *)(a1[4] + 16 * v5);
            v6[1] = 0;
            a1[5] = v5 + 1;
            *v6 = 6;
            v6[2] = v4;
            return v6;
          }
        }
        return 0;
      }
      goto LABEL_12;
    }
    if ( (unsigned int)(v2 - 48) <= 9 )
      goto LABEL_21;
    if ( v2 == 111 )
    {
      if ( v1[1] == 110 )
      {
        a1[3] = v1 + 2;
LABEL_21:
        v6 = (_DWORD *)sub_31ABF0(a1);
        if ( !v6 )
          return 0;
        if ( *(_BYTE *)a1[3] != 73 )
          return v6;
        v20 = sub_31D3A4(a1);
        return (_DWORD *)sub_313728(a1, 4, __SPAIR64__(v20, (unsigned int)v6));
      }
    }
    else
    {
      v53 = v2 == 116;
      if ( v2 != 116 )
        v53 = v2 == 105;
      if ( v53 && v1[1] == 108 )
      {
        if ( v2 == 116 )
        {
          v15 = sub_319DD0((int)a1);
          v1 = (unsigned __int8 *)a1[3];
          v16 = v15;
          if ( !v1[1] )
            return 0;
        }
        else
        {
          v16 = 0;
        }
        a1[3] = v1 + 2;
        v54 = sub_31B1EC(a1, 69);
        return (_DWORD *)sub_313728(a1, 48, __SPAIR64__(v54, (unsigned int)v16));
      }
    }
LABEL_12:
    v8 = sub_31A958(a1);
    v9 = v8;
    if ( !v8 )
      return 0;
    v10 = *v8;
    if ( *v8 != 49 )
    {
      if ( v10 == 50 )
      {
        switch ( v8[2] )
        {
          case 0:
            return (_DWORD *)sub_313728(a1, 53, (unsigned int)v8);
          case 1:
            goto LABEL_76;
          default:
            return 0;
        }
      }
      if ( v10 != 51 )
        return 0;
      v11 = (_BYTE *)a1[3];
      if ( *v11 == 95 )
      {
        a1[3] = v11 + 1;
        HIDWORD(v12) = sub_31B1EC(a1, 69);
      }
      else
      {
LABEL_76:
        HIDWORD(v12) = sub_31BA00(a1);
      }
      goto LABEL_18;
    }
    v17 = (unsigned __int8 **)v8[2];
    v18 = *v17;
    a1[11] += v17[2] - 2;
    if ( *v18 == 115 && v18[1] == 116 )
    {
      if ( v18[2] )
      {
        switch ( (unsigned int)v17[3] )
        {
          case 0u:
            return (_DWORD *)sub_313728(a1, 53, (unsigned int)v8);
          case 1u:
            goto LABEL_46;
          case 2u:
            goto LABEL_56;
          case 3u:
            if ( v18 )
              goto LABEL_69;
            return 0;
          default:
            return 0;
        }
      }
      v19 = sub_319DD0((int)a1);
LABEL_32:
      HIDWORD(v12) = v19;
LABEL_18:
      LODWORD(v12) = v9;
      v13 = a1;
      v14 = 54;
      return (_DWORD *)sub_313728(v13, v14, v12);
    }
    switch ( (unsigned int)v17[3] )
    {
      case 0u:
        return (_DWORD *)sub_313728(a1, 53, (unsigned int)v8);
      case 1u:
        if ( !v18 )
          goto LABEL_76;
LABEL_46:
        v27 = *v18;
        v28 = v27 == 109;
        if ( v27 != 109 )
          v28 = v27 == 112;
        if ( v28 && v18[1] == v27 )
        {
          v48 = (_BYTE *)a1[3];
          if ( *v48 == 95 )
          {
            v29 = 0;
            a1[3] = v48 + 1;
            v27 = *v18;
          }
          else
          {
            v29 = 1;
          }
        }
        else
        {
          v29 = 0;
        }
        if ( v27 == 115 && v18[1] == 80 && !v18[2] )
          HIDWORD(v12) = sub_31D23C(a1);
        else
          HIDWORD(v12) = sub_31BA00(a1);
        if ( !v29 )
          goto LABEL_18;
        LODWORD(v12) = HIDWORD(v12);
        v19 = (_DWORD *)sub_313728(a1, 56, v12);
        goto LABEL_32;
      case 2u:
LABEL_56:
        if ( !v18 )
          return 0;
        v30 = *(unsigned __int8 **)v8[2];
        if ( v30[1] != 99 )
          goto LABEL_58;
        v49 = *v30;
        v50 = v49 - 99;
        v49 -= 114;
        v51 = v49 > 1;
        if ( v49 > 1 )
          v51 = v50 > 1;
        if ( v51 )
        {
LABEL_58:
          if ( *v18 == 102 )
            v31 = sub_31A958(a1);
          else
            v31 = (_DWORD *)sub_31BA00(a1);
        }
        else
        {
          v31 = sub_319DD0((int)a1);
        }
        v32 = *v18;
        if ( v32 == 99 )
        {
          if ( v18[1] == 108 && !v18[2] )
          {
            v33 = sub_31B1EC(a1, 69);
LABEL_66:
            v34 = sub_313728(a1, 56, __SPAIR64__(v33, (unsigned int)v31));
            return (_DWORD *)sub_313728(a1, 55, __SPAIR64__(v34, (unsigned int)v9));
          }
        }
        else if ( (v32 == 100 || v32 == 112) && v18[1] == 116 && !v18[2] )
        {
          v33 = sub_31ABF0(a1);
          if ( *(_BYTE *)a1[3] == 73 )
          {
            v52 = sub_31D3A4(a1);
            v33 = sub_313728(a1, 4, __SPAIR64__(v52, v33));
          }
          goto LABEL_66;
        }
        v33 = sub_31BA00(a1);
        goto LABEL_66;
      case 3u:
LABEL_69:
        v35 = *v18;
        switch ( v35 )
        {
          case 'q':
            if ( v18[1] != 117 || v18[2] )
              return 0;
            v36 = (_DWORD *)sub_31BA00(a1);
            break;
          case 'f':
            v36 = sub_31A958(a1);
            break;
          case 'n':
            v43 = v18[1];
            v44 = v43 == 119;
            if ( v43 != 119 )
              v44 = v43 == 97;
            v45 = !v44;
            if ( !v44 )
              return 0;
            v37 = sub_31B1EC(a1, 95);
            v46 = sub_319DD0((int)a1);
            HIDWORD(v39) = a1[3];
            v38 = (int)v46;
            LODWORD(v39) = (unsigned __int8)*(_BYTE *)HIDWORD(v39);
            if ( (_DWORD)v39 == 69 )
            {
              v47 = HIDWORD(v39) + 1;
              HIDWORD(v39) = v45;
              a1[3] = v47;
            }
            else if ( (_DWORD)v39 == 112 )
            {
              if ( *(_BYTE *)(HIDWORD(v39) + 1) != 105 )
                return 0;
              a1[3] = HIDWORD(v39) + 2;
              HIDWORD(v39) = sub_31B1EC(a1, 69);
            }
            else
            {
              if ( (_DWORD)v39 != 105 || *(_BYTE *)(HIDWORD(v39) + 1) != 108 )
                return 0;
              HIDWORD(v39) = sub_31BA00(a1);
            }
LABEL_74:
            LODWORD(v39) = v38;
            v40 = sub_313728(a1, 59, v39);
            v41 = sub_313728(a1, 58, __SPAIR64__(v40, v37));
            return (_DWORD *)sub_313728(a1, 57, __SPAIR64__(v41, (unsigned int)v9));
          default:
            return 0;
        }
        v37 = (int)v36;
        v38 = sub_31BA00(a1);
        HIDWORD(v39) = sub_31BA00(a1);
        if ( !HIDWORD(v39) )
          return 0;
        goto LABEL_74;
      default:
        return 0;
    }
  }
  v7 = v1[1];
  if ( v7 == 114 )
  {
    a1[3] = v1 + 2;
    v22 = sub_319DD0((int)a1);
    v23 = sub_31ABF0(a1);
    v24 = v23;
    if ( *(_BYTE *)a1[3] == 73 )
    {
      v25 = sub_31D3A4(a1);
      HIDWORD(v12) = sub_313728(a1, 4, __SPAIR64__(v25, v24));
    }
    else
    {
      HIDWORD(v12) = v23;
    }
    LODWORD(v12) = v22;
    v13 = a1;
    v14 = 1;
    return (_DWORD *)sub_313728(v13, v14, v12);
  }
  if ( v7 != 112 )
    goto LABEL_12;
  a1[3] = v1 + 2;
  v42 = sub_31BA00(a1);
  return (_DWORD *)sub_313728(a1, 74, (unsigned int)v42);
}
