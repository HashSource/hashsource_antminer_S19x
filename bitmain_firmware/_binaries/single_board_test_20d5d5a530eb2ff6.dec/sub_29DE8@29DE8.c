int sub_29DE8()
{
  size_t v0; // r0
  const char *v1; // r1
  char v3[48]; // [sp+0h] [bp-30h] BYREF

  memset(byte_6E32C0, 0, sizeof(byte_6E32C0));
  sub_1F6E4(
    "version: 5b36a31bfedc7057992454b37753104cfdd7f4dd commit: 2024-02-22 16:37:10 build: 2025-06-21 15:30:42",
    9,
    40,
    (int)byte_6E32C0);
  v0 = strlen(byte_6E32C0);
  v1 = (const char *)dword_223680;
  *(_WORD *)&byte_6E32C0[v0] = 95;
  strncat(byte_6E32C0, v1, 0x40u);
  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : software_commit_id: %s\n", "save_software_commit_id", byte_6E32C0);
  snprintf(byte_60F2D4, 0x100u, "software_commit_id: %s", byte_6E32C0);
  sub_3CC5C(byte_60F2D4, v3);
  return 1;
}
