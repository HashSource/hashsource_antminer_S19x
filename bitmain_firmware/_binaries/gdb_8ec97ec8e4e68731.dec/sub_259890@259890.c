void sub_259890()
{
  void *v0; // r7
  __int64 v1; // kr00_8
  int (*v2)(); // r1
  unsigned __int8 *v3; // r4
  int v4; // r3
  bool v5; // zf
  int v6; // t1
  bool v7; // zf
  int v8; // r0
  __int64 v9; // [sp+0h] [bp-90h] BYREF
  int v10; // [sp+8h] [bp-88h]
  int (**v11)(); // [sp+Ch] [bp-84h]
  int (*v12)(); // [sp+10h] [bp-80h]
  int v13; // [sp+14h] [bp-7Ch]
  _BYTE v14[58]; // [sp+18h] [bp-78h] BYREF
  char v15[62]; // [sp+52h] [bp-3Eh] BYREF

  v0 = sub_9253C((int)nullsub_39, 0);
  sub_33B25C(&v9);
  v1 = v9;
  if ( dword_48968C > 1 )
  {
    sub_259858(asc_3F340C);
    strcpy(v14, "---Type <return> to continue, or q <return> to quit---");
    if ( dword_48968C > 1 )
    {
      *(_DWORD *)&v14[54] = 1880758794;
      strcpy(v15, "rompt-for-continue\n");
    }
  }
  else
  {
    strcpy(v14, "---Type <return> to continue, or q <return> to quit---");
  }
  v2 = off_46D458;
  v11 = &off_46D458;
  off_46D458 = sub_153AE0;
  v10 = dword_46DC04;
  v12 = v2;
  dword_48A9D0 = 0;
  dword_48A9D4 = 0;
  v13 = 0;
  sub_22EFF4();
  sub_1541A4(dword_487668);
  if ( !*(_DWORD *)(dword_487668 + 68) )
    v13 = dword_487668;
  v3 = (unsigned __int8 *)sub_243CB4(v14);
  sub_9253C(2458320, (int)v3);
  sub_33B25C(&v9);
  qword_48A9C8 += v9 - v1;
  if ( dword_48968C > 1 )
    sub_259858(asc_3F3478);
  if ( !v3 )
    goto LABEL_16;
  v4 = *v3;
  v5 = v4 == 9;
  if ( v4 != 9 )
    v5 = v4 == 32;
  if ( v5 )
  {
    do
    {
      v6 = *++v3;
      v4 = v6;
      v7 = v6 == 9;
      if ( v6 != 9 )
        v7 = v4 == 32;
    }
    while ( v7 );
  }
  if ( v4 == 113 )
  {
    v8 = sub_92F84((int)"Quit");
    sub_259B34(v8);
  }
  else
  {
LABEL_16:
    dword_48A9D0 = 0;
    dword_48A9D4 = 0;
    sub_243C34();
    sub_92620(v0);
    if ( v13 )
      sub_1541B8(v13);
    if ( v11 )
      *v11 = v12;
    if ( v10 == 1 )
    {
      sub_22F048();
    }
    else if ( v10 )
    {
      if ( v10 == 2 )
        sub_22EFF4();
    }
    else
    {
      sub_22EF7C();
    }
  }
}
