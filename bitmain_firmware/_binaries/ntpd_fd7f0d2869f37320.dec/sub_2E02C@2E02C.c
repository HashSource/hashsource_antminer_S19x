bool __fastcall sub_2E02C(int a1, time_t *a2)
{
  _QWORD *v4; // r5
  __int64 v6; // [sp+0h] [bp-1Ch] BYREF
  __int64 v7; // [sp+8h] [bp-14h] BYREF

  v4 = sub_2D4D0(0);
  sub_6694C((int)&v6, a1, a2);
  v7 = v6;
  return sub_6EAC0(&v7, v4 + 3) >= 0;
}
