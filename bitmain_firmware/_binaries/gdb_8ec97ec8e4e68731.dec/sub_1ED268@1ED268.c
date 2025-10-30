int sub_1ED268()
{
  int v0; // r7
  int v1; // r0
  int v2; // r8
  _DWORD *v3; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  bool v8; // cf
  int v9; // r0
  int v10; // r9
  int v11; // r10
  int v12; // r0
  void *v13; // r4
  int v15; // [sp+0h] [bp-18h] BYREF
  _DWORD v16[2]; // [sp+4h] [bp-14h] BYREF
  _DWORD v17[3]; // [sp+Ch] [bp-Ch] BYREF

  v0 = ps_getpid_0((int)&dword_4878EC);
  v1 = sub_16F654(v0);
  ((void (__fastcall *)(int))loc_1E2770)(v1);
  v2 = dword_488C94;
  if ( ((int (__fastcall *)(int))loc_1E2198)(48) == 2 )
  {
LABEL_13:
    if ( ((int (__fastcall *)(int))loc_1E2198)(72) != 1 && sub_183CF0() == 1 )
    {
      v13 = sub_92E28();
      sub_1E7DEC("k");
      sub_92E40((int)v13);
      return ((int (__fastcall *)(int, _DWORD, _DWORD))loc_230B18)(dword_4878EC, qword_4878F0, HIDWORD(qword_4878F0));
    }
LABEL_17:
    sub_946E0("Can't kill process");
  }
  v15 = v0;
  v3 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      if ( v3[11] != 2 )
      {
        v4 = v3[2];
        v5 = v3[3];
        v6 = v3[4];
        v7 = v3[52] - 4;
        v8 = v3[52] != 4;
        v17[0] = v4;
        v17[1] = v5;
        v17[2] = v6;
        if ( v7 == 1 || !v8 )
        {
          if ( v15 == -1 || (v4 = ps_getpid_0((int)v17), v15 == v4) )
          {
            v9 = sub_16F654(v4);
            ((void (__fastcall *)(int))loc_1E2770)(v9);
            v10 = dword_488C94;
            v11 = ps_getpid_0((int)(v3 + 53));
            if ( ((int (__fastcall *)(int, int))loc_1ED108)(v11, v10) )
              sub_946E0("Can't kill fork child process %d", v11);
          }
        }
      }
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
  }
  sub_1E7CD0((const char **)&off_46DB30);
  v16[1] = 0;
  v16[0] = &v15;
  ((void (__fastcall *)(int, int (__fastcall *)(int, int, _DWORD *, int **), _DWORD *))loc_1E7958)(
    dword_488CE4,
    sub_1ED1D0,
    v16);
  v12 = ((int (__fastcall *)(int, int))loc_1ED108)(v0, v2);
  if ( v12 )
  {
    if ( v12 != -1 )
      goto LABEL_17;
    goto LABEL_13;
  }
  return ((int (__fastcall *)(int, _DWORD, _DWORD))loc_230B18)(dword_4878EC, qword_4878F0, HIDWORD(qword_4878F0));
}
