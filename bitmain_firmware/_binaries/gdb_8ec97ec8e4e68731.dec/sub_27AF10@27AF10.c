_DWORD *__fastcall sub_27AF10(int a1)
{
  _DWORD *v2; // r4
  int v3; // r0
  int v4; // r12

  v2 = sub_93094(1u, 0x1Cu);
  v2[4] = sub_27A768;
  *v2 = a1;
  v2[3] = "-std=gnu11 -fno-exceptions";
  v3 = sub_323AE0(10, sub_27A730, sub_27A744, sub_27A75C, sub_93094, sub_27A75C);
  v4 = *(_DWORD *)(a1 + 4);
  v2[5] = v3;
  (*(void (__fastcall **)(int, _DWORD, __int64 (__fastcall *)(_DWORD *, int, char *), _DWORD *))(v4 + 4))(
    a1,
    sub_279C9C,
    sub_27A088,
    v2);
  return v2;
}
