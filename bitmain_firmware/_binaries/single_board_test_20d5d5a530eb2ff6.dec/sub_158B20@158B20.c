bool __fastcall sub_158B20(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  return (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(a1, a2[3], a2[4], a3[2], a5)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(a1, a3[2], a2[2], a3[4], a5)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 140))(a1, a3[3], a2[4], a5)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 140))(a1, a2[4], a2[2], a5)
      && sub_174BC8(a3[4], a2[3], a3[2])
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 140))(a1, a3[4], a3[4], a5)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 136))(a1, a3[2], a2[3])
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(
           a1,
           a2[3],
           a3[4],
           *(_DWORD *)(a4 + 8),
           a5)
      && sub_174BC8(a3[2], a3[2], a2[3])
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 140))(a1, a2[3], a2[4], a5)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(a1, a2[4], a2[4], a3[3], a5)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 140))(a1, a3[3], a3[3], a5)
      && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(a1, a3[3], a3[3], a1[18], a5)
      && sub_174BC8(a2[2], a2[3], a3[3]) != 0;
}
