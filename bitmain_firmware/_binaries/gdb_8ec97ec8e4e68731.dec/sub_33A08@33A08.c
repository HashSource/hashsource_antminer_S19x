int __fastcall sub_33A08(int a1, int a2)
{
  int v4; // r8
  int v5; // r4
  int v6; // r0
  __int64 v7; // r0
  __int64 v8; // r0
  __int64 v9; // r0
  __int64 v10; // r0
  __int64 v11; // r0
  int v12; // r0
  int result; // r0
  const char *v14; // r0
  int v15; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v16[6]; // [sp+10h] [bp-18h] BYREF

  v4 = sub_2611C4("mmap64", &v15);
  v5 = sub_1B7250(v15);
  v6 = sub_1780B4(v5);
  v16[0] = sub_26DC9C(*(_DWORD *)(v6 + 152), 0);
  v7 = sub_1780B4(v5);
  v16[1] = sub_26DB78(*(_DWORD *)(v7 + 36), HIDWORD(v7), a1, 0);
  if ( (a2 & 0xFFFFFFF8) != 0 )
  {
    sub_94700(
      "linux-tdep.c",
      2389,
      "%s: Assertion `%s' failed.",
      "CORE_ADDR linux_infcall_mmap(CORE_ADDR, unsigned int)",
      "(prot & ~(GDB_MMAP_PROT_READ | GDB_MMAP_PROT_WRITE | GDB_MMAP_PROT_EXEC)) == 0");
LABEL_5:
    v14 = (const char *)sub_98880(a1, a2 & 0xFFFFFFF8);
    sub_946E0("Failed inferior mmap call for %s bytes, errno is changed.", v14);
  }
  v8 = sub_1780B4(v5);
  v16[2] = sub_26DAF4(*(_DWORD *)(v8 + 12), HIDWORD(v8), a2, a2 & 0xFFFFFFF8);
  v9 = sub_1780B4(v5);
  v16[3] = sub_26DAF4(*(_DWORD *)(v9 + 12), HIDWORD(v9), 34, 0);
  v10 = sub_1780B4(v5);
  v16[4] = sub_26DAF4(*(_DWORD *)(v10 + 12), HIDWORD(v10), -1, -1);
  v11 = sub_1780B4(v5);
  v16[5] = sub_26DAF4(*(_DWORD *)(v11 + 124), HIDWORD(v11), 0, 0);
  v12 = sub_17E6EC(v4, a2 & 0xFFFFFFF8, 6, v16);
  result = sub_26EBA8(v12);
  if ( result == -1 )
    goto LABEL_5;
  return result;
}
