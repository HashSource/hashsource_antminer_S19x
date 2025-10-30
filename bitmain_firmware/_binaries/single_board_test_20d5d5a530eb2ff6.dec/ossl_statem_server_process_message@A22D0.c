int __fastcall ossl_statem_server_process_message(int *a1, int *a2)
{
  int result; // r0

  switch ( a1[16] )
  {
    case 20:
      result = sub_A00B8(a1, a2);
      break;
    case 27:
      result = sub_A1C00(a1, (unsigned __int8 **)a2);
      break;
    case 28:
      result = sub_A12BC(a1, a2);
      break;
    case 29:
      result = sub_9B7A4(a1, (unsigned __int8 **)a2);
      break;
    case 30:
      result = sub_A2168(a1, (unsigned __int8 **)a2);
      break;
    case 31:
      result = sub_9BE74(a1, (int)a2);
      break;
    case 32:
      result = sub_9DAFC(a1, a2);
      break;
    case 44:
      result = sub_9BD88(a1, (unsigned __int8 **)a2);
      break;
    case 49:
      result = sub_A2230(a1, (int)a2);
      break;
    default:
      sub_95494(a1, 80, 603, 68, (int)"ssl/statem/statem_srvr.c", 1191);
      result = 0;
      break;
  }
  return result;
}
