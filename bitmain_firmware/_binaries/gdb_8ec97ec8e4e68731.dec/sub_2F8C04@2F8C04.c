int __fastcall sub_2F8C04(int a1)
{
  char *v2; // r9
  unsigned __int8 *v3; // r8
  _DWORD *v4; // r0
  void *v5; // r11
  unsigned int v7; // r0
  _DWORD *v8; // r5
  int v9; // r3
  bool v10; // zf
  int v11; // r7
  _DWORD *v12; // r6
  _BOOL4 v13; // r11
  unsigned int v14; // r4
  int v15; // r2
  unsigned int v16; // r12
  unsigned int v17; // r1
  int v18; // r2
  int v19; // r0
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  int v24; // r3
  bool v25; // zf
  bool v26; // zf
  __int64 v27; // r2
  int v28; // r4
  _DWORD *v29; // r3
  _BYTE *v30; // r0
  int v31; // r2
  int v32; // r2
  int v33; // r0
  int v34; // r0
  int v35; // r2
  int v36; // r1
  int v37; // r3
  bool v38; // zf
  int v39; // r1
  char *v40; // r0
  _BYTE *v41; // r0
  int v42; // r2
  int v43; // r3
  char *v44; // r2
  int v45; // r3
  int v46; // r1
  int v47; // t1
  int v48; // [sp+Ch] [bp-40h]
  int v49; // [sp+10h] [bp-3Ch]
  char *ptr; // [sp+14h] [bp-38h]
  int v51; // [sp+18h] [bp-34h]
  int v52; // [sp+1Ch] [bp-30h]
  int v53; // [sp+2Ch] [bp-20h]
  int v54; // [sp+34h] [bp-18h] BYREF
  unsigned int v55; // [sp+38h] [bp-14h] BYREF
  int v56; // [sp+3Ch] [bp-10h]
  __int64 v57; // [sp+40h] [bp-Ch]

  v2 = *(char **)(a1 + 56);
  v3 = *(unsigned __int8 **)(*(_DWORD *)(a1 + 84) + 16);
  v48 = *(_DWORD *)(a1 + 8);
  v4 = sub_2AB368(128);
  v5 = v4;
  if ( !v4 )
    return 0;
  *v4 = 0;
  if ( v2 >= (char *)v3 )
    goto LABEL_9;
  v49 = 0;
  ptr = (char *)v4;
  v53 = 32;
  while ( 1 )
  {
    v7 = sub_2ABC24(v48, v2, &v54, 0, (unsigned int)v3);
    v2 += v54;
    if ( !v7 )
      break;
    v8 = *(_DWORD **)(*(_DWORD *)(a1 + 28) + 4 * (v7 % 0x79));
    if ( !v8 )
    {
LABEL_95:
      v28 = v7;
      v5 = ptr;
      if ( dword_4712B8 != v7 )
      {
        sub_2A6A5C("Dwarf Error: Could not find abbrev number %u.", v7);
        dword_4712B8 = v28;
      }
      ((void (__fastcall *)(int))loc_2A6C48)(17);
LABEL_9:
      free(v5);
      return 0;
    }
    while ( v7 != *v8 )
    {
      v8 = (_DWORD *)v8[5];
      if ( !v8 )
        goto LABEL_95;
    }
    v9 = v8[1];
    v10 = v9 == 3;
    if ( v9 != 3 )
      v10 = v9 == 46;
    v11 = v10;
    if ( v9 == 29 )
      v11 |= 1u;
    if ( v11 )
    {
      v12 = sub_2AD09C(v48, 0x34u);
      if ( !v12 )
        goto LABEL_8;
      v34 = *(_DWORD *)(a1 + 100);
      v35 = v8[1];
      v36 = *(_DWORD *)(a1 + 68);
      v37 = *(_DWORD *)(a1 + 76) + 1;
      v12[6] = v35;
      *v12 = v36;
      *(_DWORD *)(a1 + 76) = v37;
      *(_DWORD *)(a1 + 68) = v12;
      if ( v34 )
      {
        sub_2A6BBC("./dwarf2.c", 3097);
        v35 = v12[6];
      }
      if ( v35 == 29 )
      {
        v44 = &ptr[4 * v49];
        v45 = v49 - 1;
        while ( v45 != -1 )
        {
          v47 = *((_DWORD *)v44 - 1);
          v44 -= 4;
          v46 = v47;
          --v45;
          if ( v47 )
          {
            v12[1] = v46;
            break;
          }
        }
      }
      v11 = 0;
      *(_DWORD *)&ptr[4 * v49] = v12;
    }
    else
    {
      if ( v9 == 52 )
      {
        v41 = sub_2AD09C(v48, 0x20u);
        v11 = (int)v41;
        if ( !v41 )
        {
LABEL_8:
          v5 = ptr;
          goto LABEL_9;
        }
        v42 = v8[1];
        v41[28] |= 1u;
        v43 = *(_DWORD *)(a1 + 80);
        *((_DWORD *)v41 + 3) = v42;
        *(_DWORD *)v41 = v43;
        *(_DWORD *)(a1 + 80) = v41;
      }
      v12 = 0;
      *(_DWORD *)&ptr[4 * v49] = 0;
    }
    if ( v8[3] )
    {
      v13 = 0;
      v51 = 0;
      v14 = 0;
      v52 = 0;
      while ( 1 )
      {
        v15 = v8[4];
        v16 = *(_DWORD *)(v15 + 12 * v14);
        v17 = *(_DWORD *)(v15 + 12 * v14 + 4);
        v18 = *(_DWORD *)(v15 + 12 * v14 + 8);
        v55 = v16;
        v19 = sub_2F68C8(&v55, v17, v18, a1, v2, v3);
        v2 = (char *)v19;
        if ( !v19 )
          goto LABEL_8;
        if ( !v12 )
        {
          if ( v11 )
          {
            if ( v55 == 58 )
            {
              *(_DWORD *)(v11 + 4) = sub_2F7694(*(_DWORD *)(a1 + 64), v57);
            }
            else if ( v55 > 0x3A )
            {
              if ( v55 == 59 )
              {
                *(_DWORD *)(v11 + 8) = v57;
              }
              else if ( v55 == 63 && v57 )
              {
                *(_BYTE *)(v11 + 28) &= ~1u;
              }
            }
            else if ( v55 == 2 )
            {
              switch ( v56 )
              {
                case 3:
                case 4:
                case 9:
                case 10:
                case 24:
                  v29 = (_DWORD *)v57;
                  v30 = *(_BYTE **)(v57 + 4);
                  if ( v30 )
                  {
                    if ( *v30 == 3 )
                    {
                      *(_BYTE *)(v11 + 28) &= ~1u;
                      v31 = *(unsigned __int8 *)(a1 + 92);
                      if ( *v29 == v31 + 1 )
                      {
                        v32 = 8 * v31;
                        switch ( v32 )
                        {
                          case 8:
                            v33 = (unsigned __int8)v30[1];
                            break;
                          case 16:
                            v33 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) + 52))(v30 + 1);
                            break;
                          case 32:
                            v33 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) + 40))(v30 + 1);
                            break;
                          case 64:
                            v33 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) + 28))(v30 + 1);
                            break;
                          default:
                            sub_2A6BF0((int)"./dwarf2.c", 3251, (int)"scan_unit_for_symbols");
                        }
                        *(_DWORD *)(v11 + 20) = v33;
                      }
                    }
                  }
                  break;
                default:
                  goto LABEL_31;
              }
            }
            else if ( v55 == 3 )
            {
              v21 = v56 == 14;
              if ( v56 != 14 )
                v21 = v56 == 8;
              if ( v21 )
                goto LABEL_63;
              v22 = v56 == 7969;
              if ( v56 != 7969 )
                v22 = v56 == 31;
              if ( v22 )
LABEL_63:
                *(_DWORD *)(v11 + 16) = v57;
            }
          }
          goto LABEL_31;
        }
        if ( v55 == 59 )
        {
          v12[5] = v57;
          goto LABEL_31;
        }
        if ( v55 <= 0x3B )
          break;
        if ( v55 == 88 )
        {
          v12[2] = sub_2F7694(*(_DWORD *)(a1 + 64), v57);
          goto LABEL_31;
        }
        if ( v55 <= 0x58 )
        {
          if ( v55 != 71 )
          {
            if ( v55 == 85 && !sub_2F7568(a1, v12 + 9, v57) )
              goto LABEL_8;
            goto LABEL_31;
          }
LABEL_93:
          if ( !sub_2F8774(a1, v19, (int)&v55, v12 + 8, v12 + 7) )
            goto LABEL_8;
          goto LABEL_31;
        }
        if ( v55 == 110 || v55 == 8199 )
        {
          v25 = v56 == 14;
          if ( v56 != 14 )
            v25 = v56 == 8;
          if ( v25 )
            goto LABEL_91;
          v26 = v56 == 7969;
          if ( v56 != 7969 )
            v26 = v56 == 31;
          if ( v26 )
          {
LABEL_91:
            HIDWORD(v27) = v57;
            LODWORD(v27) = 1;
            *(_QWORD *)(v12 + 7) = v27;
          }
          goto LABEL_31;
        }
        if ( v55 == 89 )
        {
          ++v14;
          v12[4] = v57;
          if ( v8[3] <= v14 )
          {
LABEL_42:
            if ( v13 )
              v51 += v52;
            v20 = v12 == 0;
            if ( v12 )
              v20 = v51 == 0;
            if ( v20 || sub_2F667C((int *)(a1 + 8), v12 + 9, v52, v51) )
              goto LABEL_48;
            goto LABEL_8;
          }
        }
        else
        {
LABEL_31:
          if ( v8[3] <= ++v14 )
            goto LABEL_42;
        }
      }
      if ( v55 == 18 )
      {
        v51 = v57;
        v13 = v56 != 1;
      }
      else if ( v55 > 0x12 )
      {
        if ( v55 == 49 )
          goto LABEL_93;
        if ( v55 == 58 )
          v12[3] = sub_2F7694(*(_DWORD *)(a1 + 64), v57);
      }
      else if ( v55 == 3 )
      {
        if ( !v12[8] )
        {
          v23 = v56 == 14;
          if ( v56 != 14 )
            v23 = v56 == 8;
          if ( v23 )
            goto LABEL_138;
          v38 = v56 == 7969;
          if ( v56 != 7969 )
            v38 = v56 == 31;
          if ( v38 )
          {
LABEL_138:
            v24 = *(_DWORD *)(a1 + 32) - 1;
            v12[8] = v57;
            switch ( v24 )
            {
              case 0:
              case 1:
              case 2:
              case 4:
              case 5:
              case 6:
              case 8:
              case 11:
              case 12:
              case 14:
              case 17:
              case 28:
                v12[7] = 1;
                break;
              default:
                goto LABEL_31;
            }
          }
        }
      }
      else if ( v55 == 17 )
      {
        v52 = v57;
      }
      goto LABEL_31;
    }
LABEL_48:
    if ( v8[2] )
    {
      if ( ++v49 >= v53 )
      {
        v39 = 8 * v53;
        v53 *= 2;
        v40 = (char *)sub_2AB3FC(ptr, v39);
        if ( !v40 )
          goto LABEL_8;
        ptr = v40;
      }
      *(_DWORD *)&ptr[4 * v49] = 0;
    }
LABEL_7:
    if ( v3 <= (unsigned __int8 *)v2 )
      goto LABEL_8;
  }
  v10 = v49-- == 0;
  if ( !v10 )
    goto LABEL_7;
  free(ptr);
  return 1;
}
