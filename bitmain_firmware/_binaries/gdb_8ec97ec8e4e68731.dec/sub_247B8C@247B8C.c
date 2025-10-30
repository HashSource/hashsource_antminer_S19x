void sub_247B8C()
{
  int v0; // r2
  int v1; // r1
  const char *v2; // r0
  int v3; // r0
  __int64 v4; // r4
  __int64 v5; // r8
  int v6; // r7
  int v7; // r2
  int v8; // r10
  __int64 v9; // kr00_8
  int v10; // r5
  int v11; // r2
  unsigned int *v12; // r0
  unsigned int *v13; // r7
  _DWORD *v14; // r5
  unsigned int v15; // r4
  int v16; // t1
  int v17; // r2
  int v18; // r7
  int v19; // r0
  int v20; // r0

  if ( off_489BB4(&dword_4899A0, &dword_48A8C8) != -1 )
  {
    if ( dword_48A8CC )
      goto LABEL_3;
LABEL_40:
    sub_259F10("Run/stop status is unknown.\n");
    v0 = dword_48A8E4;
    v1 = dword_48A8E0;
    if ( dword_48A8E4 >= 0 )
      goto LABEL_7;
LABEL_41:
    if ( v1 < 0 )
      goto LABEL_9;
LABEL_42:
    sub_259F10("Collected %d trace frames.\n", v1);
    goto LABEL_9;
  }
  if ( !dword_48A8C8 )
  {
    sub_259F10("Trace can not be run on this target.\n");
    return;
  }
  sub_259F10("Using a trace file.\n");
  if ( !dword_48A8CC )
    goto LABEL_40;
LABEL_3:
  if ( dword_48A8D0 )
  {
    sub_259F10("Trace is running on the target.\n");
  }
  else
  {
    switch ( dword_48A8D4 )
    {
      case 0:
        sub_259F10("Trace stopped for an unknown reason.\n");
        break;
      case 1:
        sub_259F10("No trace has been run on the target.\n");
        break;
      case 2:
        if ( dword_48A8DC )
          sub_259F10("Trace stopped by a tstop command (%s).\n", (const char *)dword_48A8DC);
        else
          sub_259F10("Trace stopped by a tstop command.\n");
        break;
      case 3:
        sub_259F10("Trace stopped because the buffer was full.\n");
        break;
      case 4:
        sub_259F10("Trace stopped because of disconnection.\n");
        break;
      case 5:
        sub_259F10("Trace stopped by tracepoint %d.\n", dword_48A8D8);
        break;
      case 6:
        if ( dword_48A8D8 )
          sub_259F10("Trace stopped by an error (%s, tracepoint %d).\n", (const char *)dword_48A8DC, dword_48A8D8);
        else
          sub_259F10("Trace stopped by an error (%s).\n", (const char *)dword_48A8DC);
        break;
      default:
        sub_259F10("Trace stopped for some other reason (%d).\n", dword_48A8D4);
        break;
    }
  }
  v0 = dword_48A8E4;
  v1 = dword_48A8E0;
  if ( dword_48A8E4 < 0 )
    goto LABEL_41;
LABEL_7:
  if ( v0 == v1 )
    goto LABEL_42;
  sub_259F10("Buffer contains %d trace frames (of %d created total).\n", v1, v0);
LABEL_9:
  if ( dword_48A8EC >= 0 )
  {
    if ( dword_48A8E8 < 0 )
    {
      sub_259F10("Trace buffer has %d bytes free.\n", dword_48A8EC);
    }
    else
    {
      sub_259F10("Trace buffer has %d bytes of %d bytes free", dword_48A8EC, dword_48A8E8);
      if ( dword_48A8E8 > 0 )
      {
        v20 = sub_347ED4(
                100 * (dword_48A8E8 - dword_48A8EC),
                (unsigned __int64)(100LL * (dword_48A8E8 - dword_48A8EC)) >> 32,
                dword_48A8E8,
                dword_48A8E8 >> 31);
        sub_259F10(" (%d%% full)", v20);
      }
      sub_259F10(".\n");
    }
  }
  if ( dword_48A8F0 )
    LOWORD(v2) = -5988;
  else
    LOWORD(v2) = -5944;
  HIWORD(v2) = 62;
  sub_259F10(v2);
  if ( dword_48A8F4 )
    sub_259F10("Trace buffer is circular.\n");
  if ( dword_48A8F8 && *(_BYTE *)dword_48A8F8 )
    sub_259F10("Trace user is %s.\n", (const char *)dword_48A8F8);
  if ( dword_48A8FC && *(_BYTE *)dword_48A8FC )
    sub_259F10("Trace notes: %s.\n", (const char *)dword_48A8FC);
  if ( dword_48A8BC < 0 )
    sub_259F10("Not looking at any trace frame.\n");
  else
    sub_259F10("Looking at trace frame %d, tracepoint %d.\n", dword_48A8BC, dword_48A8C0);
  v3 = dword_48A900;
  v4 = *(_QWORD *)&dword_48A908;
  v5 = *(_QWORD *)&dword_48A900;
  if ( *(_QWORD *)&dword_48A900 )
  {
    v6 = sub_347ED4(dword_48A900, dword_48A904, &loc_F4240, 0);
    sub_347ED4(v5, HIDWORD(v5), &loc_F4240, 0);
    v8 = v7;
    if ( v4 )
    {
      v9 = v4 - v5;
      v10 = sub_347ED4((int)v4 - (int)v5, (unsigned __int64)(v4 - v5) >> 32, &loc_F4240, 0);
      sub_347ED4(v9, HIDWORD(v9), &loc_F4240, 0);
      v3 = sub_259F10("Trace started at %ld.%06ld secs, stopped %ld.%06ld secs later.\n", v6, v8, v10, v11);
    }
    else
    {
      v3 = sub_259F10("Trace started at %ld.%06ld secs.\n", v6, v7);
    }
  }
  else if ( *(_QWORD *)&dword_48A908 )
  {
    sub_347ED4(dword_48A908, dword_48A90C, &loc_F4240, 0);
    v18 = v17;
    v19 = sub_347ED4(v4, HIDWORD(v4), 1000000, 0);
    v3 = sub_259F10("Trace stopped at %ld.%06ld secs.\n", v19, v18);
  }
  v12 = (unsigned int *)((int (__fastcall *)(int))loc_D20F4)(v3);
  v13 = v12;
  if ( v12 )
  {
    if ( *v12 )
    {
      v14 = v12 + 1;
      v15 = 0;
      do
      {
        v16 = v14[1];
        ++v14;
        off_489BB8(&dword_4899A0, v16, 0);
        ++v15;
      }
      while ( v15 < *v13 );
    }
    free(v13);
  }
}
