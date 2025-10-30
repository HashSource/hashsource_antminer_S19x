int __fastcall sub_2404E8(int a1, char a2)
{
  int result; // r0
  int v5; // r6
  int v6; // r2
  int v7; // r3
  char *v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int *v19; // r0
  int v20; // r0

  result = ((int (*)(void))loc_23DBE4)();
  v5 = result;
  if ( (a2 & 4) == 0 )
  {
    if ( *(_DWORD *)(result + 44) == 1 )
      return result;
    if ( (a2 & 8) == 0 )
      return result;
    result = sub_15D504(result);
    if ( !result )
      return result;
LABEL_10:
    v19 = (int *)sub_15F7E8(0);
    return sub_20E8A4(a1, v19, 1, 1u, 1);
  }
  if ( sub_2573F0(a1) )
  {
    v20 = ((int (*)(void))loc_23DBE4)();
    result = sub_257504(a1, "new-thread-id", *(_DWORD *)(v20 + 20));
    v17 = *(_DWORD *)(v5 + 44);
    if ( v17 != 1 )
      goto LABEL_8;
    return sub_257380(a1, "(running)\n", v16, v17);
  }
  sub_257380(a1, "[Switching to thread ", v6, v7);
  v8 = sub_240128(v5);
  sub_2575E8(a1, "new-thread-id", v8);
  sub_257380(a1, " (", v9, v10);
  v11 = sub_23095C(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0));
  sub_257380(a1, v11, v12, v13);
  result = sub_257380(a1, ")]", v14, v15);
  v17 = *(_DWORD *)(v5 + 44);
  if ( v17 == 1 )
    return sub_257380(a1, "(running)\n", v16, v17);
LABEL_8:
  if ( (a2 & 8) != 0 )
  {
    v18 = sub_257380(a1, &word_356638, v16, v17);
    result = sub_15D504(v18);
    if ( result )
      goto LABEL_10;
  }
  return result;
}
