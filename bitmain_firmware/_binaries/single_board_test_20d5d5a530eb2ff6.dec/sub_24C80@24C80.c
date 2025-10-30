int __fastcall sub_24C80(int a1, int a2, int a3, const char *a4)
{
  unsigned int v6; // r7
  int v7; // r6
  int v8; // r8
  int v9; // r6
  int v10; // r11
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r11
  int v16; // r11
  int v17; // r0
  char *v18; // r11
  int v19; // r3
  unsigned int v20; // r3
  unsigned int v21; // r1
  int v22; // r0
  int v23; // r11
  unsigned int v24; // r2
  int v25; // r0
  unsigned int v26; // r3
  int v27; // r11
  int v28; // r0
  int v29; // r11
  int v30; // r0
  char *v31; // r2
  int v32; // r1
  unsigned int v33; // r2
  unsigned __int8 *v35; // r1
  int v36; // r3
  int v37; // r3
  int v38; // r6
  int v39; // r9
  int v40; // r12
  int v41; // [sp+0h] [bp-54h]
  unsigned int v43; // [sp+10h] [bp-44h]
  int v44; // [sp+14h] [bp-40h]
  int v45; // [sp+18h] [bp-3Ch]
  int v46; // [sp+1Ch] [bp-38h]
  char v47[52]; // [sp+20h] [bp-34h] BYREF

  v41 = a2;
  sub_1F610();
  switch ( a2 )
  {
    case 0:
      dword_5FE780 = 0;
      v37 = (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894;
      v38 = v37 + 264192;
      memset((char *)&unk_2337B0 + v37 + 264240, 0, 0x100u);
      memset((char *)&unk_2337B0 + v38 + 304, 1, 0x100u);
      v44 = sub_24B68(a4);
      sub_1E938(v47, 0x30u);
      printf("%s ", v47);
      printf("%s : asic_name: 0x%04x\n", "get_register_value", v44);
      snprintf(byte_6083C4, 0x100u, "asic_name: 0x%04x", v44);
      sub_3CC5C(byte_6083C4, v47);
      sub_77710((unsigned __int8)dword_21B3A4);
      goto LABEL_3;
    case 1:
      LOWORD(v35) = -19548;
      v36 = 8;
      goto LABEL_52;
    case 2:
      v41 = 10;
      sub_780DC((unsigned __int8)dword_21B3A4);
      goto LABEL_50;
    case 3:
LABEL_50:
      sub_776E4((unsigned __int8)dword_21B3A4, 1, 0, 20);
      v44 = 0;
      goto LABEL_3;
    case 4:
      dword_6084C4 = 0;
      v44 = 0;
      sub_782F0((unsigned __int8)dword_21B3A4);
      goto LABEL_3;
    case 5:
      LOWORD(v35) = -19548;
      v36 = 224;
      goto LABEL_52;
    case 6:
      sub_78550((unsigned __int8)dword_21B3A4, 0);
      v44 = 0;
      v41 = 10;
      goto LABEL_3;
    case 7:
      LOWORD(v35) = (unsigned __int16)&dword_21B3A4;
      v36 = 76;
      goto LABEL_52;
    case 8:
    case 9:
      sub_776E4((unsigned __int8)dword_21B3A4, 0, dword_6084C8 * a1, 28);
      v44 = 0;
      goto LABEL_3;
    case 11:
      LOWORD(v35) = -19548;
      v36 = 24;
      goto LABEL_52;
    case 12:
      LOWORD(v35) = -19548;
      v36 = 148;
      goto LABEL_52;
    case 13:
      LOWORD(v35) = -19548;
      v36 = 140;
      goto LABEL_52;
    case 14:
      LOWORD(v35) = -19548;
      v36 = 144;
LABEL_52:
      HIWORD(v35) = (unsigned int)&dword_21B3A4 >> 16;
      sub_776E4(*v35, 1, 0, v36);
      v44 = 0;
LABEL_3:
      v6 = 0;
      v7 = 0;
      v43 = 0;
      break;
    default:
      sub_1E938(v47, 0x30u);
      printf("%s ", v47);
      printf("%s : Don't support this register: 0x%02x\n", "get_register_value", v41);
      snprintf(byte_6084CC, 0x100u, "Don't support this register: 0x%02x", v41);
      sub_3CC5C(byte_6084CC, v47);
      return -1;
  }
  do
  {
    while ( 1 )
    {
      usleep(0x7530u);
      pthread_mutex_lock(&stru_5FE898);
      v8 = *(_DWORD *)(dword_5FE790 + 8);
      sub_1E938(v47, 0x30u);
      printf("%s ", v47);
      printf("%s : reg_value_num: %d\n", "get_register_value", v8);
      snprintf(byte_6085CC, 0x100u, "reg_value_num: %d", v8);
      sub_3CC5C(byte_6085CC, v47);
      pthread_mutex_unlock(&stru_5FE898);
      if ( !v8 )
        break;
      v9 = 0;
      while ( 2 )
      {
        pthread_mutex_lock(&stru_5FE898);
        v6 = *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 16);
        pthread_mutex_unlock(&stru_5FE898);
        switch ( v41 )
        {
          case 0:
            if ( v44 == HIWORD(v6) )
            {
              v39 = (unsigned __int8)byte_5FE894;
              ++dword_5FE780;
              byte_2333A8[(_DWORD)&loc_40A50 * v39 + 265272 + sub_189090((unsigned __int8)v6, dword_6084C8)] = 1;
              goto LABEL_8;
            }
            v33 = v43 + 1;
            v43 = v33;
            if ( v33 <= *(_DWORD *)(dword_223680 + 64) )
              goto LABEL_8;
            dword_5FE780 += v33;
            sub_1E938(v47, 0x30u);
            printf("%s ", v47);
            printf("%s : too much error asic address register, fail\n", "get_register_value");
            strcpy(byte_6086CC, "too much error asic address register, fail");
            sub_3CC5C(byte_6086CC, v47);
            return dword_5FE780;
          case 1:
            sub_1E938(v47, 0x30u);
            printf("%s ", v47);
            printf("%s : PLL 0 register: 0x%08x\n", "get_register_value", v6);
            snprintf(byte_6087CC, 0x100u, "PLL 0 register: 0x%08x", v6);
            sub_3CC5C(byte_6087CC, v47);
            goto LABEL_8;
          case 3:
            sub_1E938(v47, 0x30u);
            printf("%s ", v47);
            printf("%s : TICKET_MASK register: 0x%08x\n", "get_register_value", v6);
            snprintf(byte_6088CC, 0x100u, "TICKET_MASK register: 0x%08x", v6);
            sub_3CC5C(byte_6088CC, v47);
            goto LABEL_8;
          case 4:
            if ( (v6 & 0x88) != 0 )
              ++dword_6084C4;
            goto LABEL_8;
          case 5:
            v46 = (unsigned __int8)byte_5FE894;
            v30 = sub_189090(*(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20), dword_6084C8);
            v31 = &byte_2333A8[(_DWORD)&loc_40A50 * v46];
            v32 = *((_DWORD *)v31 + 268);
            *(_WORD *)&byte_2333A8[2 * v30 + 263224 + 2 * (_DWORD)&loc_20528 * v46] = HIWORD(v6);
            *((_DWORD *)v31 + 268) = v32 + HIWORD(v6);
            goto LABEL_8;
          case 7:
            v29 = (unsigned __int8)byte_5FE894;
            *(_WORD *)&byte_2333A8[264784 * v29
                                 + 264248
                                 + 2
                                 * sub_189090(
                                     *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20),
                                     dword_6084C8)] = v6;
            goto LABEL_8;
          case 8:
            LOBYTE(v26) = HIBYTE(v6) & 0x40;
            if ( (v6 & 0x40000000) != 0 || !(_BYTE)v6 )
              goto LABEL_8;
            v27 = (unsigned __int8)byte_5FE894;
            if ( !dword_22688C )
              goto LABEL_37;
            if ( a1 == (unsigned __int8)dword_226A90 )
            {
              v28 = HIBYTE(v6) & 0x40;
            }
            else
            {
              while ( 1 )
              {
                v26 = (unsigned __int8)(v26 + 1);
                v28 = v26;
                if ( dword_22688C <= v26 )
                  break;
                if ( a1 == *((unsigned __int8 *)&dword_226A90 + v26) )
                  goto LABEL_38;
              }
LABEL_37:
              v28 = sub_1EAE0(a1);
            }
LABEL_38:
            byte_2333A8[(_DWORD)&loc_40A50 * v27 + 265794 + v28] = v6 - 64;
            goto LABEL_8;
          case 9:
            LOBYTE(v20) = HIBYTE(v6) & 0x40;
            if ( (v6 & 0x40000000) != 0 || !(_BYTE)v6 )
              goto LABEL_8;
            v21 = dword_22688C;
            v45 = (unsigned __int8)byte_5FE894;
            if ( !dword_22688C )
              goto LABEL_23;
            if ( a1 == (unsigned __int8)dword_226A90 )
            {
              v40 = HIBYTE(v6) & 0x40;
LABEL_68:
              v23 = (unsigned __int8)byte_5FE894;
              byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265798 + v40] = v6 - 64;
            }
            else
            {
              while ( 1 )
              {
                v20 = (unsigned __int8)(v20 + 1);
                if ( v20 >= dword_22688C )
                  break;
                if ( a1 == *((unsigned __int8 *)&dword_226A90 + v20) )
                {
                  v40 = v20;
                  goto LABEL_68;
                }
              }
LABEL_23:
              v22 = sub_1EAE0(a1);
              v21 = dword_22688C;
              v23 = (unsigned __int8)byte_5FE894;
              byte_2333A8[(_DWORD)&loc_40A50 * v45 + 265798 + v22] = v6 - 64;
              if ( !v21 )
                goto LABEL_28;
            }
            if ( a1 != (unsigned __int8)dword_226A90 )
            {
              LOBYTE(v24) = 0;
              while ( 1 )
              {
                v24 = (unsigned __int8)(v24 + 1);
                v25 = v24;
                if ( v21 <= v24 )
                  break;
                if ( a1 == *((unsigned __int8 *)&dword_226A90 + v24) )
                  goto LABEL_29;
              }
LABEL_28:
              v25 = sub_1EAE0(a1);
              goto LABEL_29;
            }
            v25 = 0;
LABEL_29:
            byte_2333A8[(_DWORD)&loc_40A50 * v23 + 265788 + v25] = 1;
LABEL_8:
            ++v9;
            pthread_mutex_lock(&stru_5FE898);
            v11 = dword_5FE790;
            v12 = *(_DWORD *)(dword_5FE790 + 8);
            v13 = *(_DWORD *)(dword_5FE790 + 4) + 1;
            *(_DWORD *)(dword_5FE790 + 4) = v13;
            v14 = v12 - 1;
            if ( v13 == 511 )
              *(_DWORD *)(v11 + 4) = 0;
            *(_DWORD *)(v11 + 8) = v14;
            pthread_mutex_unlock(&stru_5FE898);
            if ( v8 != v9 )
              continue;
            v7 = 0;
            break;
          case 10:
            sub_1E938(v47, 0x30u);
            printf("%s ", v47);
            printf("%s : CORE_RESPONSE register: 0x%08x\n", "get_register_value", v6);
            snprintf(byte_6089CC, 0x100u, "CORE_RESPONSE register: 0x%08x", v6);
            sub_3CC5C(byte_6089CC, v47);
            goto LABEL_8;
          case 11:
            sub_1E938(v47, 0x30u);
            printf("%s ", v47);
            printf("%s : MISC_CONTROL register: 0x%08x\n", "get_register_value", v6);
            snprintf(byte_608ACC, 0x100u, "MISC_CONTROL register: 0x%08x", v6);
            sub_3CC5C(byte_608ACC, v47);
            goto LABEL_8;
          case 12:
            v16 = (unsigned __int8)byte_5FE894;
            v17 = sub_189090(*(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20), dword_6084C8)
                + (_DWORD)&loc_20528 * v16;
            v18 = &byte_2333A8[(_DWORD)&loc_40A50 * v16];
            v19 = *((_DWORD *)v18 + 268);
            *(_WORD *)&byte_2333A8[2 * v17 + 263224] = v6;
            *((_DWORD *)v18 + 268) = v19 + v6;
            goto LABEL_8;
          case 13:
            v15 = (unsigned __int8)byte_5FE894;
            *(_WORD *)&byte_2333A8[264784 * v15
                                 + 264760
                                 + 2
                                 * sub_189090(
                                     *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20),
                                     dword_6084C8)] = v6;
            goto LABEL_8;
          case 14:
            v10 = (unsigned __int8)byte_5FE894;
            *(_WORD *)&byte_2333A8[2
                                 * sub_189090(
                                     *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20),
                                     dword_6084C8)
                                 + 263736
                                 + 2 * (_DWORD)&loc_20528 * v10] = v6;
            printf("get ntick reg: %d\n", v6);
            goto LABEL_8;
          default:
            sub_1E938(v47, 0x30u);
            printf("%s ", v47);
            printf("%s : Don't support this register in check: 0x%02x\n", "get_register_value", v41);
            snprintf(byte_608BCC, 0x100u, "Don't support this register in check: 0x%02x", v41);
            sub_3CC5C(byte_608BCC, v47);
            return -1;
        }
        break;
      }
    }
    ++v7;
    usleep((__useconds_t)&loc_186A0);
    sub_1E938(v47, 0x30u);
    printf("%s ", v47);
    printf("%s : no asic register come back for %d time\n", "get_register_value", v7);
    snprintf(byte_608CCC, 0x100u, "no asic register come back for %d time", v7);
    sub_3CC5C(byte_608CCC, v47);
  }
  while ( v7 != 3 );
  return v6;
}
