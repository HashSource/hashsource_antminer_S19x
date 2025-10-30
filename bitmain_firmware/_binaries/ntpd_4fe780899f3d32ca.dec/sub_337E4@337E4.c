char *__fastcall sub_337E4(int a1)
{
  char *v1; // r5
  int v4; // r7

  switch ( a1 )
  {
    case -1:
      v1 = "AM_ERR";
      break;
    case 0:
      v1 = "AM_NOMATCH";
      break;
    case 1:
      v1 = "AM_PROCPKT";
      break;
    case 2:
      v1 = "AM_BCST";
      break;
    case 3:
      v1 = "AM_FXMIT";
      break;
    case 4:
      v1 = "AM_MANYCAST";
      break;
    case 5:
      v1 = "AM_NEWPASS";
      break;
    case 6:
      v1 = "AM_NEWBCL";
      break;
    case 7:
      v1 = "AM_POSSBCL";
      break;
    default:
      v1 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
      v4 = ((_BYTE)lib_nextbuf + 1) & 0xF;
      memset(v1, 0, 0x80u);
      lib_nextbuf = v4;
      sub_6C054(v1, 128, "AM_#%d", a1);
      break;
  }
  return v1;
}
