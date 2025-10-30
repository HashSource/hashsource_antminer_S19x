int __fastcall sub_32CBB4(int a1, int a2, signed __int64 a3)
{
  int v4; // r5
  int v6; // [sp+Ch] [bp-8h] BYREF

  v4 = HIDWORD(a3);
  v6 = 0;
  sub_32C3B0(a1, a2, a3, 0, &v6);
  if ( v6 )
    sub_327DE4(a1, v6, v4);
  return a1;
}
