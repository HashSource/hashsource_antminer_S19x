int __fastcall sub_4AA24(int a1, int a2)
{
  int v3; // r7
  int v4; // r0
  __int64 v5; // r0
  int *v6; // r4
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r5
  int v11; // r0
  _DWORD *v12; // r4
  int result; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v17; // [sp+4h] [bp-24h] BYREF
  int v18; // [sp+8h] [bp-20h] BYREF
  _DWORD v19[3]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v20[4]; // [sp+18h] [bp-10h] BYREF

  if ( !sub_22EBBC(a1) )
    sub_946E0("The program is not being run.");
  sub_240794();
  v20[0] = 0;
  sub_23E4A0(sub_4A5EC, v20);
  if ( v20[0] > 1 )
    sub_946E0("checkpoint: can't checkpoint multiple threads.");
  sub_1B141C((int)v20, "fork");
  if ( !v20[0] || (v3 = sub_2611C4("fork", &v17)) == 0 )
  {
    sub_1B141C((int)v20, "_fork");
    if ( !v20[0] || (v3 = sub_2611C4("fork", &v17)) == 0 )
      sub_946E0("checkpoint: can't find fork function in inferior.");
  }
  v4 = sub_1B7250(v17);
  v5 = sub_1780B4(v4);
  v6 = &dword_4726BC;
  v18 = sub_26DAF4(*(_DWORD *)(v5 + 12), HIDWORD(v5), 0, 0);
  v7 = ps_getpid_0(&dword_4878EC);
  v8 = dword_4726C0;
  dword_4726C0 = v7;
  v9 = sub_17E6EC(v3, 0, 0, &v18);
  dword_4726C0 = v8;
  v18 = v9;
  if ( !v9 )
    sub_946E0("checkpoint: call_function_by_hand returned null.");
  v10 = sub_26EB1C(v9);
  sub_188284(v19, v20);
  do
  {
    v6 = (int *)*v6;
    if ( !v6 )
    {
      if ( a2 )
      {
        sub_259F10("checkpoint %d: fork returned pid %ld.\n", -1, v10);
        if ( dword_48A514 )
        {
          v6 = 0;
          goto LABEL_20;
        }
      }
      goto LABEL_10;
    }
  }
  while ( v10 != ps_getpid_0(v6 + 1) );
  if ( !a2 )
    goto LABEL_16;
  sub_259F10("checkpoint %d: fork returned pid %ld.\n", v6[7], v10);
  if ( !dword_48A514 )
    goto LABEL_16;
LABEL_20:
  v16 = sub_98F68(v19);
  if ( !v16 )
    v16 = ps_getpid_0(v19);
  sub_259F10("   gdb says parent = %ld.\n", v16);
  if ( !v6 )
LABEL_10:
    sub_946E0("Failed to find new fork");
LABEL_16:
  v11 = (int)v6;
  v12 = v6 + 4;
  sub_4A9C4(v11);
  result = v19[0];
  v14 = v19[1];
  v15 = v19[2];
  *v12 = v19[0];
  v12[1] = v14;
  v12[2] = v15;
  return result;
}
