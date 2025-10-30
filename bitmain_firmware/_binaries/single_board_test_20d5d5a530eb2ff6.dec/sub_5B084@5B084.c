int __fastcall sub_5B084(void *a1, __int64 a2)
{
  _QWORD v6[11]; // [sp+0h] [bp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  v6[3] = a2;
  v6[1] = sub_5B0E0 + a2;
  v6[2] = sub_5B0E8 + a2;
  v6[4] = a2 + *(_QWORD *)sub_5B0F0;
  memcpy(a1, v6, 0x50u);
  return 0;
}
