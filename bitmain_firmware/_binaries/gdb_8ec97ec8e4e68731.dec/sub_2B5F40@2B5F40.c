int __fastcall sub_2B5F40(int a1, int a2, int a3, int a4)
{
  int v8; // r5
  int v9; // r0
  bool v10; // nf
  int v11; // r4
  _BOOL4 v12; // r3

  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a3);
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a3 + 4);
  v10 = v8 < 0;
  v11 = v9;
  if ( v8 >= 0 )
    v8 += a4;
  if ( !v10 )
    v8 &= ~0x80000000;
  v12 = v9 != 1;
  if ( v9 < 0 )
    v12 = 0;
  if ( v12 )
    v11 = (v9 + a4) & 0x7FFFFFFF;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 48))(v8, a2);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 48))(v11, a2 + 4);
}
