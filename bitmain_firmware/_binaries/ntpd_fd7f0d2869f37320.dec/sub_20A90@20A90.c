size_t __fastcall sub_20A90(int a1, int a2)
{
  size_t result; // r0
  int v4; // r0
  int digestbyname; // r0
  int v6; // r0
  const char *v7; // r5
  size_t v8; // r0
  int *v9; // r6
  int v10; // r5
  size_t v11; // r0
  int v12; // r5
  size_t v13; // r0
  int v14; // r1
  int v15; // r5
  size_t v16; // r0
  char *v17; // r5
  char *v18; // r7
  char *v19; // r6
  __int16 v20; // r3
  const char *v21; // r11
  size_t v22; // r2
  char *v23; // r0
  int v24; // r3
  unsigned int v25; // r1
  int v26; // r3
  unsigned int v27; // r1
  int v28; // r2
  _DWORD v29[2]; // [sp+0h] [bp-1E4h] BYREF
  char v30[468]; // [sp+8h] [bp-1DCh] BYREF
  _DWORD v31[2]; // [sp+1DCh] [bp-8h] BYREF

  result = a1 - 1;
  switch ( result )
  {
    case 0u:
      result = (size_t)sub_1FDB0("config", ((*(_DWORD *)(a2 + 68) ^ 2u) >> 1) & 1);
      break;
    case 1u:
      result = (size_t)sub_1FDB0("authenable", *(_DWORD *)(a2 + 124) == 0);
      break;
    case 2u:
      result = (size_t)sub_1FDB0("authentic", (*(_DWORD *)(a2 + 68) >> 2) & 1);
      break;
    case 3u:
      result = (size_t)sub_1F3F0("srcadr", 0, a2 + 16);
      break;
    case 4u:
      result = (size_t)sub_1FDB0(
                         "srcport",
                         (unsigned __int16)(HIBYTE(*(_WORD *)(a2 + 18)) | (*(_WORD *)(a2 + 18) << 8)));
      break;
    case 5u:
      v28 = *(_DWORD *)(a2 + 56);
      if ( v28 )
        v28 += 24;
      result = (size_t)sub_1F3F0("dstadr", 0, v28);
      break;
    case 6u:
      v26 = *(_DWORD *)(a2 + 56);
      if ( v26 )
        v27 = *(unsigned __int16 *)(v26 + 26);
      else
        v27 = 0;
      if ( v26 )
        v27 = (unsigned __int16)((v27 >> 8) | ((_WORD)v27 << 8));
      result = (size_t)sub_1FDB0("dstport", v27);
      break;
    case 7u:
      result = (size_t)sub_1FDB0("leap", *(unsigned __int8 *)(a2 + 91));
      break;
    case 8u:
      result = (size_t)sub_1FDB0("hmode", *(unsigned __int8 *)(a2 + 63));
      break;
    case 9u:
      result = (size_t)sub_1FDB0("stratum", *(unsigned __int8 *)(a2 + 93));
      break;
    case 0xAu:
      result = (size_t)sub_1FDB0("ppoll", *(unsigned __int8 *)(a2 + 94));
      break;
    case 0xBu:
      result = (size_t)sub_1FDB0("hpoll", *(unsigned __int8 *)(a2 + 64));
      break;
    case 0xCu:
      result = (size_t)sub_1FD0C("precision", *(char *)(a2 + 95));
      break;
    case 0xDu:
      result = (size_t)sub_2034C("rootdelay", 1, 3);
      break;
    case 0xEu:
      result = (size_t)sub_2034C("rootdisp", 1, 3);
      break;
    case 0xFu:
      if ( (*(_DWORD *)(a2 + 68) & 8) != 0 || (unsigned int)*(unsigned __int8 *)(a2 + 93) - 2 > 0xD )
        result = (size_t)sub_1F474("refid", *(_DWORD *)(a2 + 112));
      else
        result = (size_t)sub_1F3F0("refid", *(_DWORD *)(a2 + 112), 0);
      break;
    case 0x10u:
      result = (size_t)sub_1FF38("reftime", (_DWORD *)(a2 + 116));
      break;
    case 0x11u:
      result = (size_t)sub_1FF38("org", (_DWORD *)(a2 + 584));
      break;
    case 0x12u:
      result = (size_t)sub_1FF38("rec", (_DWORD *)(a2 + 576));
      break;
    case 0x13u:
      if ( *(double *)(a2 + 640) != 0.0 )
        result = (size_t)sub_2034C("xleave", 1, 3);
      break;
    case 0x14u:
      result = (size_t)sub_1FC68("reach", *(unsigned __int8 *)(a2 + 298));
      break;
    case 0x15u:
      result = (size_t)sub_1FDB0("unreach", *(_DWORD *)(a2 + 708));
      break;
    case 0x16u:
      result = (size_t)sub_1FDB0("timer", *(_DWORD *)(a2 + 720) - current_time);
      break;
    case 0x17u:
      result = (size_t)sub_2034C("delay", 1, 3);
      break;
    case 0x18u:
      result = (size_t)sub_2034C("offset", 1, 3);
      break;
    case 0x19u:
      result = (size_t)sub_2034C("jitter", 1, 3);
      break;
    case 0x1Au:
      result = (size_t)sub_2034C("dispersion", 1, 3);
      break;
    case 0x1Bu:
      v25 = *(_DWORD *)(a2 + 124);
      if ( v25 < 0x10000 )
        result = (size_t)sub_1FDB0("keyid", v25);
      else
        result = (size_t)sub_1FC68("keyid", v25);
      break;
    case 0x1Cu:
      result = (size_t)sub_20888("filtdelay", a2 + 328, *(_DWORD *)(a2 + 320));
      break;
    case 0x1Du:
      result = (size_t)sub_20888("filtoffset", a2 + 392, *(_DWORD *)(a2 + 320));
      break;
    case 0x1Eu:
      result = (size_t)sub_1FDB0("pmode", *(unsigned __int8 *)(a2 + 92));
      break;
    case 0x1Fu:
      result = (size_t)sub_1FDB0("received", *(_DWORD *)(a2 + 744));
      break;
    case 0x20u:
      result = (size_t)sub_1FDB0("sent", *(_DWORD *)(a2 + 740));
      break;
    case 0x21u:
      result = (size_t)sub_20888("filtdisp", a2 + 456, *(_DWORD *)(a2 + 320));
      break;
    case 0x22u:
      result = (size_t)sub_1FC68("flash", *(_DWORD *)(a2 + 300));
      break;
    case 0x23u:
      if ( (*(_DWORD *)(a2 + 68) & 8) != 0 )
      {
        result = (size_t)sub_1FDB0("ttl", *(_DWORD *)(a2 + 76));
      }
      else
      {
        v24 = *(_DWORD *)(a2 + 76);
        if ( (unsigned int)(v24 - 1) <= 6 )
          result = (size_t)sub_1FD0C("ttl", (unsigned __int8)sys_ttl[v24]);
      }
      break;
    case 0x24u:
      sub_6D00C(v30, 468, "%s=\"", "peer_var_list");
      result = strlen(v30);
      v17 = (char *)&unk_B4F68;
      v18 = &v30[result];
      v19 = &v30[result];
      while ( 1 )
      {
        v17 += 8;
        v20 = *((_WORD *)v17 + 1);
        if ( (v20 & 0x80) != 0 )
          break;
        while ( (v20 & 0x40) == 0 )
        {
          v21 = (const char *)*((_DWORD *)v17 + 1);
          result = strlen(v21);
          v22 = result;
          if ( v31 > (_DWORD *)&v19[result + 1] )
          {
            v17 += 8;
            if ( v19 == v18 )
            {
              v23 = v18;
            }
            else
            {
              *v19 = 44;
              v23 = v19 + 1;
            }
            v19 = &v23[v22];
            result = (size_t)memcpy(v23, v21, v22);
            v20 = *((_WORD *)v17 + 1);
            if ( (v20 & 0x80) == 0 )
              continue;
          }
          goto LABEL_41;
        }
      }
LABEL_41:
      if ( v31 > (_DWORD *)(v19 + 2) )
      {
        *v19 = 34;
        v19[1] = 0;
        v29[0] = v30;
        v29[1] = v19 + 1 - v30;
        result = (size_t)sub_1F104((char *)v29, 1, 0);
      }
      break;
    case 0x25u:
      if ( *(double *)(a2 + 672) > 0.0 )
        result = (size_t)sub_2034C("in", 1, 3);
      break;
    case 0x26u:
      if ( *(double *)(a2 + 696) > 0.0 )
        result = (size_t)sub_2034C("out", 1, 3);
      break;
    case 0x27u:
      result = (size_t)sub_1FDB0("headway", *(_DWORD *)(a2 + 712));
      break;
    case 0x28u:
      if ( *(double *)(a2 + 648) != 0.0 )
        result = (size_t)sub_2034C("bias", 1, 3);
      break;
    case 0x29u:
      v15 = *(_DWORD *)(a2 + 44);
      if ( v15 )
      {
        v16 = strlen(*(const char **)(a2 + 44));
        result = (size_t)sub_1F528("srchost", v15, v16);
      }
      break;
    case 0x2Au:
      result = (size_t)sub_1FDB0("timerec", current_time - *(_DWORD *)(a2 + 732));
      break;
    case 0x2Bu:
      result = (size_t)sub_1FDB0("timereach", current_time - *(_DWORD *)(a2 + 736));
      break;
    case 0x2Cu:
      result = (size_t)sub_1FDB0("badauth", *(_DWORD *)(a2 + 752));
      break;
    case 0x2Du:
      result = (size_t)sub_1FDB0("bogusorg", *(_DWORD *)(a2 + 760));
      break;
    case 0x2Eu:
      result = (size_t)sub_1FDB0("oldpkt", *(_DWORD *)(a2 + 764));
      break;
    case 0x2Fu:
      result = (size_t)sub_1FDB0("seldisp", *(_DWORD *)(a2 + 768));
      break;
    case 0x30u:
      result = (size_t)sub_1FDB0("selbroken", *(_DWORD *)(a2 + 772));
      break;
    case 0x31u:
      result = (size_t)sub_1FDB0("candidate", *(unsigned __int8 *)(a2 + 296));
      break;
    case 0x32u:
      v14 = *(_DWORD *)(a2 + 136);
      if ( v14 )
        result = (size_t)sub_1FC68("flags", v14);
      break;
    case 0x33u:
      v12 = *(_DWORD *)(a2 + 148);
      if ( v12 )
      {
        v13 = strlen(*(const char **)(a2 + 148));
        result = (size_t)sub_1F528("host", v12, v13);
      }
      break;
    case 0x35u:
      v9 = *(int **)(a2 + 220);
      if ( v9 )
      {
        sub_1FD0C("initsequence", v9[1]);
        sub_1FC68("initkey", *v9);
        result = (size_t)sub_2099C("timestamp", bswap32(*(_DWORD *)(a2 + 208)));
      }
      break;
    case 0x38u:
      result = *(_DWORD *)(a2 + 136);
      if ( result )
      {
        v4 = OBJ_nid2sn(HIWORD(result));
        digestbyname = EVP_get_digestbyname(v4);
        v6 = EVP_MD_pkey_type(digestbyname);
        v7 = (const char *)OBJ_nid2ln(v6);
        v8 = strlen(v7);
        result = (size_t)sub_1F528("signature", (int)v7, v8);
      }
      break;
    case 0x39u:
      v10 = *(_DWORD *)(a2 + 80);
      if ( v10 )
      {
        v11 = strlen(*(const char **)(a2 + 80));
        result = (size_t)sub_1F528("ident", v10, v11);
      }
      break;
    default:
      return result;
  }
  return result;
}
