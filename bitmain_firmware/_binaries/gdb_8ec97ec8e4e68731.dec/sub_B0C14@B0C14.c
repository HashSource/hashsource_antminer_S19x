int __fastcall sub_B0C14(_BYTE *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r6
  int v6; // r0
  int v7; // r5
  int v8; // r0
  _DWORD *v9; // r3
  _DWORD *v10; // r4
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v14; // r1

  v2 = *(_DWORD *)sub_242FDC(a1);
  v3 = ((int (*)(void))loc_B0744)();
  if ( !v3 )
    return sub_25738C(v2, "Your application does not use any Ada tasks.\n");
  if ( a1 && *a1 )
  {
    v5 = sub_183688(v3);
    v6 = sub_14CC6C(a1);
    v7 = sub_26EB1C(v6);
    v8 = sub_AFAEC(v5);
    if ( v7 <= 0 || (v9 = *(_DWORD **)(v8 + 20)) == 0 || *v9 < (unsigned int)v7 )
      sub_946E0("Task ID %d not known.  Use the \"info tasks\" command to\nsee the IDs of currently known tasks", v7);
    if ( *v9 <= (unsigned int)(v7 - 1) )
    {
      sub_15B78(1308);
    }
    else
    {
      v10 = &v9[75 * v7 - 73];
      if ( v9[75 * v7 - 4] == 2 )
        sub_946E0("Cannot switch to task %d: Task is no longer running", v7);
      sub_231EA4();
      if ( sub_23E408(*v10, v10[1], v10[2]) )
      {
        sub_23F9F0(*v10, v10[1], v10[2]);
        v11 = sub_15F7E8(0);
        sub_A34A0(v11);
        sub_259F10("[Switching to task %d]\n", v7);
        v12 = sub_15F7E8(0);
        v13 = sub_15F7E8(0);
        v14 = sub_15DA7C(v13);
        return sub_20E7E8(v12, v14, 1);
      }
    }
    sub_946E0("Unable to compute thread ID for task %d.\nCannot switch to this task.", v7);
  }
  v4 = ((int (__fastcall *)(int, int, int))loc_AFCBC)(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( v4 )
    return sub_259F10("[Current task is %d]\n", v4);
  else
    return sub_259F10("[Current task is unknown]\n");
}
