int __fastcall sub_2A3B8(int result, int a2)
{
  int v3; // r7
  int v4; // r1
  const char *v5; // r3
  unsigned int v6; // r7
  int v7; // r1
  const char *v8; // r3
  unsigned int v9; // r3
  unsigned int v10; // r7
  int v11; // r1
  const char *v12; // r3
  unsigned int v13; // r3
  unsigned int v14; // r7
  int v15; // r1
  const char *v16; // r3
  unsigned int v17; // r3
  unsigned int v18; // r7
  int v19; // r1
  const char *v20; // r3
  unsigned int v21; // r3
  int v22; // r7
  int v23; // r1
  const char *v24; // r3
  unsigned int v25; // r3
  unsigned int v26; // r6
  unsigned int v27; // r3
  char *v28; // r3
  unsigned int v29; // r6
  unsigned int v30; // r3
  char *v31; // r3
  unsigned int v32; // r6
  unsigned int v33; // r3
  char *v34; // r3
  int v35; // r7
  int v36; // r1
  const char *v37; // r3
  unsigned int v38; // r3
  int v39; // r7
  int v40; // r1
  const char *v41; // r3
  unsigned int v42; // r3
  unsigned int v43; // r6
  unsigned int v44; // r3
  char *v45; // r3
  int v46; // r7
  int v47; // r1
  const char *v48; // r3
  unsigned int v49; // r3
  unsigned int v50; // r6
  unsigned int v51; // r3
  char *v52; // r3
  unsigned int v53; // r6
  unsigned int v54; // r3
  char *v55; // r3
  unsigned int v56; // r7
  const char *v57; // r3
  unsigned int v58; // r3
  unsigned int v59; // r6
  const char *v60; // r3
  unsigned int v61; // r6
  const char *v62; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  switch ( result )
  {
    case 40:
      return sub_280E4(a2);
    case 44:
      v6 = *(_DWORD *)a2;
      v7 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v8 = "NOT FOUND";
      if ( v7 )
        v8 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0x2C] = 0x%08X, UART Relay, %s\n", v6, v8);
      result = sub_47EC8(3, s, 0);
      v9 = dword_9E31C;
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:16] GAP_CNT", HIWORD(v6));
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:2]  Reserved", (unsigned __int16)v6 >> 2);
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[1]     RO_RELAY_EN", (v6 >> 1) & 1);
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[0]     CO_RELAY_EN", v6 & 1);
        result = sub_47EC8(3, s, 0);
        v9 = dword_9E31C;
      }
      if ( v9 <= 3 )
        return result;
      goto LABEL_225;
    case 48:
      v10 = *(_DWORD *)a2;
      v11 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v12 = "NOT FOUND";
      if ( v11 )
        v12 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0x30] = 0x%08X, Core Number, %s\n", v10, v12);
      result = sub_47EC8(3, s, 0);
      v13 = dword_9E31C;
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:9] Reserved", v10 >> 9);
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[8:0]  CORE_NUM", v10 & 0x1FF);
        result = sub_47EC8(3, s, 0);
        v13 = dword_9E31C;
      }
      if ( v13 <= 3 )
        return result;
      goto LABEL_225;
    case 56:
      v3 = *(_DWORD *)a2;
      v4 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v5 = "NOT FOUND";
      if ( v4 )
        v5 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0x38] = 0x%08X, Ticket Mask2, %s\n", v3, v5);
      result = sub_47EC8(3, s, 0);
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:0]  TM", v3);
        result = sub_47EC8(3, s, 0);
      }
      if ( (unsigned int)dword_9E31C > 3 )
        goto LABEL_225;
      return result;
    case 68:
      v14 = *(_DWORD *)a2;
      v15 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v16 = "NOT FOUND";
      if ( v15 )
        v16 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0x44] = 0x%08X, External Temperature Sensor Read, %s\n", v14, v16);
      result = sub_47EC8(3, s, 0);
      v17 = dword_9E31C;
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:24]  LOCAL_TEMP_ADDR", HIBYTE(v14));
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23:16]  LOCAL_TEMP_DATA", BYTE2(v14));
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:8]   EXTERNAL_TEMP_ADDR", BYTE1(v14));
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:0]    EXTERNAL_TEMP_DATA", (unsigned __int8)v14);
        result = sub_47EC8(3, s, 0);
        v17 = dword_9E31C;
      }
      if ( v17 <= 3 )
        return result;
      goto LABEL_225;
    case 72:
      v18 = *(_DWORD *)a2;
      v19 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v20 = "NOT FOUND";
      if ( v19 )
        v20 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0x48] = 0x%08X, Error Flag, %s\n", v18, v20);
      result = sub_47EC8(3, s, 0);
      v21 = dword_9E31C;
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:24]  CORE_RESP_ERR", HIBYTE(v18));
        result = sub_47EC8(3, s, 0);
        v21 = dword_9E31C;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23:17]  Reserved", (v18 >> 17) & 0x7F);
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[16]     PKT_END_ERR", HIWORD(v18) & 1);
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:8]   WORK_ERR_CNT", BYTE1(v18));
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:0]    CMD_ERR_CNT", (unsigned __int8)v18);
          result = sub_47EC8(3, s, 0);
          v21 = dword_9E31C;
        }
      }
      if ( v21 <= 3 )
        return result;
      goto LABEL_225;
    case 76:
      v22 = *(_DWORD *)a2;
      v23 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v24 = "NOT FOUND";
      if ( v23 )
        v24 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0x4C] = 0x%08X, Nonce Error Counter, %s\n", v22, v24);
      result = sub_47EC8(3, s, 0);
      v25 = dword_9E31C;
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:0]  ERR_CNT", v22);
        result = sub_47EC8(3, s, 0);
        v25 = dword_9E31C;
      }
      if ( v25 > 3 )
        goto LABEL_225;
      return result;
    case 80:
      v29 = *(_DWORD *)a2;
      v30 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
      {
        if ( *(_BYTE *)(a2 + 4) )
          return result;
      }
      else
      {
        v31 = "FOUND";
        if ( !*(_BYTE *)(a2 + 4) )
          v31 = "NOT FOUND";
        snprintf(s, 0x800u, ">> ASIC_REG[0x50] = 0x%08X, Nonce Overflow Counter, %s\n", v29, v31);
        result = sub_47EC8(3, s, 0);
        v30 = dword_9E31C;
        if ( *(_BYTE *)(a2 + 4) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:8]  Reserved", v29 >> 8);
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:0]   OVF_CNT", (unsigned __int8)v29);
          result = sub_47EC8(3, s, 0);
          v30 = dword_9E31C;
        }
      }
      if ( v30 <= 3 )
        return result;
      goto LABEL_225;
    case 84:
      v26 = *(_DWORD *)a2;
      v27 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
      {
        if ( *(_BYTE *)(a2 + 4) )
          return result;
      }
      else
      {
        v28 = "FOUND";
        if ( !*(_BYTE *)(a2 + 4) )
          v28 = "NOT FOUND";
        snprintf(s, 0x800u, ">> ASIC_REG[0x54] = 0x%08X, Analog Mux Control, %s\n", v26, v28);
        result = sub_47EC8(3, s, 0);
        v27 = dword_9E31C;
        if ( *(_BYTE *)(a2 + 4) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:3]  Reserved", v26 >> 3);
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[2:0]   DIODE_VDD_MUX_SEL", v26 & 7);
          result = sub_47EC8(3, s, 0);
          v27 = dword_9E31C;
        }
      }
      if ( v27 <= 3 )
        return result;
      goto LABEL_225;
    case 88:
      return sub_28424(a2);
    case 92:
      v32 = *(_DWORD *)a2;
      v33 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
      {
        if ( *(_BYTE *)(a2 + 4) )
          return result;
      }
      else
      {
        v34 = "FOUND";
        if ( !*(_BYTE *)(a2 + 4) )
          v34 = "NOT FOUND";
        snprintf(s, 0x800u, ">> ASIC_REG[0x5C] = 0x%08X, Time Out, %s\n", v32, v34);
        result = sub_47EC8(3, s, 0);
        v33 = dword_9E31C;
        if ( *(_BYTE *)(a2 + 4) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:16]  Reserved", HIWORD(v32));
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:0]   TMOUT", (unsigned __int16)v32);
          result = sub_47EC8(3, s, 0);
          v33 = dword_9E31C;
        }
      }
      if ( v33 <= 3 )
        return result;
      goto LABEL_225;
    case 96:
      return sub_28864(a2);
    case 100:
      return sub_28BE4(a2);
    case 104:
      return sub_28F24(a2);
    case 108:
      return sub_29264(a2);
    case 144:
      return sub_29724(a2);
    case 148:
      v35 = *(_DWORD *)a2;
      v36 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v37 = "NOT FOUND";
      if ( v36 )
        v37 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0x94] = 0x%08X, Sweeping Work DAta, %s\n", v35, v37);
      result = sub_47EC8(3, s, 0);
      v38 = dword_9E31C;
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:0]  WORK_DATA", v35);
        result = sub_47EC8(3, s, 0);
        v38 = dword_9E31C;
      }
      if ( v38 > 3 )
        goto LABEL_225;
      return result;
    case 152:
      v39 = *(_DWORD *)a2;
      v40 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v41 = "NOT FOUND";
      if ( v40 )
        v41 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0x98] = 0x%08X, Returned Group Pattern Status, %s\n", v39, v41);
      result = sub_47EC8(3, s, 0);
      v42 = dword_9E31C;
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:0]  RSTS", v39);
        result = sub_47EC8(3, s, 0);
        v42 = dword_9E31C;
      }
      if ( v42 > 3 )
        goto LABEL_225;
      return result;
    case 156:
      v43 = *(_DWORD *)a2;
      v44 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
      {
        if ( *(_BYTE *)(a2 + 4) )
          return result;
      }
      else
      {
        v45 = "FOUND";
        if ( !*(_BYTE *)(a2 + 4) )
          v45 = "NOT FOUND";
        snprintf(s, 0x800u, ">> ASIC_REG[0x9C] = 0x%08X, Nonce Returned Timeout, %s\n", v43, v45);
        result = sub_47EC8(3, s, 0);
        v44 = dword_9E31C;
        if ( *(_BYTE *)(a2 + 4) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:16]  Reserved", HIWORD(v43));
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:0]   SWEEP_TIMEOUT", (unsigned __int16)v43);
          result = sub_47EC8(3, s, 0);
          v44 = dword_9E31C;
        }
      }
      if ( v44 <= 3 )
        return result;
      goto LABEL_225;
    case 160:
      v46 = *(_DWORD *)a2;
      v47 = *(unsigned __int8 *)(a2 + 4);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      v48 = "NOT FOUND";
      if ( v47 )
        v48 = "FOUND";
      snprintf(s, 0x800u, ">> ASIC_REG[0xA0] = 0x%08X, Returned Single Pattern Status, %s\n", v46, v48);
      result = sub_47EC8(3, s, 0);
      v49 = dword_9E31C;
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:0]  RSTS", v46);
        result = sub_47EC8(3, s, 0);
        v49 = dword_9E31C;
      }
      if ( v49 > 3 )
        goto LABEL_225;
      return result;
    case 164:
      v50 = *(_DWORD *)a2;
      v51 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
      {
        if ( *(_BYTE *)(a2 + 4) )
          return result;
      }
      else
      {
        v52 = "FOUND";
        if ( !*(_BYTE *)(a2 + 4) )
          v52 = "NOT FOUND";
        snprintf(s, 0x800u, ">> ASIC_REG[0xA4] = 0x%08X, Midstate Cal Registter, %s\n", v50, v52);
        result = sub_47EC8(3, s, 0);
        v51 = dword_9E31C;
        if ( *(_BYTE *)(a2 + 4) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31]     MID_AUTO_GEN", v50 >> 31);
          result = sub_47EC8(3, s, 0);
          v51 = dword_9E31C;
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[30]     VER_FIX", (v50 >> 30) & 1);
            result = sub_47EC8(3, s, 0);
            if ( (unsigned int)dword_9E31C <= 3 )
              return result;
            snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[29:28]  MIDSX_GEN", (v50 >> 28) & 3);
            result = sub_47EC8(3, s, 0);
            if ( (unsigned int)dword_9E31C <= 3 )
              return result;
            snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27:16]  Reserved", HIWORD(v50) & 0xFFF);
            result = sub_47EC8(3, s, 0);
            if ( (unsigned int)dword_9E31C <= 3 )
              return result;
            snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:0]   VER_MASK", (unsigned __int16)v50);
            result = sub_47EC8(3, s, 0);
            v51 = dword_9E31C;
          }
        }
      }
      if ( v51 <= 3 )
        return result;
      goto LABEL_225;
    case 172:
      v53 = *(_DWORD *)a2;
      v54 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
      {
        if ( *(_BYTE *)(a2 + 4) )
          return result;
      }
      else
      {
        v55 = "FOUND";
        if ( !*(_BYTE *)(a2 + 4) )
          v55 = "NOT FOUND";
        snprintf(s, 0x800u, ">> ASIC_REG[0xAC] = 0x%08X, Clock Overlap Counter, %s\n", v53, v55);
        result = sub_47EC8(3, s, 0);
        v54 = dword_9E31C;
        if ( *(_BYTE *)(a2 + 4) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:24]  DOMAIN3_CNT", HIBYTE(v53));
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[23:16]  DOMAIN2_CNT", BYTE2(v53));
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:8]   DOMAIN1_CNT", BYTE1(v53));
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[7:0]    DOMAIN0_CNT", (unsigned __int8)v53);
          result = sub_47EC8(3, s, 0);
          v54 = dword_9E31C;
        }
      }
      if ( v54 <= 3 )
        return result;
      goto LABEL_225;
    case 176:
      return sub_29C24(a2);
    case 180:
      v56 = *(_DWORD *)a2;
      if ( (unsigned int)dword_9E31C <= 3 )
      {
        if ( !*(_BYTE *)(a2 + 4) )
          return result;
      }
      else
      {
        v57 = "NOT FOUND";
        if ( *(_BYTE *)(a2 + 4) )
          v57 = "FOUND";
        snprintf(s, 0x800u, ">> ASIC_REG[0xB4] = 0x%08X, Adc Dataout0, %s\n", v56, v57);
        result = sub_47EC8(3, s, 0);
        v58 = dword_9E31C;
        if ( !*(_BYTE *)(a2 + 4) )
          goto LABEL_198;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:28]  Reserved", v56 >> 28);
          result = sub_47EC8(3, s, 0);
          if ( (unsigned int)dword_9E31C <= 3 )
            return result;
          snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27:16]  C1_DOUT", HIWORD(v56) & 0xFFF);
          result = sub_47EC8(3, s, 0);
        }
      }
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:12]  Reserved", (unsigned __int16)v56 >> 12);
      result = sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[11:0]   C0_DOUT", v56 & 0xFFF);
      result = sub_47EC8(3, s, 0);
      v58 = dword_9E31C;
