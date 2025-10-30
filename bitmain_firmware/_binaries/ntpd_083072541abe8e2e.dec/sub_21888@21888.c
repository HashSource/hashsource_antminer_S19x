int __fastcall sub_21888(int result)
{
  char *v1; // r4
  const char *v2; // r4
  size_t v3; // r2
  struct timex *v4; // r0
  size_t v5; // r0
  size_t v6; // r0
  int v7; // r0
  int digestbyname; // r0
  int v9; // r0
  size_t v10; // r0
  int i; // r4
  size_t v12; // r0
  unsigned int v13; // r2
  size_t v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  const char *v19; // r4
  size_t v20; // r0
  __int64 v21; // r0
  int v22; // r2
  int v23; // r1
  const char *v24; // r0
  double v25; // d7
  int v26; // s13
  double v27; // d7
  int v28; // r9
  char *v29; // r4
  __int16 v30; // r3
  char *v31; // r8
  char *v32; // r5
  const char *v33; // r11
  char v34; // r3
  size_t v35; // r2
  bool v36; // zf
  char *v37; // r0
  int j; // r5
  const char *v39; // r11
  char *v40; // r0
  __int16 v41; // r3
  size_t v42; // r2
  size_t v43; // r0
  size_t v44; // r0
  size_t v45; // r0
  int v46; // [sp+14h] [bp-200h] BYREF
  int v47; // [sp+18h] [bp-1FCh]
  _DWORD v48[2]; // [sp+20h] [bp-1F4h] BYREF
  _BYTE v49[16]; // [sp+28h] [bp-1ECh] BYREF
  char v50[468]; // [sp+38h] [bp-1DCh] BYREF
  _DWORD v51[2]; // [sp+20Ch] [bp-8h] BYREF

  v1 = (char *)result;
  if ( (unsigned int)(result - 59) <= 0xF && current_time != dword_B96CC )
  {
    v4 = (struct timex *)memset(&unk_B96D0, 0, 0x80u);
    result = adjtimex(v4);
    if ( result < 0 )
      result = sub_64E00(3, "ntp_adjtime() for mode 6 query failed: %m");
    else
      dword_B96CC = current_time;
  }
  switch ( (unsigned int)v1 )
  {
    case 1u:
      return (int)sub_1FB4C("leap", (unsigned __int8)sys_leap);
    case 2u:
      return (int)sub_1FB4C("stratum", (unsigned __int8)sys_stratum);
    case 3u:
      return (int)sub_1FAA8("precision", sys_precision);
    case 4u:
      return (int)sub_200E4("rootdelay", 1, 3);
    case 5u:
      return (int)sub_200E4("rootdisp", 1, 3);
    case 6u:
      if ( (unsigned int)(unsigned __int8)sys_stratum - 2 <= 0xD )
        return (int)sub_1F188("refid", sys_refid, 0);
      else
        return (int)sub_1F20C("refid", sys_refid);
    case 7u:
      return (int)sub_1FCCC("reftime", &sys_reftime);
    case 8u:
      return (int)sub_1FB4C("tc", (unsigned __int8)sys_poll);
    case 9u:
      if ( sys_peer )
        return (int)sub_1FB4C("peer", *(unsigned __int16 *)(sys_peer + 60));
      else
        return (int)sub_1FB4C("peer", 0);
    case 0xAu:
      return (int)sub_200E4("offset", 1, 6);
    case 0xBu:
      return (int)sub_200E4("frequency", 1, 3);
    case 0xCu:
      return (int)sub_200E4("sys_jitter", 1, 6);
    case 0xDu:
      return (int)sub_200E4("clk_jitter", 1, 3);
    case 0xEu:
      sub_5F724(&v46);
      return (int)sub_1FCCC("clock", &v46);
    case 0xFu:
      v45 = strlen(byte_B9854);
      return (int)sub_1F2C0("processor", (int)byte_B9854, v45);
    case 0x10u:
      sub_6C054(v50, 256, "%s/%s", byte_B9750, &byte_B9750[130]);
      v44 = strlen(v50);
      return (int)sub_1F2C0("system", (int)v50, v44);
    case 0x11u:
      v43 = strlen(Version);
      return (int)sub_1F2C0("version", (int)Version, v43);
    case 0x12u:
      return (int)sub_200E4("clk_wander", 1, 3);
    case 0x13u:
      v28 = 1;
      sub_6C054(v50, 468, "%s=\"", "sys_var_list");
      result = strlen(v50);
      v29 = &v50[result];
      LOBYTE(v30) = 3;
      v31 = (char *)((char *)v51 - &v50[result]);
      v32 = (char *)&unk_B4148;
      break;
    case 0x14u:
      if ( sys_tai )
        return (int)sub_1FB4C("tai", sys_tai);
      return result;
    case 0x15u:
      result = sub_2DB68(&v46);
      if ( v47 )
        return (int)sub_2071C("leapsec", v47);
      return result;
    case 0x16u:
      result = sub_2DB68(&v46);
      if ( v46 )
        return (int)sub_2071C("expire", v46);
      return result;
    case 0x17u:
      return (int)sub_1FB4C("mintc", (unsigned __int8)ntp_minpoll);
    case 0x18u:
      return (int)sub_1FA04("mru_enabled", mon_enabled);
    case 0x19u:
      return (int)sub_1FB4C("mru_depth", SLODWORD(mru_entries));
    case 0x1Au:
      return (int)sub_1FB4C("mru_deepest", mru_peakentries);
    case 0x1Bu:
      return (int)sub_1FB4C("mru_mindepth", (int)mru_mindepth);
    case 0x1Cu:
      return (int)sub_1FAA8("mru_maxage", (int)mru_maxage);
    case 0x1Du:
      return (int)sub_1FB4C("mru_maxdepth", mru_maxdepth);
    case 0x1Eu:
      v24 = "mru_mem";
      v27 = (double)LODWORD(mru_entries) * 0.0703125;
      v26 = (unsigned int)v27;
      if ( v27 - (double)(unsigned int)v27 >= 0.5 )
        ++v26;
      return (int)sub_1FB4C(v24, v26);
    case 0x1Fu:
      v24 = "mru_maxmem";
      v25 = (double)(unsigned int)mru_maxdepth * 0.0703125;
      v26 = (unsigned int)v25;
      if ( v25 - (double)(unsigned int)v25 >= 0.5 )
        ++v26;
      return (int)sub_1FB4C(v24, v26);
    case 0x20u:
      return (int)sub_1FB4C("ss_uptime", current_time);
    case 0x21u:
      return (int)sub_1FB4C("ss_reset", current_time - sys_stattime);
    case 0x22u:
      return (int)sub_1FB4C("ss_received", sys_received);
    case 0x23u:
      return (int)sub_1FB4C("ss_thisver", sys_newversion);
    case 0x24u:
      return (int)sub_1FB4C("ss_oldver", sys_oldversion);
    case 0x25u:
      return (int)sub_1FB4C("ss_badformat", sys_badlength);
    case 0x26u:
      return (int)sub_1FB4C("ss_badauth", sys_badauth);
    case 0x27u:
      return (int)sub_1FB4C("ss_declined", sys_declined);
    case 0x28u:
      return (int)sub_1FB4C("ss_restricted", sys_restricted);
    case 0x29u:
      return (int)sub_1FB4C("ss_limited", sys_limitrejected);
    case 0x2Au:
      return (int)sub_1FB4C("ss_kodsent", sys_kodsent);
    case 0x2Bu:
      return (int)sub_1FB4C("ss_processed", sys_processed);
    case 0x2Cu:
      return (int)sub_1FB4C("ss_lamport", sys_lamport);
    case 0x2Du:
      return (int)sub_1FB4C("ss_tsrounding", sys_tsrounding);
    case 0x2Eu:
      if ( sys_peer )
      {
        if ( *(_DWORD *)(sys_peer + 56) )
        {
          v2 = (const char *)sub_6C47C(sys_peer + 16);
          v3 = strlen(v2);
        }
        else
        {
          v3 = 9;
          v2 = "0.0.0.0:0";
        }
      }
      else
      {
        v3 = 9;
        v2 = "0.0.0.0:0";
      }
      return (int)sub_1F0E4("peeradr", (int)v2, v3);
    case 0x2Fu:
      v23 = sys_peer;
      if ( sys_peer )
        v23 = *(unsigned __int8 *)(sys_peer + 63);
      return (int)sub_1FB4C("peermode", v23);
    case 0x30u:
      return (int)sub_200E4("bcastdelay", 1, 3);
    case 0x31u:
      if ( (sys_authdelay & 0x80000000) != 0 )
        v21 = sub_8BEC4(
                -dword_108BF4,
                (unsigned __int64)-(__int64)(__PAIR64__(sys_authdelay, 0) + (unsigned int)dword_108BF4) >> 32);
      else
        v21 = sub_8BEC4(dword_108BF4, (__PAIR64__(sys_authdelay, 0) + (unsigned int)dword_108BF4) >> 32);
      LODWORD(v21) = -32;
      ldexp(*(double *)&v21, v22);
      return (int)sub_200E4("authdelay", 1, 3);
    case 0x32u:
      return (int)sub_1FB4C("authkeys", authnumkeys);
    case 0x33u:
      return (int)sub_1FB4C("authfreek", authnumfreekeys);
    case 0x34u:
      return (int)sub_1FB4C("authklookups", authkeylookups);
    case 0x35u:
      return (int)sub_1FB4C("authknotfound", authkeynotfound);
    case 0x36u:
      return (int)sub_1FB4C("authkuncached", authkeyuncached);
    case 0x37u:
      return (int)sub_1FB4C("authkexpired", authkeyexpired);
    case 0x38u:
      return (int)sub_1FB4C("authencrypts", authencryptions);
    case 0x39u:
      return (int)sub_1FB4C("authdecrypts", authdecryptions);
    case 0x3Au:
      return (int)sub_1FB4C("authreset", current_time - auth_timereset);
    case 0x3Bu:
      return (int)sub_200E4("koffset", 0, -1);
    case 0x3Cu:
      return (int)sub_200E4("kfreq", 0, -1);
    case 0x3Du:
      return (int)sub_200E4("kmaxerr", 0, 6);
    case 0x3Eu:
      return (int)sub_200E4("kesterr", 0, 6);
    case 0x3Fu:
      v19 = (const char *)sub_6D0EC(dword_B96E4);
      v20 = strlen(v19);
      return (int)sub_1F2C0("kstflags", (int)v19, v20);
    case 0x40u:
      return (int)sub_1FAA8("ktimeconst", dword_B96E8);
    case 0x41u:
      return (int)sub_200E4("kprecis", 0, 6);
    case 0x42u:
      return (int)sub_200E4("kfreqtol", 0, -1);
    case 0x43u:
      if ( dword_B9708 )
        return (int)sub_200E4("kppsfreq", 0, -1);
      else
        return (int)sub_1FAA8("kppsfreq", 0);
    case 0x44u:
      if ( dword_B9708 )
        return (int)sub_200E4("kppsstab", 0, -1);
      else
        return (int)sub_1FAA8("kppsstab", 0);
    case 0x45u:
      if ( dword_B9708 )
        return (int)sub_200E4("kppsjitter", 1, 3);
      else
        return (int)sub_1FAA8("kppsjitter", 0);
    case 0x46u:
      if ( dword_B9708 )
        return (int)sub_1FAA8("kppscalibdur", 1 << dword_B9708);
      else
        return (int)sub_1FAA8("kppscalibdur", 0);
    case 0x47u:
      if ( dword_B9708 )
        return (int)sub_1FAA8("kppscalibs", dword_B9714);
      else
        return (int)sub_1FAA8("kppscalibs", 0);
    case 0x48u:
      if ( dword_B9708 )
        return (int)sub_1FAA8("kppscaliberrs", dword_B9718);
      else
        return (int)sub_1FAA8("kppscaliberrs", 0);
    case 0x49u:
      if ( dword_B9708 )
        return (int)sub_1FAA8("kppsjitexc", dword_B9710);
      else
        return (int)sub_1FAA8("kppsjitexc", 0);
    case 0x4Au:
      if ( dword_B9708 )
        return (int)sub_1FAA8("kppsstbexc", dword_B971C);
      else
        return (int)sub_1FAA8("kppsstbexc", 0);
    case 0x4Bu:
      return (int)sub_1FB4C("iostats_reset", current_time - io_timereset);
    case 0x4Cu:
      v18 = sub_69E00();
      return (int)sub_1FB4C("total_rbuf", v18);
    case 0x4Du:
      v17 = sub_69D58();
      return (int)sub_1FB4C("free_rbuf", v17);
    case 0x4Eu:
      v16 = sub_69DAC();
      return (int)sub_1FB4C("used_rbuf", v16);
    case 0x4Fu:
      v15 = sub_69E54();
      return (int)sub_1FB4C("rbuf_lowater", v15);
    case 0x50u:
      return (int)sub_1FB4C("io_dropped", packets_dropped);
    case 0x51u:
      return (int)sub_1FB4C("io_ignored", packets_ignored);
    case 0x52u:
      return (int)sub_1FB4C("io_received", packets_received);
    case 0x53u:
      return (int)sub_1FB4C("io_sent", packets_sent);
    case 0x54u:
      return (int)sub_1FB4C("io_sendfailed", packets_notsent);
    case 0x55u:
      return (int)sub_1FB4C("io_wakeups", handler_calls);
    case 0x56u:
      return (int)sub_1FB4C("io_goodwakeups", handler_pkts);
    case 0x57u:
      return (int)sub_1FB4C("timerstats_reset", current_time - timer_timereset);
    case 0x58u:
      return (int)sub_1FB4C("timer_overruns", alarm_overflow);
    case 0x59u:
      return (int)sub_1FB4C("timer_xmts", timer_xmtcalls);
    case 0x5Au:
      return (int)sub_200E4("fuzz", 1, 3);
    case 0x5Bu:
      return (int)sub_200E4("clk_wander_threshold", 1, 3);
    case 0x5Eu:
      if ( crypto_flags )
        return (int)sub_1FA04("flags", crypto_flags);
      return result;
    case 0x5Fu:
      if ( dword_108274 )
      {
        v14 = strlen((const char *)dword_108274);
        return (int)sub_1F2C0("host", dword_108274, v14);
      }
      return result;
    case 0x60u:
      if ( hostval )
        return (int)sub_2071C("update", bswap32(hostval));
      return result;
    case 0x61u:
      for ( i = cinfo; i; i = *(_DWORD *)i )
      {
        sub_6C054(v50, 256, "%s %s 0x%x", *(const char **)(i + 48), *(const char **)(i + 52), *(_DWORD *)(i + 4));
        v12 = strlen(v50);
        sub_1F2C0("cert", (int)v50, v12);
        v13 = sub_6C054(
                v49,
                16,
                "%04d%02d%02d%02d%02d",
                *(unsigned __int16 *)(i + 38),
                *(unsigned __int8 *)(i + 42),
                *(unsigned __int8 *)(i + 43),
                *(unsigned __int8 *)(i + 44),
                *(unsigned __int8 *)(i + 45));
        if ( v13 > 0xF )
          sub_6ECC0("ntp_control.c", 1705, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
        result = (int)sub_1F0E4("until", (int)v49, v13);
      }
      return result;
    case 0x62u:
      result = crypto_flags;
      if ( crypto_flags )
      {
        v7 = OBJ_nid2sn(HIWORD(crypto_flags));
        digestbyname = EVP_get_digestbyname(v7);
        v9 = EVP_MD_pkey_type(digestbyname);
        OBJ_nid2ln(v9);
        sub_6D4DC(v50);
        v10 = strlen(v50);
        return (int)sub_1F2C0("signature", (int)v50, v10);
      }
      return result;
    case 0x64u:
      if ( sys_ident )
      {
        v6 = strlen((const char *)sys_ident);
        return (int)sub_1F2C0("ident", sys_ident, v6);
      }
      return result;
    case 0x65u:
      if ( crypto_flags )
      {
        OBJ_nid2ln(crypto_nid);
        sub_6D4DC(v50);
        v5 = strlen(v50);
        return (int)sub_1F2C0("digest", (int)v50, v5);
      }
      return result;
    default:
      return result;
  }
  while ( 1 )
  {
    v32 += 8;
    if ( (v30 & 0x80) != 0 )
      break;
    if ( (v30 & 0x40) == 0 )
    {
      v33 = (const char *)*((_DWORD *)v32 + 1);
      result = strlen(v33);
      v34 = result + 1;
      v35 = result;
      if ( result + 1 >= (int)v31 )
        break;
      v36 = v28 == 0;
      if ( !v28 )
        v34 = 44;
      v28 = 0;
      if ( v36 )
        *v29++ = v34;
      v37 = v29;
      v29 += v35;
      v31 = (char *)((char *)v51 - v29);
      result = (int)memcpy(v37, v33, v35);
    }
    v30 = *((_WORD *)v32 + 5);
  }
  for ( j = dword_B98D8; j; j += 8 )
  {
    v41 = *(_WORD *)(j + 2);
    if ( (v41 & 0x80) != 0 )
      break;
    if ( (v41 & 0x40) == 0 )
    {
      v39 = *(const char **)(j + 4);
      if ( v39 )
      {
        result = (int)strchr(*(const char **)(j + 4), 61);
        if ( result )
        {
          v42 = result - (_DWORD)v39;
        }
        else
        {
          result = strlen(v39);
          v42 = result;
        }
        if ( (int)(v42 + 1) >= (int)v31 )
          break;
        v36 = v28 == 0;
        v28 = 0;
        if ( !v36 )
        {
          *v29++ = 44;
          v39 = *(const char **)(j + 4);
        }
        v40 = v29;
        v29 += v42;
        v31 = (char *)((char *)v51 - v29);
        result = (int)memcpy(v40, v39, v42);
      }
    }
  }
  if ( (int)v31 > 2 )
  {
    *v29 = 34;
    v29[1] = 0;
    v48[0] = v50;
    v48[1] = v29 + 1 - v50;
    return (int)sub_1EEC8((char *)v48, 1, 0);
  }
  return result;
}
