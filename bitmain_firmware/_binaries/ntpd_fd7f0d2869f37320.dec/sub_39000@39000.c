void __fastcall sub_39000(int a1, Elf32_Dyn **a2, unsigned __int16 *s2)
{
  double v3; // d0
  int *v4; // r12

  switch ( a1 )
  {
    case 1:
      sys_bclient = (int)a2;
      if ( a2 )
        sub_16470();
      else
        sub_16658();
      break;
    case 3:
      sys_authenticate = (int)a2;
      break;
    case 4:
      if ( v3 == 0.0 )
        v3 = -0.05;
      sys_bdelay = v3;
      break;
    case 6:
      if ( s2 )
        sub_16740(s2);
      sys_bclient = 1;
      break;
    case 7:
      if ( s2 )
        sub_169FC(s2);
      break;
    case 8:
      ntp_enable = (int)a2;
      break;
    case 9:
      sub_30958(a2);
      break;
    case 10:
      if ( a2 )
      {
        sub_311C4(1);
      }
      else
      {
        sub_312E8(1u);
        if ( mon_enabled )
          sub_65D40(4, "restrict: 'monitor' cannot be disabled while 'limited' is enabled");
      }
      break;
    case 11:
      stats_control = (int)a2;
      break;
    case 12:
      hardpps_enable = (int)a2;
      break;
    case 13:
      cal_enable = (int)a2;
      break;
    case 14:
      sys_minclock = (int)v3;
      break;
    case 15:
      sys_maxclock = (int)v3;
      break;
    case 16:
      sys_minsane = (int)v3;
      break;
    case 17:
      sys_floor = (int)v3;
      break;
    case 18:
      sys_ceiling = (int)v3;
      break;
    case 19:
      sys_cohort = (int)v3;
      break;
    case 20:
      return;
    case 21:
      sys_mindisp = v3;
      break;
    case 22:
      sys_maxdist = v3;
      break;
    case 25:
      sys_beacon = (Elf32_Sym *)(int)v3;
      break;
    case 26:
      sys_orphan = (int)v3;
      break;
    case 27:
      v4 = sys_orphwait;
      sys_orphwait = (int *)(int)v3;
      orphwait = orphwait - (_DWORD)v4 + (int)v3;
      break;
    case 28:
      ntp_mode7 = (int)a2;
      break;
    case 29:
      unpeer_crypto_early = (int)a2;
      break;
    case 30:
      unpeer_crypto_nak_early = (int)a2;
      break;
    case 31:
      unpeer_digest_early = (int)a2;
      break;
    case 32:
      peer_clear_digest_early = (int)a2;
      break;
    case 33:
      sys_bcpollbstep = (unsigned int)v3;
      break;
    default:
      sub_65D40(5, "proto: unsupported option %d");
      break;
  }
}
