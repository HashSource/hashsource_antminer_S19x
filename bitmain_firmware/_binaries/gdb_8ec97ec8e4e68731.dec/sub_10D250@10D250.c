int __fastcall sub_10D250(int a1, int **a2, int *a3)
{
  int *v3; // r12
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  __int64 v9; // r0

  v3 = *a2;
  if ( *a2 )
  {
    result = *v3;
    v6 = v3[1];
    v7 = v3[2];
    v8 = v3[3];
    *a3 = *v3;
    a3[1] = v6;
    a3[2] = v7;
    a3[3] = v8;
    a3[4] = v3[4];
  }
  else
  {
    v9 = sub_94700(
           (int)"dummy-frame.c",
           374,
           "%s: Assertion `%s' failed.",
           "void dummy_frame_this_id(frame_info*, void**, frame_id*)",
           "cache != NULL");
    return sub_10D2AC(v9, HIDWORD(v9));
  }
  return result;
}
