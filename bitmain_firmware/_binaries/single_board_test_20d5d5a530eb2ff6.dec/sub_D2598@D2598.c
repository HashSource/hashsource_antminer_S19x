bool __fastcall sub_D2598(int a1, int a2, int a3, unsigned int a4)
{
  int v8; // r0
  int v9; // r4
  int v10; // r10
  int v11; // r5
  bool v12; // zf
  _BOOL4 result; // r0
  int v14; // r2
  void (__fastcall *v15)(int, int, unsigned int, int, int, int); // r11
  int v16; // r0
  int v17; // r4
  int v18; // r0

  v8 = sub_D8934(a1);
  v9 = *(_DWORD *)(v8 + 496);
  if ( !v9 )
    return 0;
  v10 = *(_DWORD *)(v8 + 500);
  v11 = v8;
  if ( !v10 )
    return 0;
  v12 = a3 == 0;
  if ( a3 )
    v12 = a2 == 0;
  result = 0;
  v14 = v12;
  if ( a4 <= 0xF )
    v14 |= 1u;
  if ( !v14 )
  {
    v15 = *(void (__fastcall **)(int, int, unsigned int, int, int, int))(v11 + 512);
    if ( v15 )
    {
      v16 = sub_D8AC0(a1);
      v15(a3, a2, a4, v9, v10, v16);
      return 1;
    }
    else
    {
      v17 = sub_D8AC0(a1);
      v18 = sub_D8924(a1);
      return sub_E957C(v11 + 496, v17, a3, a2, a4, v18) == 0;
    }
  }
  return result;
}
