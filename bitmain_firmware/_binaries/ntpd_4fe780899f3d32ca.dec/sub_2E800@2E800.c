__int16 *__fastcall sub_2E800(const char *a1, int a2, int a3)
{
  char v6[256]; // [sp+Ch] [bp-604h] BYREF
  char v7[256]; // [sp+10Ch] [bp-504h] BYREF
  char v8[1024]; // [sp+20Ch] [bp-404h] BYREF

  sub_6C054(v6, 256, "%04x", a2);
  sub_6C054(v7, 256, "%04x", a3);
  sub_6C054(v8, 1024, "%s status: %s -> %s", a1, v6, v7);
  return sub_25EE0((__int16 *)&byte_9[4], 0, v8);
}
