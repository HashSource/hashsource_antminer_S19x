__int64 __fastcall sub_92FEC(int a1, int a2)
{
  int v4; // r0
  __int64 v5; // [sp+0h] [bp-8h] BYREF

  if ( ((int (__fastcall *)(int, int, __int64 *))loc_1DF9FC)(a1, a2, &v5) != -1 )
    return v5;
  v4 = sub_92F64(9, "Register %d is not available", a2);
  return sub_93028(v4);
}
