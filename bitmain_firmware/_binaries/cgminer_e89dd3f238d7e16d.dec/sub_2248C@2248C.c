bool __fastcall sub_2248C(int a1, const char *a2, int a3)
{
  char v7[2048]; // [sp+14h] [bp-808h] BYREF
  int v8; // [sp+814h] [bp-8h]

  v8 = 3;
  if ( byte_90EF8 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v7, 0x800u, "SEND: %s", a2);
    sub_1DB6C(7, v7, 0);
  }
  sub_1F44C((pthread_mutex_t *)(a1 + 704), "util.c", "stratum_send", 1711);
  if ( *(_BYTE *)(a1 + 641) )
    v8 = sub_22178(a1, a2, a3);
  sub_1F584((pthread_mutex_t *)(a1 + 704), "util.c", "stratum_send", 1717);
  switch ( v8 )
  {
    case 2:
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v7, "Failed to send in stratum_send");
        sub_1DB6C(7, v7, 0);
      }
      goto LABEL_17;
    case 3:
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v7, "Stratum send failed due to no pool stratum_active");
        sub_1DB6C(7, v7, 0);
      }
      break;
    case 1:
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(v7, 0x800u, "Write select failed on pool %d sock", *(_DWORD *)a1);
        sub_1DB6C(7, v7, 0);
      }
LABEL_17:
      sub_28EB4(a1);
      break;
  }
  return v8 == 0;
}
