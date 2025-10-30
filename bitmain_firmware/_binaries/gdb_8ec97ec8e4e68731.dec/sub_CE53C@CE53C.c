int __fastcall sub_CE53C(int a1)
{
  int *v2; // r0
  int v3; // r5
  int v4; // r4
  int v5; // r2
  int v6; // r3
  int v7; // r1
  char *v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r2
  int v13; // r3

  v2 = (int *)sub_242FDC(a1);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *v2;
  sub_B74C8(*(_DWORD *)(v3 + 24));
  sub_CE288(v4);
  v6 = *(_DWORD *)(v3 + 20);
  if ( v6 )
    LOWORD(v7) = 19428;
  else
    LOWORD(v7) = 19404;
  HIWORD(v7) = 55;
  sub_257380(v4, v7, v5, v6);
  if ( sub_2573F0(v4) )
  {
    v8 = sub_9835C(13);
    sub_2575E8(v4, "reason", v8);
    sub_2575E8(v4, "disp", *(_DWORD *)&aStdVectorSymta_0[4 * *(_DWORD *)(v3 + 20) + 2436]);
  }
  sub_257504(v4, "bkptno", *(_DWORD *)(v3 + 24));
  sub_257380(v4, " (forked process ", v9, v10);
  v11 = ps_getpid_0(v3 + 136);
  sub_257504(v4, "newpid", v11);
  sub_257380(v4, "), ", v12, v13);
  return 0;
}
