int __fastcall sub_2575E8(_DWORD *a1, int a2, int a3)
{
  int v7; // [sp+Ch] [bp-Ch] BYREF
  int v8; // [sp+10h] [bp-8h] BYREF
  int v9; // [sp+14h] [bp-4h] BYREF

  sub_257414(a1, &v7, &v8, &v9);
  return (*(int (__fastcall **)(_DWORD *, int, int, int, int, int))(*a1 + 40))(a1, v7, v8, v9, a2, a3);
}
