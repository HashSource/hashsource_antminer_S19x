int __fastcall sub_CEA6C(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r3
  char *v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r3
  char *v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r3
  char *v20; // r0
  char *v21; // r0
  int v22; // r2
  int v23; // r3
  int v24; // r0
  _DWORD v25[3]; // [sp+Ch] [bp-1Ch] BYREF
  char v26; // [sp+18h] [bp-10h] BYREF

  v2 = *(_DWORD *)sub_242FDC(a1);
  if ( !a1[1] )
  {
    sub_94700(
      (int)"breakpoint.c",
      10255,
      "%s: Assertion `%s' failed.",
      "print_stop_action print_it_watchpoint(bpstat)",
      "bs->bp_location_at != NULL");
    sub_25734C(v2, 0);
    v24 = sub_256478(v25);
    sub_338FFC(v24);
  }
  v3 = (_DWORD *)a1[2];
  sub_B74EC(v3[6]);
  sub_CE288(v2);
  sub_256760(v25);
  v26 = 0;
  v4 = v3[3];
  v25[2] = 0;
  v25[0] = &off_3F2924;
  v25[1] = &v26;
  switch ( v4 )
  {
    case 6:
    case 7:
      if ( sub_2573F0(v2) )
      {
        v5 = sub_9835C(1);
        sub_2575E8(v2, "reason", v5);
      }
      sub_C7A04((int)v3);
      sub_2578AC(v2, 0);
      sub_257380(v2, "\nOld value = ", v6, v7);
      sub_C8D20(a1[5], (int)v25);
      sub_25765C(v2, "old", v25);
      sub_257380(v2, "\nNew value = ", v8, v9);
      sub_C8D20(v3[40], (int)v25);
      sub_25765C(v2, "new", v25);
      goto LABEL_6;
    case 8:
      if ( sub_2573F0(v2) )
      {
        v20 = sub_9835C(2);
        sub_2575E8(v2, "reason", v20);
      }
      sub_C7A04((int)v3);
      sub_2578AC(v2, 0);
      sub_257380(v2, "\nValue = ", v18, v19);
      sub_C8D20(v3[40], (int)v25);
      sub_25765C(v2, "value", v25);
      goto LABEL_6;
    case 9:
      if ( a1[5] )
      {
        if ( sub_2573F0(v2) )
        {
          v13 = sub_9835C(3);
          sub_2575E8(v2, "reason", v13);
        }
        sub_C7A04((int)v3);
        sub_2578AC(v2, 0);
        sub_257380(v2, "\nOld value = ", v14, v15);
        sub_C8D20(a1[5], (int)v25);
        sub_25765C(v2, "old", v25);
        sub_257380(v2, "\nNew value = ", v16, v17);
      }
      else
      {
        sub_C7A04((int)v3);
        if ( sub_2573F0(v2) )
        {
          v21 = sub_9835C(3);
          sub_2575E8(v2, "reason", v21);
        }
        sub_2578AC(v2, 0);
        sub_257380(v2, "\nValue = ", v22, v23);
      }
      sub_C8D20(v3[40], (int)v25);
      sub_25765C(v2, "new", v25);
LABEL_6:
      sub_257380(v2, &word_356638, v10, v11);
      sub_25734C(v2, 0);
      break;
    default:
      break;
  }
  sub_256478(v25);
  return -1;
}
