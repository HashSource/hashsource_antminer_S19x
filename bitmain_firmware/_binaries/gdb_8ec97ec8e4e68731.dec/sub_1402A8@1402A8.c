void __fastcall sub_1402A8(
        int a1,
        _DWORD *a2,
        int (__fastcall *a3)(_DWORD *, void *, int),
        int *a4,
        int a5,
        int (__fastcall *a6)(int, int),
        char a7,
        int a8,
        char a9)
{
  _DWORD *v10; // r3
  _DWORD *v11; // [sp+8h] [bp-20h] BYREF
  int (__fastcall *v12)(_DWORD *, void *, int); // [sp+Ch] [bp-1Ch]
  _DWORD *v13; // [sp+10h] [bp-18h]
  int v14; // [sp+14h] [bp-14h]
  _DWORD var10[7]; // [sp+18h] [bp-10h] BYREF

  v11 = a2;
  v12 = a3;
  ((void (*)(void))loc_11EB1C)();
  if ( *(_DWORD *)(dword_4872D8 + 424) )
  {
    sub_12D258(v11, v12);
    v14 = 1341228;
    v13 = var10;
    v10 = *(_DWORD **)(dword_4872D8 + 424);
    var10[2] = &v11;
    var10[0] = v10;
    var10[1] = &a9;
    var10[3] = &a7;
    sub_13FEB4(v10, a4, a5, a6, (int)var10, (void (__fastcall *)(int))sub_14772C);
  }
}
