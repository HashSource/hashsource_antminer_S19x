bool __fastcall sub_22CF8(pthread_mutex_t *a1, const char *a2, int a3)
{
  char v7[2048]; // [sp+14h] [bp-808h] BYREF
  int v8; // [sp+814h] [bp-8h]

  v8 = 3;
  if ( byte_92090 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v7, 0x800u, "SEND: %s", a2);
    sub_1E4EC(7, v7, 0);
  }
  sub_1FD4C(a1 + 30, "util.c", "stratum_send", 1711);
  if ( a1[27].__size[9] )
    v8 = sub_229A4((int)a1, a2, a3);
  sub_1FE7C(a1 + 30, "util.c", "stratum_send", 1717);
  switch ( v8 )
  {
    case 2:
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v7, "Failed to send in stratum_send");
        sub_1E4EC(7, v7, 0);
      }
      goto LABEL_17;
    case 3:
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v7, "Stratum send failed due to no pool stratum_active");
        sub_1E4EC(7, v7, 0);
      }
      break;
    case 1:
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(v7, 0x800u, "Write select failed on pool %d sock", a1->__lock);
        sub_1E4EC(7, v7, 0);
      }
LABEL_17:
      sub_29EF4(a1);
      break;
  }
  return v8 == 0;
}
