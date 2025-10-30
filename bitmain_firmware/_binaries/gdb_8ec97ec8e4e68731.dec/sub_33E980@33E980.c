int __fastcall sub_33E980(int a1)
{
  _BYTE *v1; // r2
  int v3; // r4
  int v5; // r3
  int v6; // r1
  _DWORD *v7; // r4
  int v8; // r0
  int v9; // r0
  _BYTE *v10; // r2
  __int64 v11; // kr00_8
  _DWORD *v12; // r0
  int v13; // r0
  __int64 v14; // kr08_8
  int v15; // r0
  _DWORD *v16; // r8
  int v17; // r0
  unsigned __int8 *v18; // r2
  int v19; // r6
  _DWORD *v20; // r7
  int v21; // r4
  unsigned int v22; // r3
  bool v23; // cc
  bool v24; // zf
  int v25; // r3
  _DWORD *v26; // r0
  int v27; // r3
  __int64 v28; // kr10_8
  int v29; // r0
  _BYTE *v30; // r3
  int v31; // r6
  int v32; // r2
  _DWORD *v33; // r0
  _DWORD *v34; // r4
  int v35; // r7
  __int64 v36; // kr18_8
  _DWORD *v37; // r2
  __int64 v38; // r2
  int v39; // r1
  int v40; // r0
  _DWORD *v42; // r0
  __int64 v43; // kr20_8
  int v44; // r0
  int v45; // r3
  int v46; // [sp+4h] [bp-4h]

  v1 = *(_BYTE **)(a1 + 12);
  switch ( *v1 )
  {
    case 'N':
      *(_DWORD *)(a1 + 12) = v1 + 1;
      v16 = (_DWORD *)sub_33F66C();
      if ( !v16 )
        return 0;
      v17 = sub_33D7A8(a1, 0);
      v18 = *(unsigned __int8 **)(a1 + 12);
      v19 = v17;
      v20 = 0;
      v21 = *v18;
      while ( 2 )
      {
        while ( 2 )
        {
          if ( !v21 )
            goto LABEL_77;
          if ( v21 != 68 )
            goto LABEL_22;
          if ( (v18[1] & 0xDF) == 0x54 )
            v26 = (_DWORD *)sub_33ECE4(a1);
          else
            v26 = (_DWORD *)sub_33F850(a1);
LABEL_64:
          if ( v20 )
            goto LABEL_59;
          v18 = *(unsigned __int8 **)(a1 + 12);
          v20 = v26;
          v27 = *v18;
          if ( v27 != 69 )
            goto LABEL_37;
LABEL_66:
          v21 = v27;
LABEL_22:
          v22 = (unsigned __int8)(v21 - 97);
          v23 = v22 > 0x19;
          if ( v22 > 0x19 )
            v23 = (unsigned __int8)(v21 - 48) > 9u;
          if ( !v23 )
            goto LABEL_34;
          v24 = v21 == 85;
          if ( v21 != 85 )
            v24 = v21 == 67;
          v25 = v24;
          if ( v21 == 76 )
            v25 |= 1u;
          if ( v25 )
          {
LABEL_34:
            v26 = (_DWORD *)sub_33F850(a1);
            if ( !v20 )
            {
              v18 = *(unsigned __int8 **)(a1 + 12);
              v20 = v26;
              v27 = *v18;
              if ( v21 == 83 )
                goto LABEL_61;
              goto LABEL_36;
            }
            goto LABEL_59;
          }
          switch ( v21 )
          {
            case 'S':
              v26 = (_DWORD *)sub_33DAF4((_DWORD *)a1, 1);
              if ( !v20 )
              {
                v18 = *(unsigned __int8 **)(a1 + 12);
                v20 = v26;
                v21 = *v18;
                continue;
              }
LABEL_59:
              v39 = 1;
LABEL_60:
              v40 = sub_33D710(a1, v39, __SPAIR64__((unsigned int)v26, (unsigned int)v20));
              v18 = *(unsigned __int8 **)(a1 + 12);
              v20 = (_DWORD *)v40;
              v27 = *v18;
              if ( v21 == 83 )
              {
LABEL_61:
                v21 = v27;
                continue;
              }
LABEL_36:
              if ( v27 != 69 )
              {
LABEL_37:
                if ( v20 )
                {
                  v28 = *(_QWORD *)(a1 + 32);
                  if ( (int)v28 < SHIDWORD(v28) )
                  {
                    *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v28) = v20;
                    *(_DWORD *)(a1 + 32) = v28 + 1;
                    v21 = *v18;
                    continue;
                  }
                }
LABEL_77:
                *v16 = 0;
                return 0;
              }
              goto LABEL_66;
            case 'I':
              if ( !v20 )
                goto LABEL_77;
              *(_DWORD *)(a1 + 12) = v18 + 1;
              v26 = (_DWORD *)sub_33E8A8((_DWORD *)a1);
              v39 = 4;
              goto LABEL_60;
            case 'T':
              v26 = sub_33D9B4(a1);
              goto LABEL_64;
          }
        }
        if ( v21 != 69 )
        {
          if ( v21 == 77 && v20 != 0 )
          {
            *(_DWORD *)(a1 + 12) = v18 + 1;
            v21 = *++v18;
            continue;
          }
          goto LABEL_77;
        }
        break;
      }
      *v16 = v20;
      if ( !v20 )
        return 0;
      if ( v19 )
      {
        v45 = v46;
        v46 = v19;
        *(_DWORD *)(v19 + 8) = v45;
      }
      if ( *v18 != 69 )
        return 0;
      *(_DWORD *)(a1 + 12) = v18 + 1;
      return v46;
    case 'S':
      if ( v1[1] != 116 )
      {
        v3 = sub_33DAF4((_DWORD *)a1, 0);
        if ( **(_BYTE **)(a1 + 12) == 73 )
          goto LABEL_12;
        return v3;
      }
      v5 = *(_DWORD *)(a1 + 20);
      v6 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 12) = v1 + 2;
      if ( v5 < v6 )
      {
        v7 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v5);
        *(_DWORD *)(a1 + 20) = v5 + 1;
        v7[1] = 0;
        *v7 = 0;
        v7[2] = "std";
        v7[3] = 3;
      }
      else
      {
        v7 = 0;
      }
      v8 = sub_33F850(a1);
      v9 = sub_33D710(a1, 1, __SPAIR64__(v8, (unsigned int)v7));
      v3 = v9;
      v10 = *(_BYTE **)(a1 + 12);
      *(_DWORD *)(a1 + 48) += 3;
      if ( *v10 != 73 )
        return v3;
      if ( v9 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        if ( (int)v11 < SHIDWORD(v11) )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v11) = v9;
          *(_DWORD *)(a1 + 32) = v11 + 1;
