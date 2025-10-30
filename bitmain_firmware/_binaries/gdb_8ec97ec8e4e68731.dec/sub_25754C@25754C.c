int __fastcall sub_25754C(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v10; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+10h] [bp-8h] BYREF
  int v12; // [sp+14h] [bp-4h] BYREF

  sub_257414(a1, &v10, &v11, &v12);
  return (*(int (__fastcall **)(_DWORD *, int, int, int, int, int))(*a1 + 32))(a1, v10, a2, a3, a4, a5);
}
