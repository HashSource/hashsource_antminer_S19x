int __fastcall sub_2575A4(_DWORD *a1, int a2)
{
  int v5; // [sp+Ch] [bp-10h] BYREF
  int v6; // [sp+10h] [bp-Ch] BYREF
  int v7; // [sp+14h] [bp-8h] BYREF

  sub_257414(a1, &v5, &v6, &v7);
  return (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 36))(a1, v5, v6, v7, a2);
}
