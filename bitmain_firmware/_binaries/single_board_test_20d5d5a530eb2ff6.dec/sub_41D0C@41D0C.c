int __fastcall sub_41D0C(int a1, int a2)
{
  int v4; // r5
  int v5; // r3
  unsigned int v6; // r7
  int v7; // r8
  int v8; // r9
  int v9; // r5
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r3
  int result; // r0
  int v19; // r3
  int v20; // r3
  int v21; // r8
  int v22; // r7
  int v23; // r3
  int v24; // [sp+Ch] [bp-48h]
  unsigned int v25; // [sp+10h] [bp-44h]
  int v26; // [sp+14h] [bp-40h]
  unsigned int v27; // [sp+18h] [bp-3Ch]
  char v28[52]; // [sp+20h] [bp-34h] BYREF

  sub_41CC4();
  switch ( a2 )
  {
    case 0:
      sub_1E938(v28, 0x30u);
      v24 = 4966;
      printf("%s ", v28);
      printf("%s : asic_name: 0x%04x\n", "get_register_info", 4966);
      snprintf(byte_63D4D8, 0x100u, "asic_name: 0x%04x", 4966);
      sub_3CC5C((int)byte_63D4D8, v28);
      sub_77710(*(unsigned __int8 *)dword_705300);
      goto LABEL_3;
    case 1:
      v19 = 8;
      goto LABEL_26;
    case 2:
      a2 = 10;
      sub_780DC(*(unsigned __int8 *)dword_705300);
      goto LABEL_24;
    case 3:
LABEL_24:
      v24 = 0;
      sub_776E4(*(unsigned __int8 *)dword_705300, 1, 0, 20);
      goto LABEL_3;
    case 4:
      v24 = 0;
      sub_782F0(*(unsigned __int8 *)dword_705300);
      goto LABEL_3;
    case 5:
      v19 = 224;
      goto LABEL_26;
    case 6:
      v24 = 0;
      a2 = 10;
      sub_78550(*(unsigned __int8 *)dword_705300, 0);
      goto LABEL_3;
    case 7:
      v19 = 76;
      goto LABEL_26;
    case 8:
    case 9:
      v24 = 0;
      sub_776E4(*(unsigned __int8 *)dword_705300, 0, *(_DWORD *)(dword_705300 + 40) * a1, 28);
      goto LABEL_3;
    case 11:
      v19 = 24;
      goto LABEL_26;
    case 12:
      v19 = 148;
      goto LABEL_26;
    case 13:
      v19 = 140;
      goto LABEL_26;
    case 14:
      v19 = 144;
LABEL_26:
      v24 = 0;
      sub_776E4(*(unsigned __int8 *)dword_705300, 1, 0, v19);
LABEL_3:
      v26 = 0;
      v25 = 0;
      v4 = 0;
      v5 = a2;
      v6 = 0;
      v7 = v5;
      do
      {
        while ( 1 )
        {
          usleep(0x7530u);
          pthread_mutex_lock(&stru_5FE898);
          v8 = *(_DWORD *)(dword_5FE790 + 8);
          pthread_mutex_unlock(&stru_5FE898);
          if ( !v8 )
            break;
          v9 = 0;
          while ( 2 )
          {
            pthread_mutex_lock(&stru_5FE898);
            v6 = *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 16);
            pthread_mutex_unlock(&stru_5FE898);
            switch ( v7 )
            {
              case 0:
                v27 = HIWORD(v6);
                if ( HIWORD(v6) == v24 )
                {
                  ++v26;
                  *((_BYTE *)&unk_6E3468 + sub_189308((unsigned __int8)v6, *(_DWORD *)(dword_705300 + 40)) + 137780) = 1;
                  goto LABEL_9;
                }
                ++v25;
                sub_1E938(v28, 0x30u);
                printf("%s ", v28);
                printf("%s : chip address register is not 0x%04x, but is 0x%04x\n", "get_register_info", v24, v27);
                snprintf(byte_63D6D8, 0x100u, "chip address register is not 0x%04x, but is 0x%04x", v24, v27);
                sub_3CC5C((int)byte_63D6D8, v28);
                if ( v25 <= *(_DWORD *)(dword_705300 + 4) )
                  goto LABEL_9;
                sub_1E938(v28, 0x30u);
                printf("%s ", v28);
                printf("%s : too much error asic address register, fail\n", "get_register_info");
                strcpy(byte_63D7D8, "too much error asic address register, fail");
                sub_3CC5C((int)byte_63D7D8, v28);
                return -1;
              case 1:
                sub_1E938(v28, 0x30u);
                printf("%s ", v28);
                printf("%s : PLL 0 register: 0x%08x\n", "get_register_info", v6);
                snprintf(byte_63D8D8, 0x100u, "PLL 0 register: 0x%08x", v6);
                sub_3CC5C((int)byte_63D8D8, v28);
                goto LABEL_9;
              case 3:
                sub_1E938(v28, 0x30u);
                printf("%s ", v28);
                printf("%s : TICKET_MASK register: 0x%08x\n", "get_register_info", v6);
                snprintf(byte_63D9D8, 0x100u, "TICKET_MASK register: 0x%08x", v6);
                sub_3CC5C((int)byte_63D9D8, v28);
                goto LABEL_9;
              case 4:
                goto LABEL_9;
              case 5:
                v14 = sub_189090(
                        *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20),
                        *(_DWORD *)(dword_705300 + 40));
                v15 = dword_704F9C + HIWORD(v6);
                *((_WORD *)&unk_6E3468 + v14 + 68378) = HIWORD(v6);
                dword_704F9C = v15;
                goto LABEL_9;
              case 7:
                *((_WORD *)&unk_6E3468
                + sub_189090(
                    *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20),
                    *(_DWORD *)(dword_705300 + 40))
                + 68634) = v6;
                goto LABEL_9;
              case 10:
                sub_1E938(v28, 0x30u);
                printf("%s ", v28);
                printf("%s : CORE_RESPONSE register: 0x%08x\n", "get_register_info", v6);
                snprintf(byte_63DAD8, 0x100u, "CORE_RESPONSE register: 0x%08x", v6);
                sub_3CC5C((int)byte_63DAD8, v28);
                goto LABEL_9;
              case 11:
                sub_1E938(v28, 0x30u);
                printf("%s ", v28);
                printf("%s : MISC_CONTROL register: 0x%08x\n", "get_register_info", v6);
                snprintf(byte_63DBD8, 0x100u, "MISC_CONTROL register: 0x%08x", v6);
                sub_3CC5C((int)byte_63DBD8, v28);
                goto LABEL_9;
              case 12:
                v16 = sub_189090(
                        *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20),
                        *(_DWORD *)(dword_705300 + 40));
                v17 = dword_704F9C;
                *((_WORD *)&unk_6E3468 + v16 + 68378) = v6;
                dword_704F9C = v17 + v6;
                goto LABEL_9;
              case 13:
                *((_WORD *)&unk_6E3468
                + sub_189090(
                    *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20),
                    *(_DWORD *)(dword_705300 + 40))
                + 68762) = v6;
                goto LABEL_9;
              case 14:
                *((_WORD *)&unk_6E3468
                + sub_189090(
                    *(_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)(dword_5FE790 + 4) + 20),
                    *(_DWORD *)(dword_705300 + 40))
                + 68506) = v6;
