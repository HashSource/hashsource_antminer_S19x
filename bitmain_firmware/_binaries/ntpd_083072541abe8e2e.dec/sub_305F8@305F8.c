__int16 *__fastcall sub_305F8(__int16 *result)
{
  double v1; // d0
  double v2; // d7
  int v3; // r1
  int v4; // r12
  _QWORD *v5; // r0
  _QWORD *v6; // r3

  v3 = (int)result - 1;
  switch ( (unsigned int)result )
  {
    case 1u:
      if ( !mode_ntpdate )
      {
        sub_2EF84();
        sub_2F1EC();
        if ( freq_set )
        {
          result = (_WORD *)(&dword_0 + 2);
          dbl_B9B20 = 0.0;
          state = 2;
          last_offset = 0.0;
          dword_B9B28 = current_time;
        }
        else
        {
          result = (__int16 *)sub_2E750((__int16 *)((char *)&dword_0 + 1));
        }
        dword_B9E6C = 1;
      }
      break;
    case 2u:
      return result;
    case 3u:
      clock_max_back = v1;
      clock_max_fwd = v1;
      if ( v1 == 0.0 || v1 > 0.5 )
        goto LABEL_10;
      break;
    case 4u:
      clock_max_back = v1;
      if ( v1 == 0.0 || v1 > 0.5 || clock_max_fwd == 0.0 || clock_max_fwd > 0.5 )
        goto LABEL_10;
      break;
    case 5u:
      clock_max_fwd = v1;
      if ( clock_max_back == 0.0 || clock_max_back > 0.5 || v1 == 0.0 || v1 > 0.5 )
LABEL_10:
        result = sub_303FC(0);
      break;
    case 6u:
      clock_panic = v1;
      break;
    case 7u:
      clock_phi = v1 / 1000000.0;
      break;
    case 8u:
      if ( v1 >= 300.0 )
        clock_minstep = v1;
      else
        clock_minstep = 300.0;
      break;
    case 0xAu:
      allan_xpt = (unsigned int)v1;
      break;
    case 0xBu:
      if ( v1 >= 900.0 )
        v2 = v1 / 900.0;
      else
        v3 = 1;
      if ( v1 >= 900.0 )
      {
        v4 = (int)v2;
        v3 = (int)v2;
      }
      else
      {
        v4 = v3;
      }
      dword_B9E70 = v4;
      v5 = (_QWORD *)sub_63C68(0, v3, 8);
      dword_B9E58 = (int)v5;
      if ( dword_B9E70 > 0 )
      {
        v6 = &v5[dword_B9E70];
        do
          *v5++ = 0x41CDCD6500000000LL;
        while ( v6 != v5 );
      }
      dbl_B9E60 = 1000000000.0;
      result = 0;
      break;
    case 0xCu:
      dbl_B9E78 = v1;
      ++freq_set;
      break;
    case 0xDu:
      clock_codec = v1 / 1000000.0;
      break;
    case 0xFu:
      result = (__int16 *)sub_386B0();
      break;
    default:
      result = (__int16 *)sub_64E00(5, "loop_config: unsupported option %d", result);
      break;
  }
  return result;
}
