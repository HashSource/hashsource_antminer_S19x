int __fastcall sub_CBFC(const char *a1)
{
  size_t v1; // r0
  char v3[128]; // [sp+4h] [bp-88h] BYREF

  sub_6C054(v3, 128, "settimeofday=\"%s\"", a1);
  v1 = strlen(v3);
  return sub_245C4(v3, v1 + 1);
}
