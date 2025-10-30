int __fastcall sub_1ED1D0(int a1, int a2, _DWORD *a3, int **a4)
{
  int v5; // lr
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r5
  _DWORD *v11; // r4
  int v12; // r0
  int v13; // r0
  int v14; // r4
  int v15; // r5
  _DWORD v16[4]; // [sp+4h] [bp-10h] BYREF

  v5 = a3[5];
  v6 = a3[1];
  v7 = a3[2];
  v8 = a3[3];
  v9 = **a4;
  v16[0] = v6;
  v16[1] = v7;
  v16[2] = v8;
  if ( (unsigned int)(v5 - 4) <= 1 )
  {
    v11 = a3;
    if ( v9 == -1 || (v6 = ps_getpid_0((int)v16), v9 == v6) )
    {
      v12 = sub_16F654(v6);
      ((void (__fastcall *)(int))loc_1E2770)(v12);
      v13 = (int)(v11 + 6);
      v14 = dword_488C94;
      v15 = ps_getpid_0(v13);
      if ( ((int (__fastcall *)(int, int))loc_1ED108)(v15, v14) )
        sub_946E0("Can't kill fork child process %d", v15);
    }
  }
  return 1;
}
