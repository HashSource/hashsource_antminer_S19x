int __fastcall sub_3486B0(int a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r1
  int v8; // r11
  __int64 v9; // r2
  int v10; // r5
  int v11; // r7
  int *v12; // r8
  unsigned int v13; // r9
  unsigned int v14; // r0
  int v15; // r7
  int v16; // r3
  int v17; // r5
  int v18; // r7
  int *v19; // r9
  int v20; // r0
  int v21; // r8
  int *v22; // r5
  int v23; // r0
  int v24; // r2
  int v25; // r3
  int v27; // r5
  char *v28; // r0
  int v29; // r7
  __int64 v30; // r2
  int v31; // r0
  int v32; // r2
  int v33; // r0
  int v34; // r7
  int *v35; // r5
  char *v36; // r0
  int v37; // r7
  int v38; // r0
  char *v39; // r0
  int v40; // [sp+4h] [bp-28h]
  int v41; // [sp+8h] [bp-24h]
  int *v42; // [sp+Ch] [bp-20h]
  int v43; // [sp+18h] [bp-14h] BYREF
  _DWORD v44[2]; // [sp+1Ch] [bp-10h] BYREF
  __int16 v45; // [sp+24h] [bp-8h]

  v6 = *(_DWORD **)(a2 + 76);
  v8 = a1 & 3;
  HIDWORD(v9) = v6 + 1;
  LODWORD(v9) = *v6;
  v44[1] = v6 + 1;
  if ( a4 )
  {
    v44[0] = (_DWORD)v9 << 16;
    HIBYTE(v45) = BYTE2(v9);
    HIDWORD(v9) += 4 * BYTE2(v9);
    LOBYTE(v45) = 2;
  }
  else
  {
    v45 = 3;
    v44[0] = (_DWORD)v9 << 8;
  }
  if ( v8 == 2 )
    HIDWORD(v9) = *(_DWORD *)(a2 + 56);
  LODWORD(v9) = *(_DWORD *)(a2 + 80) & 1;
  if ( !(_DWORD)v9 )
  {
    v41 = 0;
    LODWORD(v9) = ((a1 ^ 8u) >> 3) & 1;
    v40 = v9;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)HIDWORD(v9);
        if ( !*(_DWORD *)HIDWORD(v9) )
        {
          if ( sub_348E74(a3, v44, v9, HIDWORD(v9)) )
            return 9;
          if ( v41 )
          {
            v38 = sub_3485C4(a3, 0xFu);
            sub_348618(a3, 0xEu, v38);
            sub_348618(a3, 0xFu, (int)_cxa_call_unexpected);
            return 7;
          }
          return 8;
        }
        if ( a4 == 2 )
        {
          v11 = *(_DWORD *)(HIDWORD(v9) + 4);
          v12 = (int *)(HIDWORD(v9) + 8);
        }
        else
        {
          v11 = *(unsigned __int16 *)(HIDWORD(v9) + 2);
          v12 = (int *)(HIDWORD(v9) + 4);
          v10 = (unsigned __int16)*(_WORD *)HIDWORD(v9);
        }
        v13 = (v11 & 0xFFFFFFFE) + *(_DWORD *)(a2 + 72);
        v14 = sub_3485C4(a3, 0xFu);
        v15 = v10 & 1 | (2 * (_BYTE)v11) & 2;
        if ( v13 > v14 || v13 + (v10 & 0xFFFFFFFE) <= v14 )
          break;
        switch ( v15 )
        {
          case 1:
            if ( v8 )
              goto LABEL_43;
            v30 = *(_QWORD *)v12;
            if ( v12[1] == -2 )
              return 9;
            v43 = a2 + 88;
            if ( HIDWORD(v30) == -1 )
            {
              v35 = v12;
              *(_DWORD *)(a2 + 32) = sub_3485C4(a3, 0xDu);
LABEL_65:
              *(_DWORD *)(a2 + 36) = v43;
LABEL_54:
              *(_DWORD *)(a2 + 40) = v35;
              return 6;
            }
            v31 = sub_34836C(v12 + 1);
            v33 = _cxa_type_match((_BYTE *)a2, v31, v32, &v43);
            if ( v33 )
            {
              v34 = v33;
              v35 = v12;
              *(_DWORD *)(a2 + 32) = sub_3485C4(a3, 0xDu);
              if ( v34 != 2 )
                goto LABEL_65;
              *(_DWORD *)(a2 + 44) = v43;
              *(_DWORD *)(a2 + 36) = a2 + 44;
              goto LABEL_54;
            }
LABEL_42:
            HIDWORD(v9) = v12 + 2;
            break;
          case 0:
            if ( v8 )
            {
              v36 = sub_3481B8(v12);
              *(_DWORD *)(a2 + 56) = v12 + 1;
              v37 = (int)v36;
              if ( !_cxa_begin_cleanup((_BYTE *)a2) )
                return 9;
              sub_348618(a3, 0xFu, v37);
              return 7;
            }
            goto LABEL_40;
          case 2:
            v16 = *v12;
            v17 = *v12 & 0x7FFFFFFF;
            if ( !v8 )
            {
              LODWORD(v9) = v40;
              if ( !v17 )
                LODWORD(v9) = 1;
              if ( (_DWORD)v9 )
              {
                if ( v17 )
                {
                  v18 = 0;
                  v42 = v12;
                  v19 = v12 + 1;
                  while ( 1 )
                  {
                    v43 = a2 + 88;
                    v20 = sub_34836C(v19++);
                    v21 = v18 + 1;
                    if ( _cxa_type_match((_BYTE *)a2, v20, 0, &v43) )
                      break;
                    ++v18;
                    if ( v21 == v17 )
                    {
                      v22 = v42;
                      goto LABEL_26;
                    }
                  }
                  v12 = v42;
                  if ( v17 != v18 )
                    goto LABEL_47;
                }
                v22 = v12;
LABEL_26:
                v23 = sub_3485C4(a3, 0xDu);
                v24 = v43;
                v25 = 6;
                *(_DWORD *)(a2 + 32) = v23;
                *(_DWORD *)(a2 + 36) = v24;
                *(_DWORD *)(a2 + 40) = v22;
                return v25;
              }
              goto LABEL_31;
            }
LABEL_46:
            v29 = *(_DWORD *)(a2 + 32);
            if ( v29 != sub_3485C4(a3, 0xDu) || v12 != *(int **)(a2 + 40) )
            {
LABEL_47:
              v16 = *v12;
LABEL_31:
              if ( v16 < 0 )
                ++v12;
              goto LABEL_33;
            }
            LODWORD(v9) = 4;
            HIDWORD(v9) = v12 + 1;
            *(_DWORD *)(a2 + 40) = v17;
            *(_DWORD *)(a2 + 44) = 0;
            *(_QWORD *)(a2 + 48) = v9;
            if ( *v12 < 0 )
            {
              v39 = sub_3481B8(&v12[v17 + 1]);
              sub_348618(a3, 0xFu, (int)v39);
              sub_348618(a3, 0, a2);
              return 7;
            }
            v41 = 1;
LABEL_33:
            HIDWORD(v9) = &v12[v17 + 1];
            break;
          default:
            return 9;
        }
      }
      if ( v15 == 1 )
      {
        if ( !v8 )
          goto LABEL_42;
LABEL_43:
        v27 = *(_DWORD *)(a2 + 32);
        if ( v27 == sub_3485C4(a3, 0xDu) && v12 == *(int **)(a2 + 40) )
        {
          v28 = sub_3481B8(v12);
          sub_348618(a3, 0xFu, (int)v28);
          sub_348618(a3, 0, a2);
          return 7;
        }
        goto LABEL_42;
      }
      if ( v15 )
      {
        if ( v15 != 2 )
          return 9;
        v16 = *v12;
        v17 = *v12 & 0x7FFFFFFF;
        if ( !v8 )
          goto LABEL_31;
        goto LABEL_46;
      }
LABEL_40:
      HIDWORD(v9) = v12 + 1;
    }
  }
  if ( !sub_348E74(a3, v44, v9, HIDWORD(v9)) )
    return 8;
  return 9;
}
