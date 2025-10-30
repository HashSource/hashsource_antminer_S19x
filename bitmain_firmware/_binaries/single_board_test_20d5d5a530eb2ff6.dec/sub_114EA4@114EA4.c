int __fastcall sub_114EA4(int a1, _DWORD *a2)
{
  int v2; // r6
  _DWORD *v3; // r5
  int (__fastcall *v4)(_DWORD); // r3
  void *v6; // r2
  void *v7; // r0
  int *v8; // r0
  int v9; // r2
  bool v10; // cc
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int *v15; // r2
  int v16; // r1
  int v17; // r3
  unsigned __int8 *v18; // r2
  int v19; // r6
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  _DWORD *v24; // r7
  int v25; // r4
  unsigned int v26; // r1
  int v27; // r8
  int v28; // r0
  char *v29; // r6
  bool v30; // zf
  int v31; // r3
  int v33; // r11
  signed int v34; // r7
  _DWORD *v35; // r8
  _DWORD *v36; // r4
  int v37; // r6
  int *v38; // r0
  int v39; // r11
  int v40; // r4
  int v41; // r0
  unsigned int v42; // r1
  _DWORD *v43; // r0
  int v44; // r11
  int v45; // r0
  int v46; // r3
  int (__fastcall *v47)(_DWORD); // r3
  int v48; // r0
  int (__fastcall *v49)(_DWORD *); // r3
  int v50; // [sp+0h] [bp-Ch]
  signed int v51; // [sp+4h] [bp-8h]

  v3 = (_DWORD *)*a2;
  switch ( a1 )
  {
    case 1:
      goto LABEL_5;
    case 3:
      v46 = v3[31];
      if ( v46 )
      {
        v47 = *(int (__fastcall **)(_DWORD))(v46 + 8);
        if ( v47 )
        {
          if ( !v47(*a2) )
            return 0;
        }
      }
      sub_11A1A4(v3[19]);
      sub_11D470(v3[20]);
      ASN1_INTEGER_free(v3[23]);
      ASN1_INTEGER_free(v3[24]);
      sub_10BFDC(v3[25], (void (__fastcall *)(int))GENERAL_NAMES_free);
      return 1;
    case 4:
      v4 = *(int (__fastcall **)(_DWORD))(v3[31] + 8);
      if ( v4 && !v4(*a2) )
        return 0;
      sub_11A1A4(v3[19]);
      sub_11D470(v3[20]);
      ASN1_INTEGER_free(v3[23]);
      ASN1_INTEGER_free(v3[24]);
      sub_10BFDC(v3[25], (void (__fastcall *)(int))GENERAL_NAMES_free);
LABEL_5:
      v3[20] = 0;
      v3[19] = 0;
      v6 = off_21FC60;
      v3[18] = 0;
      v3[21] = 0;
      v3[31] = v6;
      v3[32] = 0;
      v3[25] = 0;
      v3[23] = 0;
      v3[24] = 0;
      v3[22] = 32895;
      return 1;
    case 5:
      v7 = sub_D93D8();
      if ( !sub_114A34((int)v3, v7, v3 + 26, 0) )
        v3[18] |= 0x80u;
      v8 = (int *)sub_10ED48((int)v3);
      v3[20] = v8;
      if ( v8 )
      {
        v9 = v3[21];
        v10 = v8[1] <= 0;
        v11 = v8[2];
        v12 = v9 | 1;
        if ( v8[1] > 0 )
          v2 = 3;
        v3[21] = v12;
        if ( v10 )
        {
          v2 = 2;
          v13 = 1;
        }
        else
        {
          v12 = v9 | 5;
          v3[21] = v9 | 5;
          v13 = 2;
        }
        v10 = v11 <= 0;
        v14 = v8[5];
        if ( v10 )
        {
          if ( v14 <= 0 )
            goto LABEL_20;
        }
        else
        {
          v12 |= 8u;
          v3[21] = v12;
          if ( v14 <= 0 )
            goto LABEL_18;
          v13 = v2;
        }
        v12 |= 0x10u;
        v3[21] = v12;
LABEL_18:
        if ( v13 != 1 )
        {
          v12 |= 2u;
          v3[21] = v12;
        }
LABEL_20:
        v15 = (int *)v8[3];
        if ( v8[4] > 0 )
        {
          v12 |= 0x20u;
          v3[21] = v12;
        }
        if ( v15 )
        {
          v16 = *v15;
          v3[21] = v12 | 0x40;
          if ( v16 > 0 )
          {
            v18 = (unsigned __int8 *)v15[2];
            v17 = *v18;
            v3[22] = v17;
            if ( v16 != 1 )
              LOWORD(v17) = v17 | (v18[1] << 8);
          }
          else
          {
            v17 = v3[22];
          }
          v3[22] = v17 & 0x807F;
        }
        v19 = *v8;
        v20 = sub_113BC4((int)v3);
        if ( !sub_11D7BC(v19, v20) )
          goto LABEL_29;
        goto LABEL_30;
      }
      if ( v50 != -1 )
LABEL_29:
        v3[18] |= 0x80u;
LABEL_30:
      v21 = sub_10ED48((int)v3);
      v3[19] = v21;
      if ( !v21 && v50 != -1 )
        v3[18] |= 0x80u;
      v22 = sub_10ED48((int)v3);
      v3[23] = v22;
      if ( !v22 && v50 != -1 )
        v3[18] |= 0x80u;
      v23 = sub_10ED48((int)v3);
      v3[24] = v23;
      if ( v23 )
      {
        if ( v3[23] )
          goto LABEL_34;
      }
      else if ( v50 == -1 )
      {
        goto LABEL_34;
      }
      v3[18] |= 0x80u;
LABEL_34:
      v24 = (_DWORD *)v3[7];
      v25 = 0;
      while ( 1 )
      {
        v10 = v25 < sub_10C010((int)v24);
        v26 = v25++;
        if ( !v10 )
          break;
        v27 = sub_10C01C(v24, v26);
        v28 = sub_110544(v27);
        v29 = sub_EAC84(v28);
        if ( v29 == (char *)857 )
        {
          v3[18] |= 0x1000u;
          if ( sub_110554(v27) )
            goto LABEL_48;
        }
        else if ( sub_110554(v27) )
        {
          v30 = v29 == (char *)90;
          if ( v29 != (char *)90 )
            v30 = v29 == (char *)770;
          v31 = v30;
          if ( !(v29 == (char *)140 ? v31 | 1 : v31) )
          {
LABEL_48:
            v3[18] |= 0x200u;
            break;
          }
        }
      }
      v33 = 0;
      v34 = 0;
      v35 = (_DWORD *)sub_113BCC((int)v3);
      break;
    default:
      return 1;
  }
  while ( 1 )
  {
    if ( v34 >= sub_10C010((int)v35) )
      goto LABEL_80;
    v36 = (_DWORD *)sub_10C01C(v35, v34);
    v37 = sub_10EDF8((int)v36);
    if ( v37 )
    {
      v38 = (int *)v3[25];
      if ( !v38 && (v38 = (int *)sub_10BFCC(), (v3[25] = v38) == 0) || !sub_10BD3C(v38, v37) )
      {
        GENERAL_NAMES_free(v37);
        return 0;
      }
    }
    else
    {
      if ( v51 != -1 )
        goto LABEL_79;
      v37 = v33;
    }
    v36[6] = v37;
    v39 = sub_10EDF8((int)v36);
    if ( !v39 )
      break;
    v36[7] = sub_1272D4();
    j_ASN1_STRING_free_1(v39);
LABEL_56:
    v40 = v36[5];
    v51 = 0;
    v41 = sub_10C010(v40);
    v42 = 0;
    v10 = v41 > 0;
    v43 = (_DWORD *)v40;
    if ( v10 )
    {
      while ( 1 )
      {
        v44 = sub_10C01C(v43, v42);
        if ( sub_110554(v44) )
        {
          v48 = sub_110544(v44);
          if ( sub_EAC84(v48) != (char *)771 )
            break;
        }
        ++v51;
        v45 = sub_10C010(v40);
        v42 = v51;
        v10 = v51 < v45;
        v43 = (_DWORD *)v40;
        if ( !v10 )
          goto LABEL_60;
      }
      ++v34;
      v33 = v37;
      v3[18] |= 0x200u;
    }
    else
    {
LABEL_60:
      ++v34;
      v33 = v37;
    }
  }
  if ( v51 == -1 )
  {
    v36[7] = -1;
    goto LABEL_56;
  }
LABEL_79:
  v3[18] |= 0x80u;
LABEL_80:
  v49 = *(int (__fastcall **)(_DWORD *))(v3[31] + 4);
  if ( v49 && !v49(v3) )
    return 0;
  v3[18] |= 0x100u;
  return 1;
}