LABEL_198:
      if ( v58 <= 3 )
        return result;
      goto LABEL_225;
    case 184:
      v59 = *(_DWORD *)a2;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        v60 = "NOT FOUND";
        if ( *(_BYTE *)(a2 + 4) )
          v60 = "FOUND";
        snprintf(s, 0x800u, ">> ASIC_REG[0xB8] = 0x%08X, Adc Dataout1, %s\n", v59, v60);
        result = sub_47EC8(3, s, 0);
      }
      if ( *(_BYTE *)(a2 + 4) )
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:28]  Reserved", v59 >> 28);
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[27:16]  C3_DOUT", HIWORD(v59) & 0xFFF);
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:12]  Reserved", (unsigned __int16)v59 >> 12);
        result = sub_47EC8(3, s, 0);
        if ( (unsigned int)dword_9E31C <= 3 )
          return result;
        snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[11:0]   C2_DOUT", v59 & 0xFFF);
        result = sub_47EC8(3, s, 0);
      }
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
      goto LABEL_225;
  }
  if ( result != 224 )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "Unknown reg: %d\n", result);
      return sub_47AB4(3, s, 0);
    }
    return result;
  }
  v61 = *(_DWORD *)a2;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    v62 = "NOT FOUND";
    if ( *(_BYTE *)(a2 + 4) )
      v62 = "FOUND";
    snprintf(s, 0x800u, ">> ASIC_REG[0xE0] = 0x%08X, Returned Nonce Counter, %s\n", v61, v62);
    result = sub_47EC8(3, s, 0);
  }
  if ( !*(_BYTE *)(a2 + 4) )
    goto LABEL_224;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[31:16]  RETURN_NONCE_CNT_MATCH", HIWORD(v61));
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s = 0x%X\n", "BIT[15:0]   RETURN_NONCE_CNT", (unsigned __int16)v61);
      result = sub_47EC8(3, s, 0);
LABEL_224:
      if ( (unsigned int)dword_9E31C <= 3 )
        return result;
LABEL_225:
      strcpy(s, "\n");
      return sub_47EC8(3, s, 0);
    }
  }
  return result;
}