LABEL_9:
                ++v9;
                pthread_mutex_lock(&stru_5FE898);
                v10 = dword_5FE790;
                v11 = *(_DWORD *)(dword_5FE790 + 8);
                v12 = *(_DWORD *)(dword_5FE790 + 4) + 1;
                *(_DWORD *)(dword_5FE790 + 4) = v12;
                v13 = v11 - 1;
                if ( v12 == 511 )
                  *(_DWORD *)(v10 + 4) = 0;
                *(_DWORD *)(v10 + 8) = v13;
                pthread_mutex_unlock(&stru_5FE898);
                if ( v8 != v9 )
                  continue;
                v4 = 0;
                break;
              default:
                sub_1E938(v28, 0x30u);
                printf("%s ", v28);
                printf("%s : Don't support this register in check: 0x%02x\n", "get_register_info", v7);
                snprintf(byte_63DCD8, 0x100u, "Don't support this register in check: 0x%02x", v7);
                sub_3CC5C((int)byte_63DCD8, v28);
                return -1;
            }
            break;
          }
        }
        ++v4;
        usleep((__useconds_t)&loc_186A0);
      }
      while ( v4 != 3 );
      v20 = v7;
      v21 = v6;
      v22 = v20;
      v23 = v26;
      if ( v22 )
        v23 = v21;
      result = v23;
      break;
    default:
      sub_1E938(v28, 0x30u);
      printf("%s ", v28);
      printf("%s : Don't support this register: 0x%02x\n", "get_register_info", a2);
      snprintf(byte_63D5D8, 0x100u, "Don't support this register: 0x%02x", a2);
      sub_3CC5C((int)byte_63D5D8, v28);
      result = -1;
      break;
  }
  return result;
}
