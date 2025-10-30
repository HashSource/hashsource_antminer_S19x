int __fastcall sub_1D990(unsigned int *a1, int a2, int a3, int a4)
{
  const char *v4; // r7
  int v6; // r2
  int v8; // r6
  unsigned int v9; // r2
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  const char *v16; // r0
  const char *v17; // r0
  const char *v18; // r0
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  const char *v22; // r0
  const char *v23; // r0
  const char *v24; // r0
  char **v25; // r1
  _BOOL4 v26; // r3
  int v28; // [sp+Ch] [bp-4h] BYREF

  v6 = *(_DWORD *)(a3 + 244);
  v8 = a4;
  v28 = a2;
  if ( v6 )
  {
    v9 = *(_DWORD *)(a3 + 248);
    if ( v9 > 8 )
      v4 = (const char *)45680;
    else
      a4 = 41852;
    if ( v9 > 8 )
      HIWORD(v4) = 4;
    else
      HIWORD(a4) = 4;
    if ( v9 <= 8 )
      v4 = *(const char **)(a4 + 4 * v9 + 156);
  }
  else
  {
    v4 = "None";
  }
  v10 = sub_18850(0, "NOTIFY", 6, (const char *)&v28, 0);
  v11 = sub_18850((int)v10, "Name", 1, *(const char **)(*(_DWORD *)(a3 + 4) + 8), 0);
  v12 = sub_18850((int)v11, "ID", 6, (const char *)(a3 + 8), 0);
  v13 = sub_18850((int)v12, "Last Well", 16, (const char *)(a3 + 240), 0);
  v14 = sub_18850((int)v13, "Last Not Well", 16, (const char *)(a3 + 244), 0);
  v15 = sub_18850((int)v14, "Reason Not Well", 1, v4, 0);
  v16 = sub_18850((int)v15, "*Thread Fail Init", 6, (const char *)(a3 + 252), 0);
  v17 = sub_18850((int)v16, "*Thread Zero Hash", 6, (const char *)(a3 + 256), 0);
  v18 = sub_18850((int)v17, "*Thread Fail Queue", 6, (const char *)(a3 + 260), 0);
  v19 = sub_18850((int)v18, "*Dev Sick Idle 60s", 6, (const char *)(a3 + 264), 0);
  v20 = sub_18850((int)v19, "*Dev Dead Idle 600s", 6, (const char *)(a3 + 268), 0);
  v21 = sub_18850((int)v20, "*Dev Nostart", 6, (const char *)(a3 + 272), 0);
  v22 = sub_18850((int)v21, "*Dev Over Heat", 6, (const char *)(a3 + 276), 0);
  v23 = sub_18850((int)v22, "*Dev Thermal Cutoff", 6, (const char *)(a3 + 280), 0);
  v24 = sub_18850((int)v23, "*Dev Comms Error", 6, (const char *)(a3 + 284), 0);
  v25 = (char **)sub_18850((int)v24, "*Dev Throttle", 6, (const char *)(a3 + 288), 0);
  if ( v8 )
    v26 = v28 > 0;
  else
    v26 = 0;
  return sub_17D00(a1, v25, v8, v26);
}
