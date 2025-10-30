int __fastcall sub_4F3C0(double a1, int a2, int a3)
{
  int v4; // r8
  double *v5; // r5
  int v6; // r4
  int v7; // r3
  unsigned int *v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  char v24[80]; // [sp+1Ch] [bp-58h] BYREF

  v4 = LODWORD(a1);
  if ( !a3 || (v5 = *(double **)(a3 + 84)) == 0 || (v6 = *(_DWORD *)v5) == 0 )
  {
    LODWORD(a1) = sub_64E00(3, "NeoClock4X(%d): control: unit invalid/inactive", LODWORD(a1));
    return LODWORD(a1);
  }
  if ( HIDWORD(a1) )
  {
    v7 = ntp_syslogmask & 0x100;
    if ( (*(_BYTE *)(HIDWORD(a1) + 2) & 1) != 0 )
    {
      a1 = *(double *)(HIDWORD(a1) + 40);
      v5[93] = a1;
      if ( !v7 )
        goto LABEL_7;
      LODWORD(a1) = sub_64E00(5, "NeoClock4X(%d): using fudgetime1 with %0.5fs from ntp.conf.", v4, a1);
      v7 = ntp_syslogmask & 0x100;
    }
    if ( ((_BYTE)v5[96] & 1) != 0 )
    {
      if ( v7 )
        LODWORD(a1) = sub_64E00(
                        5,
                        "NeoClock4X(%d): quartz clock is used to synchronize time if radio clock has no reception.",
                        v4);
    }
    else if ( v7 )
    {
      LODWORD(a1) = sub_64E00(5, "NeoClock4X(%d): time is only adjusted with radio signal reception.", v4);
    }
  }
LABEL_7:
  if ( a2 )
  {
    *(_DWORD *)(a2 + 68) = 0;
    *(_BYTE *)a2 = 44;
    v8 = (unsigned int *)(a2 + 68);
    sub_6C054(
      v24,
      79,
      "%04d-%02d-%02d %02d:%02d:%02d.%03d",
      *(_DWORD *)(v6 + 128),
      *(_DWORD *)(v6 + 132),
      *(_DWORD *)(v6 + 136),
      *(_DWORD *)(v6 + 140),
      *(_DWORD *)(v6 + 144),
      *(_DWORD *)(v6 + 148),
      *(_DWORD *)(v6 + 152));
    v9 = sub_243AC((unsigned int *)(a2 + 68), 79, 33);
    sub_6C054(v9, 79, "calc_utc=\"%s\"", v24);
    v10 = sub_243AC((unsigned int *)(a2 + 68), 40, 33);
    sub_6C054(v10, 39, "radiosignal=\"%s\"", (const char *)(v6 + 112));
    v11 = sub_243AC((unsigned int *)(a2 + 68), 40, 33);
    sub_6C054(v11, 39, "antenna1=\"%d\"", *(_DWORD *)(v6 + 120));
    v12 = sub_243AC((unsigned int *)(a2 + 68), 40, 33);
    sub_6C054(v12, 39, "antenna2=\"%d\"", *(_DWORD *)(v6 + 124));
    v13 = sub_243AC((unsigned int *)(a2 + 68), 40, 33);
    v14 = *(unsigned __int8 *)(v6 + 116);
    if ( v14 == 65 )
    {
      sub_6C054(v13, 39, "timesource=\"radio\"");
    }
    else if ( v14 == 67 )
    {
      sub_6C054(v13, 39, "timesource=\"quartz\"");
    }
    else
    {
      sub_6C054(v13, 39, "timesource=\"unknown\"");
    }
    v15 = sub_243AC(v8, 40, 33);
    v16 = *(unsigned __int8 *)(v6 + 118);
    if ( v16 == 73 )
    {
      sub_6C054(v15, 39, "quartzstatus=\"synchronized\"");
    }
    else if ( v16 == 88 )
    {
      sub_6C054(v15, 39, "quartzstatus=\"not synchronized\"");
    }
    else
    {
      sub_6C054(v15, 39, "quartzstatus=\"unknown\"");
    }
    v17 = sub_243AC(v8, 40, 33);
    v18 = *(unsigned __int8 *)(v6 + 117);
    if ( v18 == 83 )
    {
      sub_6C054(v17, 39, "dststatus=\"summer\"");
    }
    else if ( v18 == 87 )
    {
      sub_6C054(v17, 39, "dststatus=\"winter\"");
    }
    else
    {
      sub_6C054(v17, 39, "dststatus=\"unknown\"");
    }
    v19 = sub_243AC(v8, 80, 33);
    sub_6C054(v19, 79, "firmware=\"%s\"", (const char *)(v6 + 24));
    v20 = sub_243AC(v8, 40, 33);
    sub_6C054(v20, 39, "firmwaretag=\"%c\"", *(unsigned __int8 *)(v6 + 104));
    v21 = sub_243AC(v8, 80, 33);
    sub_6C054(v21, 79, "driver version=\"%s\"", "1.16 (2009-12-04)");
    v22 = sub_243AC(v8, 80, 33);
    LODWORD(a1) = sub_6C054(v22, 79, "serialnumber=\"%s\"", (const char *)(v6 + 105));
  }
  return LODWORD(a1);
}
