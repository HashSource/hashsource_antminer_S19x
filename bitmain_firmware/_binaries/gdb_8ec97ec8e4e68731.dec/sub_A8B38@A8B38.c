int __fastcall sub_A8B38(unsigned int a1, int *a2)
{
  int *v4; // r0
  int v5; // r5
  int v6; // r4
  const char *v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r2
  int v14; // r3
  void *v15; // r8
  int v16; // r0
  int v17; // r0
  int v18; // r9
  int v19; // r6
  _BYTE *v20; // r5
  _DWORD *v21; // r10
  int v22; // r0
  void *v23; // r6
  int v24; // r2
  int v25; // r3
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v29; // r3
  int v30; // r0
  int v31; // r1
  int v32; // r0
  void *v34; // r5
  int v35; // r0
  int v36; // r0
  int v37; // r2
  char *v38; // r3
  char *v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r7
  __int64 v43; // kr00_8
  int v44; // r0
  char v45[256]; // [sp+8h] [bp-100h] BYREF

  v4 = (int *)sub_242FDC(a1);
  v5 = *a2;
  v6 = *v4;
  sub_B74C8(*(_DWORD *)(v5 + 24));
  if ( sub_2573F0(v6) )
  {
    v39 = sub_9835C(0);
    sub_2575E8(v6, "reason", v39);
    v40 = sub_CD274(*(_DWORD *)(v5 + 20));
    sub_2575E8(v6, "disp", v40);
  }
  if ( *(_DWORD *)(v5 + 20) )
    v7 = "\nCatchpoint ";
  else
    v7 = "\nTemporary catchpoint ";
  sub_257380(v6, v7, "\nCatchpoint ", "\nTemporary catchpoint ");
  sub_257504(v6, "bkptno", *(_DWORD *)(v5 + 24));
  v10 = sub_257380(v6, ", ", v8, v9);
  v12 = sub_15F70C(v10, v11);
  sub_15E10C(v12);
  if ( a1 == 2 )
  {
    sub_257380(v6, "failed assertion", v13, v14);
    goto LABEL_8;
  }
  v34 = sub_92E28();
  v35 = sub_183688(v34);
  v36 = sub_9D338(v35);
  if ( a1 == 1 )
  {
    v41 = (*(int (**)(void))(*(_DWORD *)(v36 + 4) + 16))();
  }
  else
  {
    if ( a1 && a1 <= 3 )
    {
      sub_92E40((int)v34);
      goto LABEL_17;
    }
    v41 = sub_14CB9C("e.full_name");
  }
  v42 = v41;
  sub_92E40((int)v34);
  if ( v42 )
  {
    sub_FA844(v42, v45, 255);
    v38 = 0;
    v45[255] = 0;
    goto LABEL_18;
  }
LABEL_17:
  v37 = *(_DWORD *)"n";
  strcpy(v45, "exception");
  v38 = &v45[8];
LABEL_18:
  if ( a1 == 1 )
    sub_257380(v6, "unhandled ", v37, v38);
  sub_2575E8(v6, "exception-name", v45);
LABEL_8:
  v15 = sub_92E28();
  v16 = sub_14CC6C("message");
  if ( !v16 )
    goto LABEL_25;
  v17 = sub_A8AAC(v16);
  v18 = v17;
  if ( v17 )
  {
    v19 = *(_DWORD *)(sub_26BC70(v17) + 20);
    if ( v19 > 0 )
    {
      v20 = sub_93028(v19 + 1);
      v21 = sub_9253C((int)sub_9AD58, (int)v20);
      v22 = ((int (__fastcall *)(int))loc_26C09C)(v18);
      sub_FAA10(v22, v20, v19 + 1);
      v20[v19] = 0;
      sub_92640(v21);
      sub_92E40((int)v15);
      v23 = sub_9253C((int)sub_9AD58, (int)v20);
      sub_257380(v6, " (", v24, v25);
      sub_2575E8(v6, "exception-message", v20);
      sub_257380(v6, ")", v26, v27);
      sub_92620(v23);
      goto LABEL_12;
    }
LABEL_25:
    sub_92E40((int)v15);
    goto LABEL_12;
  }
  v43 = sub_94700(
          (int)"ada-lang.c",
          12391,
          "%s: Assertion `%s' failed.",
          "char* ada_exception_message_1()",
          "e_msg_val != NULL");
  sub_92E40((int)v15);
  if ( HIDWORD(v43) != 1 )
  {
    sub_339E78(v43);
    sub_92E60();
  }
  v44 = sub_339E78(v43);
  sub_339EF8(v44);
LABEL_12:
  v30 = sub_257380(v6, " at ", v28, v29);
  v32 = sub_15F70C(v30, v31);
  sub_A34A0(v32);
  return 0;
}
