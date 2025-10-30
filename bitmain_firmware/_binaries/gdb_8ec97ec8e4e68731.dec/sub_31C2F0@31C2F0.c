int __fastcall sub_31C2F0(int a1, int a2)
{
  _BYTE *v2; // r2
  _DWORD *v4; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r3
  int *v10; // r7
  int v11; // r0
  unsigned __int8 *v12; // r2
  int v13; // r6
  int v14; // r8
  int v15; // r4
  unsigned int v16; // r3
  bool v17; // cc
  bool v18; // zf
  int v19; // r3
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // r3
  int v24; // r0
  _BYTE *v25; // r3
  int v26; // r6
  int v27; // r2
  _DWORD *v28; // r0
  int v29; // r7
  int v30; // r8
  int v31; // r2
  bool v32; // zf
  char v33; // r3
  int v34; // r3
  __int64 v35; // r2
  _DWORD *v36; // r4
  int v37; // r0
  int v38; // r0
  _BYTE *v39; // r2
  int v40; // r3
  _DWORD *v42; // r0
  int v43; // r3
  int v44; // r4
  int v45; // r0
  int v46; // r0
  int v47; // [sp+4h] [bp-4h] BYREF

  v2 = *(_BYTE **)(a1 + 12);
  switch ( *v2 )
  {
    case 'N':
      *(_DWORD *)(a1 + 12) = v2 + 1;
      v10 = sub_31C0B8((_DWORD *)a1, &v47, 1);
      if ( !v10 )
        return 0;
      v11 = sub_31397C((_DWORD *)a1, 0);
      v12 = *(unsigned __int8 **)(a1 + 12);
      v13 = v11;
      v14 = 0;
      v15 = *v12;
      while ( 2 )
      {
        while ( 2 )
        {
          if ( !v15 )
            goto LABEL_37;
          while ( v15 == 68 )
          {
            if ( (v12[1] & 0xDF) == 0x54 )
              v20 = sub_319DD0(a1);
            else
              v20 = (_DWORD *)sub_31ABF0((_DWORD *)a1);
LABEL_68:
            if ( v14 )
              goto LABEL_30;
            v12 = *(unsigned __int8 **)(a1 + 12);
            v14 = (int)v20;
            v15 = *v12;
LABEL_33:
            if ( v15 != 69 )
            {
              if ( !v14 )
                goto LABEL_37;
              v22 = *(_DWORD *)(a1 + 32);
              if ( v22 >= *(_DWORD *)(a1 + 36) )
                goto LABEL_37;
              *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v22) = v14;
              *(_DWORD *)(a1 + 32) = v22 + 1;
              v15 = *v12;
              if ( !*v12 )
                goto LABEL_37;
              continue;
            }
            break;
          }
          v16 = (unsigned __int8)(v15 - 97);
          v17 = v16 > 0x19;
          if ( v16 > 0x19 )
            v17 = (unsigned __int8)(v15 - 48) > 9u;
          if ( !v17 )
            goto LABEL_28;
          v18 = v15 == 85;
          if ( v15 != 85 )
            v18 = v15 == 67;
          v19 = v18;
          if ( v15 == 76 )
            v19 |= 1u;
          if ( v19 )
          {
LABEL_28:
            v20 = (_DWORD *)sub_31ABF0((_DWORD *)a1);
            if ( !v14 )
            {
              v14 = (int)v20;
              goto LABEL_32;
            }
            goto LABEL_30;
          }
          if ( v15 == 83 )
          {
            v20 = sub_3142CC((_DWORD *)a1, 1);
            if ( !v14 )
            {
              v12 = *(unsigned __int8 **)(a1 + 12);
              v14 = (int)v20;
              v15 = *v12;
              continue;
            }
LABEL_30:
            v21 = 1;
LABEL_31:
            v14 = sub_313728((_DWORD *)a1, v21, __SPAIR64__((unsigned int)v20, v14));
LABEL_32:
            v12 = *(unsigned __int8 **)(a1 + 12);
            v18 = v15 == 83;
            v15 = *v12;
            if ( v18 )
              continue;
            goto LABEL_33;
          }
          break;
        }
        if ( v15 == 73 )
        {
          if ( !v14 )
            goto LABEL_37;
          v20 = (_DWORD *)sub_31D3A4(a1);
          v21 = 4;
          goto LABEL_31;
        }
        if ( v15 == 84 )
        {
          v20 = sub_313D78((_DWORD *)a1);
          goto LABEL_68;
        }
        if ( v15 == 69 )
        {
          *v10 = v14;
          if ( !v14 )
            return 0;
          if ( v13 )
          {
            v43 = v47;
            v47 = v13;
            *(_DWORD *)(v13 + 8) = v43;
          }
          if ( *v12 != 69 )
            return 0;
          v44 = v47;
          *(_DWORD *)(a1 + 12) = v12 + 1;
          return v44;
        }
        else
        {
          if ( v15 == 77 && v14 != 0 )
          {
            *(_DWORD *)(a1 + 12) = v12 + 1;
            v15 = *++v12;
            continue;
          }
LABEL_37:
          *v10 = 0;
          return 0;
        }
      }
    case 'S':
      if ( v2[1] != 116 )
      {
        v4 = sub_3142CC((_DWORD *)a1, 0);
        if ( **(_BYTE **)(a1 + 12) != 73 )
          return (int)v4;
        goto LABEL_6;
      }
      *(_DWORD *)(a1 + 12) = v2 + 2;
      v36 = sub_314104((_DWORD *)a1, (int)"std", 3);
      v37 = sub_31ABF0((_DWORD *)a1);
      v38 = sub_313728((_DWORD *)a1, 1, __SPAIR64__(v37, (unsigned int)v36));
      v4 = (_DWORD *)v38;
      v39 = *(_BYTE **)(a1 + 12);
      *(_DWORD *)(a1 + 44) += 3;
      if ( *v39 != 73 )
        return (int)v4;
      if ( v38 )
      {
        v40 = *(_DWORD *)(a1 + 32);
        if ( v40 < *(_DWORD *)(a1 + 36) )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v40) = v38;
          *(_DWORD *)(a1 + 32) = v40 + 1;
LABEL_6:
          v6 = a1;
          goto LABEL_7;
        }
      }
      return 0;
    case 'U':
      return sub_31ABF0((_DWORD *)a1);
    case 'Z':
      *(_DWORD *)(a1 + 12) = v2 + 1;
      v24 = sub_31C864();
      v25 = *(_BYTE **)(a1 + 12);
      v26 = v24;
      if ( *v25 != 69 )
        return 0;
      *(_DWORD *)(a1 + 12) = v25 + 1;
      v27 = (unsigned __int8)v25[1];
      if ( v27 == 115 )
      {
        *(_DWORD *)(a1 + 12) = v25 + 2;
        if ( sub_313DEC(a1) )
        {
          HIDWORD(v35) = sub_314104((_DWORD *)a1, (int)"string literal", 14);
          goto LABEL_60;
        }
      }
      else
      {
        if ( v27 == 100 )
        {
          *(_DWORD *)(a1 + 12) = v25 + 2;
          v30 = sub_313D1C(a1);
          if ( v30 < 0 )
            return 0;
          v42 = (_DWORD *)sub_31C2F0(a1, 0);
          v29 = (int)v42;
          if ( !v42 || (*v42 & 0xFFFFFFFD) == 0x45 )
          {
LABEL_58:
            v35 = *(_QWORD *)(a1 + 20);
            if ( (int)v35 < SHIDWORD(v35) )
            {
              HIDWORD(v35) = *(_DWORD *)(a1 + 16) + 16 * v35;
              *(_DWORD *)(HIDWORD(v35) + 4) = 0;
              *(_DWORD *)(a1 + 20) = v35 + 1;
              *(_DWORD *)HIDWORD(v35) = 70;
              *(_DWORD *)(HIDWORD(v35) + 12) = v30;
              *(_DWORD *)(HIDWORD(v35) + 8) = v29;
LABEL_60:
              LODWORD(v35) = v26;
              return sub_313728((_DWORD *)a1, 2, v35);
            }
LABEL_84:
            HIDWORD(v35) = 0;
            goto LABEL_60;
          }
        }
        else
        {
          v28 = (_DWORD *)sub_31C2F0(a1, 0);
          v29 = (int)v28;
          if ( !v28 )
            goto LABEL_84;
          if ( (*v28 & 0xFFFFFFFD) == 0x45 )
            goto LABEL_92;
          v30 = -1;
        }
        if ( !a2 )
        {
          v31 = **(unsigned __int8 **)(a1 + 12);
          v32 = v31 == 69;
          if ( v31 != 69 )
            v32 = v31 == 0;
          v33 = !v32;
          if ( v31 == 95 )
            v34 = 0;
          else
            v34 = v33 & 1;
          if ( v34 )
          {
            v45 = sub_3138E0(v29);
            v46 = sub_31B110((_DWORD *)a1, v45);
            v29 = sub_313728((_DWORD *)a1, 3, __SPAIR64__(v46, v29));
          }
        }
        if ( sub_313DEC(a1) )
        {
          if ( v30 != -1 )
            goto LABEL_58;
LABEL_92:
          HIDWORD(v35) = v29;
          goto LABEL_60;
        }
      }
      return 0;
    default:
      v8 = sub_31ABF0((_DWORD *)a1);
      v4 = (_DWORD *)v8;
      if ( **(_BYTE **)(a1 + 12) != 73 )
        return (int)v4;
      if ( !v8 )
        return 0;
      v9 = *(_DWORD *)(a1 + 32);
      if ( v9 >= *(_DWORD *)(a1 + 36) )
        return 0;
      v6 = a1;
      *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * v9) = v4;
      *(_DWORD *)(a1 + 32) = v9 + 1;
LABEL_7:
      v7 = sub_31D3A4(v6);
      return sub_313728((_DWORD *)a1, 4, __SPAIR64__(v7, (unsigned int)v4));
  }
}
