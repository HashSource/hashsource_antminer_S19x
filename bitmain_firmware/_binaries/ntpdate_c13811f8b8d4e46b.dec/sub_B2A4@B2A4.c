int *__fastcall sub_B2A4(int *a1, int *a2)
{
  __int64 v2; // r6
  int v5; // r0
  int v6; // r12
  int v7; // r3

  v2 = *(_QWORD *)a2;
  if ( a2[1] < 0 )
    v5 = ~sub_1C3E8(~(_DWORD)v2, ~HIDWORD(v2), &loc_15180, 0);
  else
    v5 = sub_1C3E8(v2, HIDWORD(v2), &loc_15180, 0);
  v6 = *a2;
  *a1 = v5;
  v7 = v6 - (_DWORD)&loc_15180 * v5;
  a1[1] = v7;
  return a1;
}
