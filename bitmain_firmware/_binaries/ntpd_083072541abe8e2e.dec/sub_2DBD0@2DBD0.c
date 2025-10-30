bool __fastcall sub_2DBD0(int a1, time_t *a2)
{
  char *v4; // r5
  __int64 v6; // [sp+0h] [bp-1Ch] BYREF
  __int64 v7; // [sp+8h] [bp-14h] BYREF

  v4 = (char *)sub_2D0F4(0);
  sub_658E8((int)&v6, a1, a2);
  v7 = v6;
  return sub_6DAF4(&v7, v4 + 24) >= 0;
}
