int __fastcall sub_15DB40(int *a1)
{
  int v2; // r3
  int (__fastcall *v3)(int *, int *); // r3
  int result; // r0
  int v5; // r5
  int v6; // r3
  int *v7; // r0
  int v8; // r7
  int v9; // r6
  int v10; // r0

  if ( a1[5] )
    return a1[6];
  v2 = a1[4];
  if ( !v2 )
  {
    sub_160DD4(a1, a1 + 3);
    v2 = a1[4];
  }
  v3 = *(int (__fastcall **)(int *, int *))(v2 + 28);
  if ( v3 )
    result = v3(a1, a1 + 3);
  else
    result = sub_15ECB4(a1);
  v5 = result;
  a1[6] = result;
  v6 = dword_487724;
  a1[5] = 1;
  if ( v6 )
  {
    v7 = (int *)sub_242FC8(result);
    v8 = *a1;
    v9 = *v7;
    v10 = ((int (__fastcall *)(int))loc_163EB0)(v5);
    sub_2594B0(v9, "{ frame_unwind_arch (next_frame=%d) -> %s }\n", v8, *(const char **)(v10 + 24));
    return a1[6];
  }
  return result;
}
