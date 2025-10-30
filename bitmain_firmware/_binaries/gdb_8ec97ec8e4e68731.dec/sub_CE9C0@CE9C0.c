int __fastcall sub_CE9C0(int a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)sub_242FDC(a1);
  sub_B74C8(*(_DWORD *)(v1 + 24));
  sub_CE288(v2);
  v4 = *(_DWORD *)(v1 + 20);
  if ( v4 )
    LOWORD(v5) = 19428;
  else
    LOWORD(v5) = 19404;
  HIWORD(v5) = 55;
  sub_257380(v2, v5, v3, v4);
  sub_257504(v2, "bkptno", *(_DWORD *)(v1 + 24));
  sub_257380(v2, &word_356638, v6, v7);
  if ( sub_2573F0(v2) )
    sub_2575E8(v2, "disp", *(_DWORD *)&aStdVectorSymta_0[4 * *(_DWORD *)(v1 + 20) + 2436]);
  sub_C7B74(1);
  return 0;
}
