int __fastcall sub_32CC00(int a1, int a2, signed __int64 a3)
{
  int v3; // r5
  int v6; // [sp+Ch] [bp-8h] BYREF

  v3 = HIDWORD(a3);
  v6 = 0;
  sub_32C3B0(a1, a2, a3, 0x80u, &v6);
  if ( v6 )
    sub_327DE4(a1, v6, v3);
  return a1;
}
