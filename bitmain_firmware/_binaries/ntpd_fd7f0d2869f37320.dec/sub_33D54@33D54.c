const char *__fastcall sub_33D54(int a1)
{
  const char *result; // r0
  char *v3; // r5
  int v4; // r7

  switch ( a1 )
  {
    case -1:
      result = "AM_ERR";
      break;
    case 0:
      result = "AM_NOMATCH";
      break;
    case 1:
      result = "AM_PROCPKT";
      break;
    case 2:
      result = "AM_BCST";
      break;
    case 3:
      result = "AM_FXMIT";
      break;
    case 4:
      result = "AM_MANYCAST";
      break;
    case 5:
      result = "AM_NEWPASS";
      break;
    case 6:
      result = "AM_NEWBCL";
      break;
    case 7:
      result = "AM_POSSBCL";
      break;
    default:
      v3 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
      v4 = ((_BYTE)lib_nextbuf + 1) & 0xF;
      memset(v3, 0, 0x80u);
      lib_nextbuf = v4;
      sub_6D00C(v3, 128, "AM_#%d", a1);
      result = v3;
      break;
  }
  return result;
}
