int __fastcall sub_30B38(__int64 a1)
{
  int v1; // r12
  double v2; // d0
  int v3; // r1
  int v4; // r0
  bool v5; // nf
  _QWORD *v6; // r0
  _QWORD *v7; // r3

  v3 = a1 - 1;
  switch ( (int)a1 )
  {
    case 1:
      if ( !mode_ntpdate )
      {
        sub_2F49C();
        sub_2F724();
        if ( freq_set )
          v4 = 2;
        else
          v4 = 1;
        LODWORD(a1) = sub_2EBA0(v4);
        dword_BBE74 = 1;
      }
      break;
    case 2:
      return a1;
    case 3:
      clock_max_back = v2;
      clock_max_fwd = v2;
      if ( v2 == 0.0 || v2 > 0.5 )
        goto LABEL_11;
      break;
    case 4:
      clock_max_back = v2;
      if ( v2 == 0.0 || v2 > 0.5 || clock_max_fwd == 0.0 || clock_max_fwd > 0.5 )
        goto LABEL_11;
      break;
    case 5:
      clock_max_fwd = v2;
      if ( clock_max_back == 0.0 || clock_max_back > 0.5 || v2 == 0.0 || v2 > 0.5 )
LABEL_11:
        LODWORD(a1) = sub_30958(0);
      break;
    case 6:
      clock_panic = v2;
      break;
    case 7:
      clock_phi = v2 / 1000000.0;
      break;
    case 8:
      if ( v2 >= 300.0 )
        clock_minstep = v2;
      else
        clock_minstep = 300.0;
      break;
    case 10:
      allan_xpt = (unsigned int)v2;
      break;
    case 11:
      v5 = v2 < 900.0;
      if ( v2 < 900.0 )
      {
        v3 = 1;
        v1 = 1;
      }
      else
      {
        v2 = v2 / 900.0;
      }
      if ( !v5 )
      {
        v1 = (int)v2;
        v3 = (int)v2;
      }
      dword_BBE78 = v1;
      v6 = (_QWORD *)sub_64BCC(0, v3, 8);
      dword_BBE5C = (int)v6;
      if ( dword_BBE78 > 0 )
      {
        v7 = &v6[dword_BBE78];
        do
          *v6++ = 0x41CDCD6500000000LL;
        while ( v6 != v7 );
      }
      a1 = 0x41CDCD6500000000LL;
      dbl_BBE68 = 1000000000.0;
      break;
    case 12:
      dbl_BBE80 = v2;
      ++freq_set;
      break;
    case 13:
      clock_codec = v2 / 1000000.0;
      break;
    case 15:
      LODWORD(a1) = sub_38E94();
      break;
    default:
      LODWORD(a1) = sub_65D40(5, "loop_config: unsupported option %d", (_DWORD)a1);
      break;
  }
  return a1;
}
