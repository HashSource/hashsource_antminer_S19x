void __fastcall sub_D1484(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        const char *a13)
{
  int v13; // r4
  int v14; // r6
  int v15; // r10
  char v16; // r11
  int v18; // r0
  int v19; // r0

  sub_92E40(v15);
  if ( a2 == 1 )
  {
    v18 = sub_339E78(a1);
    v19 = sub_946B0(a13, *(_DWORD *)(v14 + 24), *(_DWORD *)(v18 + 8));
    *(_BYTE *)(v13 + 38) = v16;
    sub_339EF8(v19);
    JUMPOUT(0xD1208);
  }
  sub_339E78(a1);
  sub_92E60();
}
