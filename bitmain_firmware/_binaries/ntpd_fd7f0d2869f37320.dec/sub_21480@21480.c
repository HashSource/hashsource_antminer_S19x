int __fastcall sub_21480(int result)
{
  char *v1; // r4
  const char *v2; // r4
  size_t v3; // r2
  size_t v4; // r0
  size_t v5; // r0
  int v6; // r0
  int digestbyname; // r0
  int v8; // r0
  size_t v9; // r0
  int i; // r4
  size_t v11; // r0
  unsigned int v12; // r2
  size_t v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  const char *v18; // r4
  size_t v19; // r0
  unsigned __int64 v20; // r0
  double v21; // r0
  int v22; // r2
  int v23; // r1
  const char *v24; // r0
  double v25; // d7
  int v26; // s13
  double v27; // d7
  char *v28; // r5
  int v29; // r9
  char *v30; // r4
  __int16 v31; // r3
  const char *v32; // r11
  char *v33; // r8
  size_t v34; // r2
  char *v35; // r0
  int j; // r5
  bool v37; // zf
  const char *v38; // r1
  char *v39; // r0
  __int16 v40; // r3
  const char *v41; // r11
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
  if ( (unsigned int)(result - 59) <= 0xF && current_time != dword_BA6CC )
  {
    memset(&unk_BA6D0, 0, 0x80u);
    result = adjtimex((struct timex *)&unk_BA6D0);
    if ( result < 0 )
      result = sub_65D40(3, "ntp_adjtime() for mode 6 query failed: %m");
    else
      dword_BA6CC = current_time;
  }
  switch ( (unsigned int)v1 )
  {
    case 1u:
      return (int)sub_1FDB0("leap", (unsigned __int8)sys_leap);
    case 2u:
      return (int)sub_1FDB0("stratum", (unsigned __int8)sys_stratum);
    case 3u:
      return (int)sub_1FD0C("precision", sys_precision);
    case 4u:
      return (int)sub_2034C("rootdelay", 1, 3);
    case 5u:
      return (int)sub_2034C("rootdisp", 1, 3);
    case 6u:
      if ( (unsigned int)(unsigned __int8)sys_stratum - 2 > 0xD )
        return (int)sub_1F474("refid", sys_refid);
      else
        return (int)sub_1F3F0("refid", sys_refid, 0);
    case 7u:
      return (int)sub_1FF38("reftime", &sys_reftime);
    case 8u:
      return (int)sub_1FDB0("tc", (unsigned __int8)sys_poll);
    case 9u:
      if ( sys_peer )
        return (int)sub_1FDB0("peer", *(unsigned __int16 *)(sys_peer + 60));
      else
        return (int)sub_1FDB0("peer", 0);
    case 0xAu:
      return (int)sub_2034C("offset", 1, 6);
    case 0xBu:
      return (int)sub_2034C("frequency", 1, 3);
    case 0xCu:
      return (int)sub_2034C("sys_jitter", 1, 6);
    case 0xDu:
      return (int)sub_2034C("clk_jitter", 1, 3);
    case 0xEu:
      sub_6055C(&v46);
      return (int)sub_1FF38("clock", &v46);
    case 0xFu:
      v45 = strlen(byte_BA854);
      return (int)sub_1F528("processor", (int)byte_BA854, v45);
    case 0x10u:
      sub_6D00C(v50, 256, "%s/%s", byte_BA750, &byte_BA750[130]);
      v44 = strlen(v50);
      return (int)sub_1F528("system", (int)v50, v44);
    case 0x11u:
      v43 = strlen(Version);
      return (int)sub_1F528("version", (int)Version, v43);
    case 0x12u:
      return (int)sub_2034C("clk_wander", 1, 3);
    case 0x13u:
      sub_6D00C(v50, 468, "%s=\"", "sys_var_list");
      result = strlen(v50);
      v28 = (char *)&unk_B5148;
      v29 = 1;
      v30 = &v50[result];
      break;
    case 0x14u:
      if ( sys_tai )
        return (int)sub_1FDB0("tai", sys_tai);
      return result;
    case 0x15u:
      result = sub_2DFC4(&v46);
      if ( v47 )
        return (int)sub_2099C("leapsec", v47);
      return result;
    case 0x16u:
      result = sub_2DFC4(&v46);
      if ( v46 )
        return (int)sub_2099C("expire", v46);
      return result;
    case 0x17u:
      return (int)sub_1FDB0("mintc", (unsigned __int8)ntp_minpoll);
    case 0x18u:
      return (int)sub_1FC68("mru_enabled", mon_enabled);
    case 0x19u:
      return (int)sub_1FDB0("mru_depth", SLODWORD(mru_entries));
    case 0x1Au:
      return (int)sub_1FDB0("mru_deepest", mru_peakentries);
    case 0x1Bu:
      return (int)sub_1FDB0("mru_mindepth", (int)mru_mindepth);
    case 0x1Cu:
      return (int)sub_1FD0C("mru_maxage", (int)mru_maxage);
    case 0x1Du:
      return (int)sub_1FDB0("mru_maxdepth", mru_maxdepth);
    case 0x1Eu:
      v24 = "mru_mem";
      v27 = (double)LODWORD(mru_entries) * 0.0703125;
      v26 = (unsigned int)v27;
      if ( v27 - (double)(unsigned int)v27 >= 0.5 )
        ++v26;
      return (int)sub_1FDB0(v24, v26);
    case 0x1Fu:
      v24 = "mru_maxmem";
      v25 = (double)(unsigned int)mru_maxdepth * 0.0703125;
      v26 = (unsigned int)v25;
      if ( v25 - (double)(unsigned int)v25 >= 0.5 )
        ++v26;
      return (int)sub_1FDB0(v24, v26);
    case 0x20u:
      return (int)sub_1FDB0("ss_uptime", current_time);
    case 0x21u:
      return (int)sub_1FDB0("ss_reset", current_time - sys_stattime);
    case 0x22u:
      return (int)sub_1FDB0("ss_received", sys_received);
    case 0x23u:
      return (int)sub_1FDB0("ss_thisver", sys_newversion);
    case 0x24u:
      return (int)sub_1FDB0("ss_oldver", sys_oldversion);
    case 0x25u:
      return (int)sub_1FDB0("ss_badformat", sys_badlength);
    case 0x26u:
      return (int)sub_1FDB0("ss_badauth", sys_badauth);
    case 0x27u:
      return (int)sub_1FDB0("ss_declined", sys_declined);
    case 0x28u:
      return (int)sub_1FDB0("ss_restricted", sys_restricted);
    case 0x29u:
      return (int)sub_1FDB0("ss_limited", sys_limitrejected);
    case 0x2Au:
      return (int)sub_1FDB0("ss_kodsent", sys_kodsent);
    case 0x2Bu:
      return (int)sub_1FDB0("ss_processed", sys_processed);
    case 0x2Cu:
      return (int)sub_1FDB0("ss_lamport", sys_lamport);
    case 0x2Du:
      return (int)sub_1FDB0("ss_tsrounding", sys_tsrounding);
    case 0x2Eu:
      if ( sys_peer )
      {
        if ( *(_DWORD *)(sys_peer + 56) )
        {
          v2 = (const char *)sub_6D454(sys_peer + 16);
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
      return (int)sub_1F350("peeradr", (int)v2, v3);
    case 0x2Fu:
      if ( sys_peer )
        v23 = *(unsigned __int8 *)(sys_peer + 63);
      else
        v23 = 0;
      return (int)sub_1FDB0("peermode", v23);
    case 0x30u:
      return (int)sub_2034C("bcastdelay", 1, 3);
    case 0x31u:
      v20 = (-((unsigned int)sys_authdelay >> 31) ^ dword_109C14)
          + __PAIR64__(
              ((unsigned __int64)-(__int64)((unsigned int)sys_authdelay >> 31) >> 32) ^ sys_authdelay,
              (unsigned int)sys_authdelay >> 31);
      v21 = COERCE_DOUBLE(sub_8D40C(v20, HIDWORD(v20)));
      LODWORD(v21) = -32;
      ldexp(v21, v22);
      return (int)sub_2034C("authdelay", 1, 3);
    case 0x32u:
      return (int)sub_1FDB0("authkeys", authnumkeys);
    case 0x33u:
      return (int)sub_1FDB0("authfreek", authnumfreekeys);
    case 0x34u:
      return (int)sub_1FDB0("authklookups", authkeylookups);
    case 0x35u:
      return (int)sub_1FDB0("authknotfound", authkeynotfound);
    case 0x36u:
      return (int)sub_1FDB0("authkuncached", authkeyuncached);
    case 0x37u:
      return (int)sub_1FDB0("authkexpired", authkeyexpired);
    case 0x38u:
      return (int)sub_1FDB0("authencrypts", authencryptions);
    case 0x39u:
      return (int)sub_1FDB0("authdecrypts", authdecryptions);
    case 0x3Au:
      return (int)sub_1FDB0("authreset", current_time - auth_timereset);
    case 0x3Bu:
      return (int)sub_2034C("koffset", 0, -1);
    case 0x3Cu:
      return (int)sub_2034C("kfreq", 0, -1);
    case 0x3Du:
      return (int)sub_2034C("kmaxerr", 0, 6);
    case 0x3Eu:
      return (int)sub_2034C("kesterr", 0, 6);
    case 0x3Fu:
      v18 = (const char *)sub_6E0C8(dword_BA6E4);
      v19 = strlen(v18);
      return (int)sub_1F528("kstflags", (int)v18, v19);
    case 0x40u:
      return (int)sub_1FD0C("ktimeconst", dword_BA6E8);
    case 0x41u:
      return (int)sub_2034C("kprecis", 0, 6);
    case 0x42u:
      return (int)sub_2034C("kfreqtol", 0, -1);
    case 0x43u:
      if ( dword_BA708 )
        return (int)sub_2034C("kppsfreq", 0, -1);
      else
        return (int)sub_1FD0C("kppsfreq", 0);
    case 0x44u:
      if ( dword_BA708 )
        return (int)sub_2034C("kppsstab", 0, -1);
      else
        return (int)sub_1FD0C("kppsstab", 0);
    case 0x45u:
      if ( dword_BA708 )
        return (int)sub_2034C("kppsjitter", 1, 3);
      else
        return (int)sub_1FD0C("kppsjitter", 0);
    case 0x46u:
      if ( dword_BA708 )
        return (int)sub_1FD0C("kppscalibdur", 1 << dword_BA708);
      else
        return (int)sub_1FD0C("kppscalibdur", 0);
    case 0x47u:
      if ( dword_BA708 )
        return (int)sub_1FD0C("kppscalibs", dword_BA714);
      else
        return (int)sub_1FD0C("kppscalibs", 0);
    case 0x48u:
      if ( dword_BA708 )
        return (int)sub_1FD0C("kppscaliberrs", dword_BA718);
      else
        return (int)sub_1FD0C("kppscaliberrs", 0);
    case 0x49u:
      if ( dword_BA708 )
        return (int)sub_1FD0C("kppsjitexc", dword_BA710);
      else
        return (int)sub_1FD0C("kppsjitexc", 0);
    case 0x4Au:
      if ( dword_BA708 )
        return (int)sub_1FD0C("kppsstbexc", dword_BA71C);
      else
        return (int)sub_1FD0C("kppsstbexc", 0);
    case 0x4Bu:
      return (int)sub_1FDB0("iostats_reset", current_time - io_timereset);
    case 0x4Cu:
      v17 = sub_6AD80();
      return (int)sub_1FDB0("total_rbuf", v17);
    case 0x4Du:
      v16 = sub_6ACD8();
      return (int)sub_1FDB0("free_rbuf", v16);
    case 0x4Eu:
      v15 = sub_6AD2C();
      return (int)sub_1FDB0("used_rbuf", v15);
    case 0x4Fu:
      v14 = sub_6ADD4();
      return (int)sub_1FDB0("rbuf_lowater", v14);
    case 0x50u:
      return (int)sub_1FDB0("io_dropped", packets_dropped);
    case 0x51u:
      return (int)sub_1FDB0("io_ignored", packets_ignored);
    case 0x52u:
      return (int)sub_1FDB0("io_received", packets_received);
    case 0x53u:
      return (int)sub_1FDB0("io_sent", packets_sent);
    case 0x54u:
      return (int)sub_1FDB0("io_sendfailed", packets_notsent);
    case 0x55u:
      return (int)sub_1FDB0("io_wakeups", handler_calls);
    case 0x56u:
      return (int)sub_1FDB0("io_goodwakeups", handler_pkts);
    case 0x57u:
      return (int)sub_1FDB0("timerstats_reset", current_time - timer_timereset);
    case 0x58u:
      return (int)sub_1FDB0("timer_overruns", alarm_overflow);
    case 0x59u:
      return (int)sub_1FDB0("timer_xmts", timer_xmtcalls);
    case 0x5Au:
      return (int)sub_2034C("fuzz", 1, 3);
    case 0x5Bu:
      return (int)sub_2034C("clk_wander_threshold", 1, 3);
    case 0x5Eu:
      if ( crypto_flags )
        return (int)sub_1FC68("flags", crypto_flags);
      return result;
    case 0x5Fu:
      if ( dword_109294 )
      {
        v13 = strlen((const char *)dword_109294);
        return (int)sub_1F528("host", dword_109294, v13);
      }
      return result;
    case 0x60u:
      if ( hostval )
        return (int)sub_2099C("update", bswap32(hostval));
      return result;
    case 0x61u:
      for ( i = cinfo; i; i = *(_DWORD *)i )
      {
        sub_6D00C(v50, 256, "%s %s 0x%x", *(const char **)(i + 48), *(const char **)(i + 52), *(_DWORD *)(i + 4));
        v11 = strlen(v50);
        sub_1F528("cert", (int)v50, v11);
        v12 = sub_6D00C(
                v49,
                16,
                "%04d%02d%02d%02d%02d",
                *(unsigned __int16 *)(i + 38),
                *(unsigned __int8 *)(i + 42),
                *(unsigned __int8 *)(i + 43),
                *(unsigned __int8 *)(i + 44),
                *(unsigned __int8 *)(i + 45));
        if ( v12 > 0xF )
          sub_6FC54("ntp_control.c", 1705, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
        result = (int)sub_1F350("until", (int)v49, v12);
      }
      return result;
    case 0x62u:
      result = crypto_flags;
      if ( crypto_flags )
      {
        v6 = OBJ_nid2sn(HIWORD(crypto_flags));
        digestbyname = EVP_get_digestbyname(v6);
        v8 = EVP_MD_pkey_type(digestbyname);
        OBJ_nid2ln(v8);
        sub_6E4B4(v50);
        v9 = strlen(v50);
        return (int)sub_1F528("signature", (int)v50, v9);
      }
      return result;
    case 0x64u:
      if ( sys_ident )
      {
        v5 = strlen((const char *)sys_ident);
        return (int)sub_1F528("ident", sys_ident, v5);
      }
      return result;
    case 0x65u:
      if ( crypto_flags )
      {
        OBJ_nid2ln(crypto_nid);
        sub_6E4B4(v50);
        v4 = strlen(v50);
        return (int)sub_1F528("digest", (int)v50, v4);
      }
      return result;
    default:
      return result;
  }
  while ( 1 )
  {
    v28 += 8;
    v31 = *((_WORD *)v28 + 1);
    if ( (v31 & 0x80) != 0 )
      break;
    while ( (v31 & 0x40) == 0 )
    {
      v32 = (const char *)*((_DWORD *)v28 + 1);
      v33 = (char *)((char *)v51 - v30);
      result = strlen(v32);
      if ( result + 1 >= (char *)v51 - v30 )
        goto LABEL_125;
      v28 += 8;
      v34 = result;
      if ( !v29 )
        *v30++ = 44;
      v29 = 0;
      v35 = v30;
      v30 += v34;
      result = (int)memcpy(v35, v32, v34);
      v31 = *((_WORD *)v28 + 1);
      if ( (v31 & 0x80) != 0 )
        goto LABEL_124;
    }
  }
LABEL_124:
  v33 = (char *)((char *)v51 - v30);
LABEL_125:
  for ( j = dword_BA8D8; j; j += 8 )
  {
    v40 = *(_WORD *)(j + 2);
    if ( (v40 & 0x80) != 0 )
      break;
    if ( (v40 & 0x40) == 0 )
    {
      v41 = *(const char **)(j + 4);
      if ( v41 )
      {
        result = (int)strchr(*(const char **)(j + 4), 61);
        if ( result )
        {
          v42 = result - (_DWORD)v41;
        }
        else
        {
          result = strlen(v41);
          v42 = result;
        }
        if ( (int)(v42 + 1) >= (int)v33 )
          break;
        v37 = v29 == 0;
        v29 = 0;
        if ( v37 )
        {
          v38 = v41;
        }
        else
        {
          *v30++ = 44;
          v38 = *(const char **)(j + 4);
        }
        v39 = v30;
        v30 += v42;
        result = (int)memcpy(v39, v38, v42);
        v33 = (char *)((char *)v51 - v30);
      }
    }
  }
  if ( (int)v33 > 2 )
  {
    *v30 = 34;
    v30[1] = 0;
    v48[0] = v50;
    v48[1] = v30 + 1 - v50;
    return (int)sub_1F104((char *)v48, 1, 0);
  }
  return result;
}
