int __fastcall sub_A3164(int a1)
{
  const char *v2; // r5
  int v3; // r0
  int v4; // r4
  int v5; // r1
  __int64 v6; // r0
  int v7; // r5
  int v8; // r0
  int v10; // [sp+0h] [bp-14h] BYREF
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch] BYREF
  int v13; // [sp+Ch] [bp-8h]

  v2 = (const char *)sub_9AAB0(a1);
  v3 = sub_170040(a1);
  v4 = *(_DWORD *)(sub_1780B4(v3) + 48);
  if ( sscanf(v2, "_%lld_%lld", &v10, &v12) <= 1 )
    return 0;
  v6 = sub_26DAF4(v4, v5, v10, v11);
  v7 = v6;
  v8 = sub_26DAF4(v4, HIDWORD(v6), v12, v13);
  return sub_25E4EC(v7, v8, 4);
}
