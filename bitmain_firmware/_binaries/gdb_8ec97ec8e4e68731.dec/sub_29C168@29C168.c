int __fastcall sub_29C168(int a1, int a2, int a3)
{
  __int64 v6; // r0

  memset((void *)(a1 + 8), 0, 0x90u);
  LODWORD(v6) = sub_2A2D9C;
  HIDWORD(v6) = sub_2A2DDC;
  *(_DWORD *)(a1 + 68) = sub_2A2C9C;
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_DWORD *)(a1 + 72) = sub_2A2D34;
  *(_QWORD *)(a1 + 76) = v6;
  *(_DWORD *)(a1 + 84) = sub_2A2DE4;
  *(_DWORD *)(a1 + 24) = 2;
  *(_DWORD *)(a1 + 28) = 2;
  *(_DWORD *)(a1 + 108) = 2;
  return v6;
}
