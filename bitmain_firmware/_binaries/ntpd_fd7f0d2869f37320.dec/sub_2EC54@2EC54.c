int __fastcall sub_2EC54(const char *a1, int a2, int a3)
{
  char v6[256]; // [sp+Ch] [bp-604h] BYREF
  char v7[256]; // [sp+10Ch] [bp-504h] BYREF
  char v8[1024]; // [sp+20Ch] [bp-404h] BYREF

  sub_6D00C(v6, 256, "%04x", a2);
  sub_6D00C(v7, 256, "%04x", a3);
  sub_6D00C(v8, 1024, "%s status: %s -> %s", a1, v6, v7);
  return sub_26294(13, 0, v8);
}
