int __fastcall sub_25E4EC(int a1, int a2, unsigned int a3)
{
  int v4; // r8
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v7; // r0
  int v8; // r0
  _DWORD *v9; // lr
  _BOOL4 v10; // r11
  _BOOL4 v11; // r3
  _DWORD *v12; // r1
  int *v13; // r4
  int v14; // r6
  int v16; // r5
  int v17; // r8
  _DWORD *v18; // r0
  _DWORD *v19; // r11
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  _BYTE *v22; // r3
  _BYTE *v23; // r2
  bool v24; // cc
  unsigned int v25; // r0
  unsigned int v26; // r1
  unsigned __int64 v27; // r6
  unsigned __int64 v28; // r0
  unsigned __int64 v29; // r4
  int v30; // r0
  void *v31; // r2
  void *v32; // r1
  void *v33; // r5
  int v34; // r8
  void *v35; // r9
  int v36; // r7
  int v37; // r1
  int v38; // r0
  unsigned int v39; // r3
  bool v40; // cf
  __int64 v41; // r4
  __int64 v42; // r0
  bool v43; // zf
  int v44; // r4
  unsigned int v45; // r7
  __int64 v46; // r0
  int v47; // r0
  int v48; // r8
  _BYTE *v49; // r5
  int v50; // r0
  int v51; // r0
  int v52; // r3
  __int64 v53; // r0
  _BYTE *v54; // r7
  int v55; // r8
  int v56; // r0
  int v57; // r0
  int v58; // r3
  unsigned __int64 v59; // r2
  int v60; // r1
  int v61; // r1
  unsigned __int64 v62; // r2
  signed __int64 v63; // r4
  __int64 v64; // r0
  __int64 v65; // r8
  __int64 v66; // r0
  _BYTE *v67; // r7
  int v68; // r8
  int v69; // r0
  int v70; // r0
  int v71; // r3
  unsigned __int64 v72; // r2
  int v73; // r1
  int v74; // r1
  unsigned int v75; // r3
  __int64 v76; // r0
  __int64 v77; // r2
  __int64 v78; // r6
  signed __int64 v79; // r2
  int v80; // r3
  int v81; // r0
  int v82; // [sp+10h] [bp-3Ch]
  int v83; // [sp+20h] [bp-2Ch] BYREF
  int v84; // [sp+24h] [bp-28h] BYREF
  int v85; // [sp+28h] [bp-24h] BYREF
  int v86; // [sp+2Ch] [bp-20h] BYREF
  void *v87[3]; // [sp+30h] [bp-1Ch] BYREF
  void *ptr; // [sp+3Ch] [bp-10h] BYREF
  unsigned int v89; // [sp+40h] [bp-Ch]
  int v90; // [sp+44h] [bp-8h]

  v83 = a2;
  v4 = a1;
  v84 = a1;
  v5 = (_DWORD *)sub_26BC70(a1);
  v6 = (_DWORD *)sub_171258(v5);
  v7 = (_DWORD *)sub_26BC70(v83);
  v8 = sub_171258(v7);
  v9 = (_DWORD *)v6[6];
  v10 = (*v9 & ((unsigned int)off_100FC + 3)) == (_DWORD)&dword_10000 + 2;
  v11 = (((unsigned int)off_100FC + 3) & **(_DWORD **)(v8 + 24)) == (_DWORD)&dword_10000 + 2;
  if ( !v10 && !v11 )
  {
    v16 = sub_26EA24(v4);
    v17 = sub_26EA24(v83);
    v18 = (_DWORD *)sub_26BC70(v16);
    v19 = (_DWORD *)sub_171258(v18);
    v20 = (_DWORD *)sub_26BC70(v17);
    v21 = (_DWORD *)sub_171258(v20);
    if ( !sub_26E9E0(v16) && !sub_1736DC(v19) || !sub_26E9E0(v17) && !sub_1736DC(v21) )
      sub_946E0("Argument to arithmetic operation not a number or boolean.");
    if ( sub_173720(v19) || sub_173720(v21) )
    {
      if ( sub_173720(v19) )
      {
        if ( sub_173720(v21) )
        {
          if ( v21[5] <= v19[5] )
            v21 = v19;
        }
        else
        {
          v21 = v19;
        }
      }
      v30 = sub_26BB80(v21);
      v32 = (void *)v21[5];
      v14 = v30;
      memset(v87, 0, sizeof(v87));
      ptr = 0;
      if ( !v32 )
        v31 = 0;
      v89 = 0;
      v90 = 0;
      if ( v32 )
      {
        sub_AF660((char **)v87, (unsigned int)v32);
        v32 = ptr;
        v39 = v21[5];
        v31 = (void *)(v89 - (_DWORD)ptr);
        v40 = v39 >= v89 - (unsigned int)ptr;
        if ( v39 > v89 - (unsigned int)ptr )
        {
          sub_AF660((char **)&ptr, v39 - (_DWORD)v31);
          v31 = v87[0];
          v32 = ptr;
        }
        else
        {
          if ( v39 >= v89 - (unsigned int)ptr )
            v31 = v87[0];
          else
            v39 += (unsigned int)ptr;
          if ( !v40 )
          {
            v31 = v87[0];
            v89 = v39;
          }
        }
      }
      sub_25C7F4(v16, v17, v31, &v85, v32, &v86);
      v33 = v87[0];
      v34 = v85;
      v35 = ptr;
      v36 = v86;
      v38 = sub_26BCB8(v14, v37);
      ((void (__fastcall *)(unsigned int, void *, int, void *, int, int, _DWORD *))loc_252B9C)(
        a3,
        v33,
        v34,
        v35,
        v36,
        v38,
        v21);
      if ( ptr )
        sub_339E64(ptr);
      if ( v87[0] )
      {
        sub_339E64(v87[0]);
        return v14;
      }
      return v14;
    }
    v22 = (_BYTE *)v19[6];
    if ( *v22 == 21 || (v23 = (_BYTE *)v21[6], *v23 == 21) )
    {
      v41 = sub_26EB1C(v16);
      v42 = sub_26EB1C(v17);
      switch ( a3 )
      {
        case 0xBu:
          v45 = v41 & v42;
          v44 = HIDWORD(v41) & HIDWORD(v42);
          break;
        case 0xCu:
          v45 = v41 | v42;
          v44 = HIDWORD(v41) | HIDWORD(v42);
          break;
        case 0xDu:
          v45 = v41 ^ v42;
          v44 = HIDWORD(v41) ^ HIDWORD(v42);
          break;
        case 0xEu:
          v43 = v41 == v42;
          v44 = 0;
          v45 = v43;
          break;
        case 0xFu:
          v43 = v41 == v42;
          v44 = 0;
          v45 = !v43;
          break;
        default:
          sub_946E0("Invalid operation on booleans.", HIDWORD(v42));
      }
      v46 = sub_26BB80(v19);
      v14 = v46;
      v47 = sub_26BCB8(v46, HIDWORD(v46));
      v48 = v19[5];
      v49 = (_BYTE *)v47;
      v50 = sub_170040((int)v19);
      v51 = ((int (__fastcall *)(int))loc_165BB8)(v50);
      sub_15C2E8(v49, v48, v51, v52, v45, v44);
      return v14;
    }
    v24 = a3 > 0x18;
    if ( a3 != 24 )
      v24 = a3 - 7 > 1;
    if ( v24 )
    {
      v25 = v19[5];
      v26 = v21[5];
      if ( v25 <= v26 )
      {
        if ( v25 >= v26 )
        {
          if ( (v22[1] & 1) == 0 )
          {
            if ( (v23[1] & 1) == 0 )
              goto LABEL_102;
            v19 = v21;
          }
          goto LABEL_27;
        }
        v22 = (_BYTE *)v21[6];
        v19 = v21;
      }
    }
    if ( (v22[1] & 1) == 0 )
    {
LABEL_102:
      v63 = sub_26EB1C(v16);
      v64 = sub_26EB1C(v17);
      v65 = v64;
      switch ( a3 )
      {
        case 1u:
          v63 += v64;
          goto LABEL_105;
        case 2u:
          v63 -= v64;
          goto LABEL_105;
        case 3u:
          v80 = v63 * HIDWORD(v64) + v64 * HIDWORD(v63);
          v63 = (unsigned int)v63 * (unsigned __int64)(unsigned int)v64;
          HIDWORD(v63) += v80;
          goto LABEL_105;
        case 4u:
        case 0x1Eu:
          if ( !v64 )
            goto LABEL_94;
          v63 = sub_347ED4(v63, HIDWORD(v63), v64, HIDWORD(v64));
          goto LABEL_105;
        case 5u:
          if ( !v64 )
            goto LABEL_94;
          sub_347ED4(v63, HIDWORD(v63), v64, HIDWORD(v64));
          v63 = v79;
          goto LABEL_105;
        case 6u:
          if ( v64 )
          {
            v76 = sub_347ED4(v63, HIDWORD(v63), v64, HIDWORD(v64));
            v78 = v76;
            if ( v76 < 0 && v77 )
              v78 = v76 - 1;
            v63 -= v65 * v78;
          }
          goto LABEL_105;
        case 7u:
          v63 <<= v64;
          goto LABEL_105;
        case 8u:
          v75 = ((unsigned int)v63 >> v64) | (HIDWORD(v63) << (32 - v64));
          if ( (int)v64 - 32 >= 0 )
            v75 |= SHIDWORD(v63) >> (v64 - 32);
          SHIDWORD(v63) >>= v64;
          LODWORD(v63) = v75;
          goto LABEL_105;
        case 9u:
          v43 = v63 == 0;
          HIDWORD(v63) = 0;
          LOBYTE(v63) = !v43;
          if ( !v64 )
            LOBYTE(v63) = 0;
          LODWORD(v63) = (unsigned __int8)v63;
          goto LABEL_105;
        case 0xAu:
          v63 = (v63 | v64) != 0;
          goto LABEL_105;
        case 0xBu:
          v63 &= v64;
          goto LABEL_105;
        case 0xCu:
          v63 |= v64;
          goto LABEL_105;
        case 0xDu:
          v63 ^= v64;
          goto LABEL_105;
        case 0xEu:
          v63 = v63 == v64;
          goto LABEL_105;
        case 0xFu:
          v63 = v63 != v64;
          goto LABEL_105;
        case 0x10u:
          v63 = v63 < v64;
          goto LABEL_105;
        case 0x11u:
          v63 = v64 < v63;
          goto LABEL_105;
        case 0x12u:
          v63 = v64 >= v63;
          goto LABEL_105;
        case 0x13u:
          v63 = v63 >= v64;
          goto LABEL_105;
        case 0x18u:
          if ( v64 >= 0 )
          {
            v72 = v63;
            v63 = 1;
            while ( 1 )
            {
              if ( (v65 & 1) != 0 )
              {
                v74 = v63 * HIDWORD(v72) + v72 * HIDWORD(v63);
                v63 = (unsigned int)v63 * (unsigned __int64)(unsigned int)v72;
                HIDWORD(v63) += v74;
              }
              v65 >>= 1;
              if ( !v65 )
                break;
              v73 = v72 * HIDWORD(v72);
              v72 = (unsigned int)v72 * (unsigned __int64)(unsigned int)v72;
              HIDWORD(v72) += 2 * v73;
            }
            goto LABEL_105;
          }
          if ( v63 )
          {
            v63 = 0;
LABEL_105:
            v66 = sub_26BB80(v19);
            v14 = v66;
            v67 = (_BYTE *)sub_26BCB8(v66, HIDWORD(v66));
            v68 = *(_DWORD *)(sub_26BC70(v14) + 20);
            v69 = sub_170040((int)v19);
            v70 = ((int (__fastcall *)(int))loc_165BB8)(v69);
            sub_15C2E8(v67, v68, v70, v71, v63, SHIDWORD(v63));
            return v14;
          }
          break;
        case 0x19u:
          if ( v64 < v63 )
            goto LABEL_104;
          goto LABEL_105;
        case 0x1Au:
          if ( v63 < v64 )
LABEL_104:
            v63 = v64;
          goto LABEL_105;
        default:
          goto LABEL_155;
      }
LABEL_149:
      sub_946E0("Attempt to raise 0 to negative power.");
    }
LABEL_27:
    v27 = sub_26EB1C(v17);
    v28 = sub_26EB1C(v16);
    v29 = v28;
    switch ( a3 )
    {
      case 1u:
        v29 = v28 + v27;
        goto LABEL_66;
      case 2u:
        v29 = v28 - v27;
        goto LABEL_66;
      case 3u:
        v29 = v28 * v27;
        goto LABEL_66;
      case 4u:
      case 0x1Eu:
        if ( !v27 )
          goto LABEL_94;
        v29 = sub_347F74(v28, HIDWORD(v28), v27, HIDWORD(v27));
        goto LABEL_66;
      case 5u:
        if ( !v27 )
LABEL_94:
          sub_946E0("Division by zero");
        goto LABEL_92;
      case 6u:
        if ( v27 )
        {
LABEL_92:
          sub_347F74(v28, HIDWORD(v28), v27, HIDWORD(v27));
          v29 = v62;
        }
        goto LABEL_66;
      case 7u:
        v29 = v28 << v27;
        goto LABEL_66;
      case 8u:
        v29 = v28 >> v27;
        goto LABEL_66;
      case 9u:
        HIDWORD(v29) = 0;
        LOBYTE(v29) = v28 != 0;
        if ( !v27 )
          LOBYTE(v29) = 0;
        LODWORD(v29) = (unsigned __int8)v29;
        goto LABEL_66;
      case 0xAu:
        v29 = (v28 | v27) != 0;
        goto LABEL_66;
      case 0xBu:
        v29 = v28 & v27;
        goto LABEL_66;
      case 0xCu:
        v29 = v28 | v27;
        goto LABEL_66;
      case 0xDu:
        v29 = v28 ^ v27;
        goto LABEL_66;
      case 0xEu:
        v29 = v28 == v27;
        goto LABEL_66;
      case 0xFu:
        v29 = v28 != v27;
        goto LABEL_66;
      case 0x10u:
        v29 = v28 < v27;
        goto LABEL_66;
      case 0x11u:
        v29 = v28 > v27;
        goto LABEL_66;
      case 0x12u:
        v29 = v28 <= v27;
        goto LABEL_66;
      case 0x13u:
        v29 = v28 >= v27;
        goto LABEL_66;
      case 0x18u:
        if ( (v27 & 0x8000000000000000LL) != 0LL )
        {
          if ( !v28 )
            goto LABEL_149;
          v29 = 0;
        }
        else
        {
          v59 = v28;
          v29 = 1;
          while ( 1 )
          {
            if ( (v27 & 1) != 0 )
            {
              v61 = v29 * HIDWORD(v59) + v59 * HIDWORD(v29);
              v29 = (unsigned int)v29 * (unsigned __int64)(unsigned int)v59;
              HIDWORD(v29) += v61;
            }
            v27 = (__int64)v27 >> 1;
            if ( !v27 )
              break;
            v60 = v59 * HIDWORD(v59);
            v59 = (unsigned int)v59 * (unsigned __int64)(unsigned int)v59;
            HIDWORD(v59) += 2 * v60;
          }
        }
LABEL_66:
        v53 = sub_26BB80(v19);
        v14 = v53;
        v54 = (_BYTE *)sub_26BCB8(v53, HIDWORD(v53));
        v55 = *(_DWORD *)(sub_26BC70(v14) + 20);
        v56 = sub_170040((int)v19);
        v57 = ((int (__fastcall *)(int))loc_165BB8)(v56);
        sub_15C34C(v54, v55, v57, v58, v29, HIDWORD(v29));
        break;
      case 0x19u:
        if ( v28 > v27 )
          goto LABEL_65;
        goto LABEL_66;
      case 0x1Au:
        if ( v28 < v27 )
LABEL_65:
          v29 = v27;
        goto LABEL_66;
      default:
LABEL_155:
        sub_946E0("Invalid binary operation on numbers.");
    }
    return v14;
  }
  if ( !v10 || !v11 )
  {
    if ( (int *)(*v9 & ((unsigned int)off_100FC + 3)) == (int *)((char *)&dword_10000 + 2) )
    {
      if ( (**(char **)(v8 + 24) & 0xFFFFFFEF) != 9 && !sub_1736DC((_DWORD *)v8) )
LABEL_153:
        sub_946E0("Argument to operation not a number or boolean.");
      v4 = v83;
      v12 = v6;
      v13 = &v83;
    }
    else
    {
      v12 = (_DWORD *)v8;
      if ( (*(char *)v9 & 0xFFFFFFEF) != 9 )
      {
        v82 = v8;
        v81 = sub_1736DC(v6);
        v12 = (_DWORD *)v82;
        if ( !v81 )
          goto LABEL_153;
      }
      v13 = &v84;
    }
    *v13 = ((int (__fastcall *)(int, _DWORD *))loc_25E368)(v4, v12);
    return sub_25F09C(v84, v83, a3);
  }
  return sub_25F09C(v4, v83, a3);
}
