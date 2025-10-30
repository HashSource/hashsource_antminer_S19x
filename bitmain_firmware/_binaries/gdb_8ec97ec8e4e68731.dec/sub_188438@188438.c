int __fastcall sub_188438(int a1, int a2)
{
  int v4; // r7
  int v5; // r5
  int v6; // r2
  int v7; // r3
  char *v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r3
  char *v19; // r1
  int v20; // r0
  int v21; // r2
  int v22; // r3
  char *v23; // r0
  int v24; // r2
  int v25; // r3
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v29; // r3
  char *v31; // r0
  char *v32; // r0
  _DWORD v33[4]; // [sp+4h] [bp-10h] BYREF

  v4 = sub_183688();
  sub_98F50(v33, *(_DWORD *)(v4 + 12));
  v5 = sub_23095C(v33[0], v33[1], v33[2]);
  sub_B7550(a2);
  if ( a2 )
  {
    if ( sub_2573F0(a1) )
    {
      v31 = sub_9835C(9);
      sub_2575E8(a1, "reason", v31);
    }
    sub_257380(a1, "[Inferior ", v6, v7);
    v8 = sub_988AC(*(int *)(v4 + 8));
    sub_257380(a1, v8, v9, v10);
    sub_257380(a1, " (", v11, v12);
    sub_257380(a1, v5, v13, v14);
    sub_257380(a1, ") exited with code ", v15, v16);
    sub_257694(a1, "exit-code", "0%o", a2);
    v19 = "]\n";
    v20 = a1;
  }
  else
  {
    if ( sub_2573F0(a1) )
    {
      v32 = sub_9835C(10);
      sub_2575E8(a1, "reason", v32);
    }
    sub_257380(a1, "[Inferior ", v21, v22);
    v23 = sub_988AC(*(int *)(v4 + 8));
    sub_257380(a1, v23, v24, v25);
    sub_257380(a1, " (", v26, v27);
    sub_257380(a1, v5, v28, v29);
    v19 = ") exited normally]\n";
    v20 = a1;
  }
  return sub_257380(v20, v19, v17, v18);
}
