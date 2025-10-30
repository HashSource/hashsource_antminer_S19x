int sub_4A5C8()
{
  __int64 v0; // d17
  double v1; // d8
  double v2; // r0
  const char *v3; // r3
  __int64 v4; // d16
  double v5; // d8
  __int64 v6; // r0
  double v7; // r0
  char v9[2048]; // [sp+10h] [bp-844h] BYREF
  int v10; // [sp+810h] [bp-44h]
  int v11; // [sp+814h] [bp-40h]
  int v12; // [sp+818h] [bp-3Ch]
  int v13; // [sp+81Ch] [bp-38h]
  double v14; // [sp+820h] [bp-34h]
  double v15; // [sp+828h] [bp-2Ch]
  double v16; // [sp+830h] [bp-24h]
  int v17; // [sp+838h] [bp-1Ch]
  int v18; // [sp+83Ch] [bp-18h]
  int v19; // [sp+840h] [bp-14h]
  int i; // [sp+844h] [bp-10h]

  v10 = dword_88070 - dword_88068;
  v11 = dword_88074 - dword_8806C;
  if ( dword_88074 - dword_8806C < 0 )
  {
    --v10;
    v11 += 1000000;
  }
  v19 = v10 / 3600;
  v18 = v10 % 3600 / 60;
  v17 = v10 % 60;
  v16 = sub_68E84(LODWORD(dbl_920B8), HIDWORD(dbl_920B8)) / dbl_87478 * 60.0;
  v15 = sub_68E84(LODWORD(dbl_91F90), HIDWORD(dbl_91F90)) / dbl_87478 * 60.0;
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    strcpy(v9, "\nSummary of runtime statistics:\n");
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Started at %s", byte_880D8);
    sub_1E4EC(4, v9, 0);
  }
  if ( dword_92028 == 1 && (byte_91F58 || byte_87769 || dword_8697C > 3) )
  {
    snprintf(v9, 0x800u, "Pool: %s", *(const char **)(*(_DWORD *)dword_920CC + 164));
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Runtime: %d hrs : %d mins : %d secs", v19, v18, v17);
    sub_1E4EC(4, v9, 0);
  }
  v14 = dbl_91F50 / dbl_87478;
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Average hashrate: %.1f Mhash/s", v14);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Solved blocks: %d", dword_9523C);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Best share difficulty: %s", a0_1);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Share submissions: %lld", *(_QWORD *)&dbl_920B8 + *(_QWORD *)&dbl_94180);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Accepted shares: %lld", dbl_920B8);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Rejected shares: %lld", dbl_94180);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Accepted difficulty shares: %1.f", dbl_940F0);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Rejected difficulty shares: %1.f", dbl_94178);
    sub_1E4EC(4, v9, 0);
  }
  if ( (*(_QWORD *)&dbl_920B8 || *(_QWORD *)&dbl_94180) && (byte_91F58 || byte_87769 || dword_8697C > 3) )
  {
    v0 = vshld_n_s64(3LL * *(_QWORD *)&dbl_94180, 5u);
    v1 = sub_68E84(
           3 * LODWORD(dbl_94180) + (int)v0 + LODWORD(dbl_94180),
           (unsigned __int64)(3LL * *(_QWORD *)&dbl_94180 + v0 + *(_QWORD *)&dbl_94180) >> 32);
    v2 = sub_68E84(LODWORD(dbl_94180) + LODWORD(dbl_920B8), (*(_QWORD *)&dbl_94180 + *(_QWORD *)&dbl_920B8) >> 32);
    snprintf(v9, 0x800u, "Reject ratio: %.1f%%", v1 / v2);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Hardware errors: %d", dword_95228);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Utility (accepted shares / min): %.2f/min", v16);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Work Utility (diff1 shares solved / min): %.2f/min\n", v15);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Stale submissions discarded due to new blocks: %lld", dbl_95490);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Unable to get work from server occasions: %d", dword_920D0);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Work items generated locally: %d", dword_920DC);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "Submitting work remotely delay occasions: %d", dword_91F74);
    sub_1E4EC(4, v9, 0);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v9, 0x800u, "New blocks detected on network: %d\n", dword_953A0);
    sub_1E4EC(4, v9, 0);
  }
  if ( dword_92028 > 1 )
  {
    for ( i = 0; i < dword_92028; ++i )
    {
      v13 = *(_DWORD *)(dword_920CC + 4 * i);
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, "Pool: %s", *(const char **)(v13 + 164));
        sub_1E4EC(4, v9, 0);
      }
      if ( *(_DWORD *)(v13 + 32) && (byte_91F58 || byte_87769 || dword_8697C > 3) )
      {
        if ( *(int *)(v13 + 32) <= 1 )
          v3 = byte_6F818;
        else
          v3 = "S";
        snprintf(v9, 0x800u, "SOLVED %d BLOCK%s!", *(_DWORD *)(v13 + 32), v3);
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Share submissions: %lld", *(_QWORD *)(v13 + 8) + *(_QWORD *)(v13 + 16));
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Accepted shares: %lld", *(_QWORD *)(v13 + 8));
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Rejected shares: %lld", *(_QWORD *)(v13 + 16));
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Accepted difficulty shares: %1.f", *(double *)(v13 + 72));
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Rejected difficulty shares: %1.f", *(double *)(v13 + 80));
        sub_1E4EC(4, v9, 0);
      }
      if ( (*(_QWORD *)(v13 + 8) || *(_QWORD *)(v13 + 16)) && (byte_91F58 || byte_87769 || dword_8697C > 3) )
      {
        v4 = 3LL * *(_QWORD *)(v13 + 16) + vshld_n_s64(3LL * *(_QWORD *)(v13 + 16), 5u);
        v5 = sub_68E84((int)v4 + *(_DWORD *)(v13 + 16), (unsigned __int64)(v4 + *(_QWORD *)(v13 + 16)) >> 32);
        v6 = *(_QWORD *)(v13 + 16) + *(_QWORD *)(v13 + 8);
        v7 = sub_68E84(v6, HIDWORD(v6));
        snprintf(v9, 0x800u, " Reject ratio: %.1f%%", v5 / v7);
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Items worked on: %d", *(_DWORD *)(v13 + 68));
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Stale submissions discarded due to new blocks: %d", *(_DWORD *)(v13 + 120));
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Unable to get work from server occasions: %d", *(_DWORD *)(v13 + 128));
        sub_1E4EC(4, v9, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, " Submitting work remotely delay occasions: %d\n", *(_DWORD *)(v13 + 132));
        sub_1E4EC(4, v9, 0);
      }
    }
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    strcpy(v9, "Summary of per device statistics:\n");
    sub_1E4EC(4, v9, 0);
  }
  for ( i = 0; i < dword_941A8; ++i )
  {
    v12 = sub_2EF94(i);
    *(_DWORD *)(*(_DWORD *)(v12 + 4) + 20) = 312776;
    *(_DWORD *)(*(_DWORD *)(v12 + 4) + 24) = 312812;
    sub_4A528(v12);
  }
  if ( dword_87FBC )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      snprintf(v9, 0x800u, "Mined %.0f accepted shares of %d requested\n", dbl_940F0, dword_87FBC);
      sub_1E4EC(4, v9, 0);
    }
    if ( (double)dword_87FBC > dbl_940F0 && (byte_91F58 || byte_87769 || dword_8697C > 3) )
    {
      snprintf(v9, 0x800u, "WARNING - Mined only %.0f shares of %d requested.", dbl_940F0, dword_87FBC);
      sub_1E4EC(4, v9, 0);
    }
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    strcpy(v9, " ");
    sub_1E4EC(4, v9, 0);
  }
  fflush((FILE *)stderr);
  return fflush((FILE *)stdout);
}
