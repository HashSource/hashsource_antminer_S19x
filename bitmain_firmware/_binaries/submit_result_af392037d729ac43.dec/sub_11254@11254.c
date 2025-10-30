int __fastcall sub_11254(const char *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  const char *v5; // r4
  _BYTE v6[252]; // [sp+4h] [bp-FCh] BYREF

  v2 = (_DWORD *)sub_13744(a1, 0, v6);
  if ( v2 && (v3 = v2, !*v2) )
  {
    memset(&unk_27120, 0, 0xC00u);
    dword_27D20 = 0;
    v5 = (const char *)sub_11F78(v3, 0);
    dword_27D20 = strlen(v5);
    memcpy(&unk_27120, v5, dword_27D20);
    return 1;
  }
  else
  {
    printf("submit_result: %s is not in jasson format\n", a1);
    return 0;
  }
}