LABEL_12:
          v12 = (_DWORD *)a1;
          goto LABEL_17;
        }
      }
      return 0;
    case 'U':
      return sub_33F850(a1);
    case 'Z':
      *(_DWORD *)(a1 + 12) = v1 + 1;
      v29 = sub_33FB70();
      v30 = *(_BYTE **)(a1 + 12);
      v31 = v29;
      if ( *v30 != 69 )
        return 0;
      *(_DWORD *)(a1 + 12) = v30 + 1;
      v32 = (unsigned __int8)v30[1];
      if ( v32 == 115 )
      {
        *(_DWORD *)(a1 + 12) = v30 + 2;
        if ( sub_33DC78(a1) )
        {
          v43 = *(_QWORD *)(a1 + 20);
          if ( (int)v43 < SHIDWORD(v43) )
          {
            v44 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 20) = v43 + 1;
            HIDWORD(v38) = v44 + 16 * v43;
            *(_QWORD *)HIDWORD(v38) = 0;
            *(_DWORD *)(HIDWORD(v38) + 8) = "string literal";
            *(_DWORD *)(HIDWORD(v38) + 12) = 14;
          }
          else
          {
            HIDWORD(v38) = 0;
          }
          goto LABEL_54;
        }
      }
      else
      {
        if ( v32 != 100 )
        {
          v33 = (_DWORD *)sub_33E980(a1);
          v34 = v33;
          if ( !v33 || *v33 == 69 || *v33 == 71 )
            goto LABEL_53;
          v35 = -1;
          goto LABEL_48;
        }
        *(_DWORD *)(a1 + 12) = v30 + 2;
        v35 = sub_33D980(a1);
        if ( v35 >= 0 )
        {
          v42 = (_DWORD *)sub_33E980(a1);
          v34 = v42;
          if ( !v42 )
            goto LABEL_50;
          if ( *v42 == 69 || *v42 == 71 )
          {
LABEL_49:
            if ( v35 == -1 )
            {
LABEL_53:
              HIDWORD(v38) = v34;
LABEL_54:
              LODWORD(v38) = v31;
              return sub_33D710(a1, 2, v38);
            }
LABEL_50:
            v36 = *(_QWORD *)(a1 + 20);
            if ( (int)v36 < SHIDWORD(v36) )
            {
              v37 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v36);
              v37[1] = 0;
              *(_DWORD *)(a1 + 20) = v36 + 1;
              *v37 = 70;
              v37[2] = v34;
              v34 = v37;
              v37[3] = v35;
            }
            else
            {
              v34 = 0;
            }
            goto LABEL_53;
          }
LABEL_48:
          if ( !sub_33DC78(a1) )
            return 0;
          goto LABEL_49;
        }
      }
      return 0;
    default:
      v13 = sub_33F850(a1);
      v3 = v13;
      if ( **(_BYTE **)(a1 + 12) != 73 )
        return v3;
      if ( !v13 )
        return 0;
      v14 = *(_QWORD *)(a1 + 32);
      if ( (int)v14 >= SHIDWORD(v14) )
        return 0;
      v12 = (_DWORD *)a1;
      *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v14) = v3;
      *(_DWORD *)(a1 + 32) = v14 + 1;
LABEL_17:
      v15 = sub_33E96C(v12);
      return sub_33D710(a1, 4, __SPAIR64__(v15, v3));
  }
}
