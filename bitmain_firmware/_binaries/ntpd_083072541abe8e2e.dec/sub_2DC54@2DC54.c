int __fastcall sub_2DC54(int a1, time_t *a2)
{
  char *v4; // r7
  __int64 v6; // [sp+0h] [bp-24h] BYREF
  __int64 v7; // [sp+8h] [bp-1Ch] BYREF
  int v8; // [sp+14h] [bp-10h] BYREF

  v4 = (char *)sub_2D0F4(0);
  sub_658E8((int)&v6, a1, a2);
  v7 = v6;
  sub_6DBC0(&v6, v4 + 24, &v7);
  v7 = v6;
  sub_6598C(&v8, &v7);
  return v8;
}
