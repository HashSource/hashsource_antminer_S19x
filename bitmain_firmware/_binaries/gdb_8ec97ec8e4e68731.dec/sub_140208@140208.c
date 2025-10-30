void __fastcall sub_140208(
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
  _DWORD *v11; // [sp+Ch] [bp-2Ch] BYREF
  int (__fastcall *v12)(_DWORD *, void *, int); // [sp+10h] [bp-28h]
  _DWORD v13[4]; // [sp+14h] [bp-24h] BYREF
  _DWORD var14[8]; // [sp+24h] [bp-14h] BYREF

  v13[0] = a1;
  v11 = a2;
  v12 = a3;
  ((void (*)(void))loc_11EB1C)();
  if ( *(_DWORD *)(dword_4872D8 + 420) )
  {
    sub_12D258(v11, v12);
    v13[3] = sub_1475C0;
    v13[2] = var14;
    v10 = *(_DWORD **)(dword_4872D8 + 420);
    var14[2] = &v11;
    var14[0] = v10;
    var14[1] = v13;
    var14[3] = &a7;
    var14[4] = &a9;
    sub_13FEB4(v10, a4, a5, a6, (int)var14, (void (__fastcall *)(int))sub_1475C0);
  }
}
