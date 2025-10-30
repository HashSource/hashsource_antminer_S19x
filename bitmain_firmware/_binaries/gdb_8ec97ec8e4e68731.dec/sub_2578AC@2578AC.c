int __fastcall sub_2578AC(_DWORD *a1, int a2, int a3)
{
  _DWORD *v6; // r3
  int v8; // [sp+4h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-8h] BYREF
  int v10; // [sp+Ch] [bp-4h] BYREF

  sub_257414(a1, &v8, &v9, &v10);
  sub_257818((int)a1, a2);
  v6 = (_DWORD *)a1[5];
  if ( v6 && *v6 == 1 && v6[1] == (a1[3] - a1[2]) >> 2 )
    v6[12] = v6[9];
  return (*(int (__fastcall **)(_DWORD *, int, int))(*a1 + 24))(a1, a2, a3);
}
