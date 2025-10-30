int *__fastcall sub_66A00(int *a1, __int64 *a2)
{
  __int64 v4; // r0
  int v5; // r2
  int v7; // r3

  v4 = *a2;
  if ( v4 < 0 )
    v5 = ~sub_8D518(~(_DWORD)v4, ~HIDWORD(v4), &loc_15180, 0);
  else
    v5 = sub_8D518(v4, HIDWORD(v4), &loc_15180, 0);
  v7 = *(_DWORD *)a2 - 86400 * v5;
  *a1 = v5;
  a1[1] = v7;
  return a1;
}
