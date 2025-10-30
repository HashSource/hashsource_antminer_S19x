int __fastcall sub_68A7C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _BYTE v11[24]; // [sp+Ch] [bp-18h] BYREF

  sub_93170(v11, 20, "%d", a6);
  return (*(int (__fastcall **)(int, int, int, int, int, _BYTE *))(*(_DWORD *)a1 + 40))(a1, a2, a3, a4, a5, v11);
}
