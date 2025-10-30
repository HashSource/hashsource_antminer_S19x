int sub_49874()
{
  double v0; // d8
  double v1; // r0
  const char *v2; // r3
  double v3; // d8
  __int64 v4; // kr00_8
  double v5; // r0
  char v7[2048]; // [sp+38h] [bp-85Ch] BYREF
  int v8; // [sp+838h] [bp-5Ch]
  int v9; // [sp+83Ch] [bp-58h]
  int v10; // [sp+840h] [bp-54h]
  int v11; // [sp+844h] [bp-50h]
  double v12; // [sp+848h] [bp-4Ch]
  double v13; // [sp+850h] [bp-44h]
  double v14; // [sp+858h] [bp-3Ch]
  int v15; // [sp+860h] [bp-34h]
  int v16; // [sp+864h] [bp-30h]
  int v17; // [sp+868h] [bp-2Ch]
  int i; // [sp+86Ch] [bp-28h]

  v8 = dword_86ED8 - dword_86ED0;
  v9 = dword_86EDC - dword_86ED4;
  if ( dword_86EDC - dword_86ED4 < 0 )
  {
    --v8;
    v9 += 1000000;
  }
  v17 = v8 / 3600;
  v16 = v8 % 3600 / 60;
  v15 = v8 % 60;
  v14 = sub_68214(qword_90F20, HIDWORD(qword_90F20)) / dbl_862E0 * 60.0;
  v13 = sub_68214(qword_90DF8, HIDWORD(qword_90DF8)) / dbl_862E0 * 60.0;
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    strcpy(v7, "\nSummary of runtime statistics:\n");
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Started at %s", byte_86F40);
    sub_1DB6C(4, v7, 0);
  }
  if ( dword_90E90 == 1 && (byte_90DC0 || byte_865D1 || dword_857E4 > 3) )
  {
    snprintf(v7, 0x800u, "Pool: %s", *(const char **)(*(_DWORD *)dword_90F34 + 164));
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Runtime: %d hrs : %d mins : %d secs", v17, v16, v15);
    sub_1DB6C(4, v7, 0);
  }
  v12 = dbl_90DB8 / dbl_862E0;
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Average hashrate: %.1f Mhash/s", v12);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Solved blocks: %d", dword_940A4);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Best share difficulty: %s", a0_1);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Share submissions: %lld", qword_90F20 + qword_92FE8);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Accepted shares: %lld", qword_90F20);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Rejected shares: %lld", qword_92FE8);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Accepted difficulty shares: %1.f", dbl_92F58);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Rejected difficulty shares: %1.f", dbl_92FE0);
    sub_1DB6C(4, v7, 0);
  }
  if ( (qword_90F20 || qword_92FE8) && (byte_90DC0 || byte_865D1 || dword_857E4 > 3) )
  {
    v0 = sub_68214(100 * (int)qword_92FE8, (unsigned __int64)(100 * qword_92FE8) >> 32);
    v1 = sub_68214((int)qword_90F20 + (int)qword_92FE8, (unsigned __int64)(qword_90F20 + qword_92FE8) >> 32);
    snprintf(v7, 0x800u, "Reject ratio: %.1f%%", v0 / v1);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Hardware errors: %d", dword_94090);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Utility (accepted shares / min): %.2f/min", v14);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Work Utility (diff1 shares solved / min): %.2f/min\n", v13);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Stale submissions discarded due to new blocks: %lld", *(_QWORD *)&dword_942F8);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Unable to get work from server occasions: %d", dword_90F38);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Work items generated locally: %d", dword_90F44);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "Submitting work remotely delay occasions: %d", dword_90DDC);
    sub_1DB6C(4, v7, 0);
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    snprintf(v7, 0x800u, "New blocks detected on network: %d\n", dword_94208);
    sub_1DB6C(4, v7, 0);
  }
  if ( dword_90E90 > 1 )
  {
    for ( i = 0; i < dword_90E90; ++i )
    {
      v11 = *(_DWORD *)(dword_90F34 + 4 * i);
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, "Pool: %s", *(const char **)(v11 + 164));
        sub_1DB6C(4, v7, 0);
      }
      if ( *(_DWORD *)(v11 + 32) && (byte_90DC0 || byte_865D1 || dword_857E4 > 3) )
      {
        if ( *(int *)(v11 + 32) <= 1 )
          v2 = byte_6E658;
        else
          v2 = "S";
        snprintf(v7, 0x800u, "SOLVED %d BLOCK%s!", *(_DWORD *)(v11 + 32), v2);
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Share submissions: %lld", *(_QWORD *)(v11 + 8) + *(_QWORD *)(v11 + 16));
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Accepted shares: %lld", *(_QWORD *)(v11 + 8));
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Rejected shares: %lld", *(_QWORD *)(v11 + 16));
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Accepted difficulty shares: %1.f", *(double *)(v11 + 72));
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Rejected difficulty shares: %1.f", *(double *)(v11 + 80));
        sub_1DB6C(4, v7, 0);
      }
      if ( (*(_QWORD *)(v11 + 8) || *(_QWORD *)(v11 + 16)) && (byte_90DC0 || byte_865D1 || dword_857E4 > 3) )
      {
        v3 = sub_68214(100 * *(_DWORD *)(v11 + 16), (unsigned __int64)(100LL * *(_QWORD *)(v11 + 16)) >> 32);
        v4 = *(_QWORD *)(v11 + 8) + *(_QWORD *)(v11 + 16);
        v5 = sub_68214(v4, HIDWORD(v4));
        snprintf(v7, 0x800u, " Reject ratio: %.1f%%", v3 / v5);
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Items worked on: %d", *(_DWORD *)(v11 + 68));
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Stale submissions discarded due to new blocks: %d", *(_DWORD *)(v11 + 120));
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Unable to get work from server occasions: %d", *(_DWORD *)(v11 + 128));
        sub_1DB6C(4, v7, 0);
      }
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
      {
        snprintf(v7, 0x800u, " Submitting work remotely delay occasions: %d\n", *(_DWORD *)(v11 + 132));
        sub_1DB6C(4, v7, 0);
      }
    }
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    strcpy(v7, "Summary of per device statistics:\n");
    sub_1DB6C(4, v7, 0);
  }
  for ( i = 0; i < dword_93010; ++i )
  {
    v10 = sub_2DF88(i);
    *(_DWORD *)(*(_DWORD *)(v10 + 4) + 20) = 309456;
    *(_DWORD *)(*(_DWORD *)(v10 + 4) + 24) = 309496;
    sub_497D0(v10);
  }
  if ( dword_86E24 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
    {
      snprintf(v7, 0x800u, "Mined %.0f accepted shares of %d requested\n", dbl_92F58, dword_86E24);
      sub_1DB6C(4, v7, 0);
    }
    if ( (double)dword_86E24 > dbl_92F58 && (byte_90DC0 || byte_865D1 || dword_857E4 > 3) )
    {
      snprintf(v7, 0x800u, "WARNING - Mined only %.0f shares of %d requested.", dbl_92F58, dword_86E24);
      sub_1DB6C(4, v7, 0);
    }
  }
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 3 )
  {
    strcpy(v7, " ");
    sub_1DB6C(4, v7, 0);
  }
  fflush((FILE *)stderr);
  return fflush((FILE *)stdout);
}
