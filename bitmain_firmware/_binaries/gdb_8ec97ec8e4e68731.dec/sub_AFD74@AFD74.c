const char *sub_AFD74()
{
  int v0; // r6
  int v1; // r7
  int v2; // r9
  int v3; // r8
  int v4; // r0
  __int64 v5; // r4
  int v6; // r6
  int v7; // r8
  int v9; // r11
  int v10; // r10
  int v11; // r9
  int v12; // r7
  int v13; // r2
  int v14; // [sp+Ch] [bp-38h]
  int v15; // [sp+10h] [bp-34h]
  int v16; // [sp+14h] [bp-30h]
  int v17; // [sp+18h] [bp-2Ch]
  int v18; // [sp+1Ch] [bp-28h]
  int v19; // [sp+20h] [bp-24h]
  int v20; // [sp+24h] [bp-20h]
  int v21; // [sp+28h] [bp-1Ch]
  int v22; // [sp+2Ch] [bp-18h]
  int v23; // [sp+30h] [bp-14h]
  int v24; // [sp+34h] [bp-10h]
  _DWORD v25[3]; // [sp+38h] [bp-Ch] BYREF

  sub_21D618(v25, "system__tasking__ada_task_control_block___XVE", 0, 2, 2, 0);
  v0 = v25[0];
  sub_21D618(v25, "system__tasking__common_atcb", 0, 2, 2, 0);
  v1 = v25[0];
  sub_21D618(v25, "system__task_primitives__private_data", 0, 2, 2, 0);
  v2 = v25[0];
  sub_21D618(v25, "system__tasking__entry_call_record", 0, 2, 2, 0);
  v3 = v25[0];
  if ( v0 && (v4 = *(_DWORD *)(v0 + 24)) != 0 )
  {
    LODWORD(v5) = sub_A9F40(v4, 0, 0, 0, 0);
  }
  else
  {
    sub_21D618(v25, "system__tasking__ada_task_control_block", 0, 2, 2, 0);
    if ( !v25[0] )
      return "Cannot find Ada_Task_Control_Block type";
    LODWORD(v5) = *(_DWORD *)(v25[0] + 24);
    if ( !(_DWORD)v5 )
      return "Cannot find Ada_Task_Control_Block type";
  }
  if ( !v1 )
    return "Cannot find Common_ATCB type";
  HIDWORD(v5) = *(_DWORD *)(v1 + 24);
  if ( !HIDWORD(v5) )
    return "Cannot find Common_ATCB type";
  if ( !v2 )
    return "Cannot find Private_Data type";
  v6 = *(_DWORD *)(v2 + 24);
  if ( !v6 )
    return "Cannot find Private_Data type";
  if ( !v3 )
    return "Cannot find Entry_Call_Record type";
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7 )
    return "Cannot find Entry_Call_Record type";
  v9 = sub_9E570(v5, "common", 0);
  v14 = sub_9E570(v5, "entry_calls", 1);
  v15 = sub_9E570(v5, "atc_nesting_level", 1);
  v16 = sub_9E570(SHIDWORD(v5), "state", 0);
  v17 = sub_9E570(SHIDWORD(v5), "parent", 1);
  v18 = sub_9E570(SHIDWORD(v5), "base_priority", 0);
  v19 = sub_9E570(SHIDWORD(v5), "task_image", 1);
  v20 = sub_9E570(SHIDWORD(v5), "task_image_len", 1);
  v21 = sub_9E570(SHIDWORD(v5), "activation_link", 1);
  v22 = sub_9E570(SHIDWORD(v5), "call", 1);
  v23 = sub_9E570(SHIDWORD(v5), "ll", 0);
  v10 = sub_9E570(SHIDWORD(v5), "base_cpu", 0);
  v11 = sub_9E570(v6, "thread", 0);
  v12 = sub_9E570(v6, "lwp", 1);
  v24 = sub_9E570(v7, "self", 0);
  if ( v12 < 0 )
    v12 = sub_9E570(v6, "thread_id", 1);
  v13 = sub_AFB54(dword_487D2C);
  *(_QWORD *)(v13 + 4) = v5;
  *(_DWORD *)(v13 + 12) = v6;
  *(_DWORD *)(v13 + 24) = v14;
  *(_DWORD *)(v13 + 16) = v7;
  *(_DWORD *)(v13 + 20) = v9;
  *(_DWORD *)(v13 + 28) = v15;
  *(_DWORD *)(v13 + 64) = v10;
  *(_DWORD *)(v13 + 68) = v11;
  *(_DWORD *)(v13 + 32) = v16;
  *(_DWORD *)(v13 + 72) = v12;
  *(_DWORD *)v13 = 1;
  *(_DWORD *)(v13 + 36) = v17;
  *(_DWORD *)(v13 + 40) = v18;
  *(_DWORD *)(v13 + 44) = v19;
  *(_DWORD *)(v13 + 48) = v20;
  *(_DWORD *)(v13 + 52) = v21;
  *(_DWORD *)(v13 + 56) = v22;
  *(_DWORD *)(v13 + 60) = v23;
  *(_DWORD *)(v13 + 76) = v24;
  return 0;
}
