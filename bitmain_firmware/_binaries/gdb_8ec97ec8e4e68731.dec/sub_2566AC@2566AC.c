int __fastcall sub_2566AC(int a1, const char *a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)sub_242F8C();
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 28))(*v4);
  return fputs(a2, *(FILE **)(a1 + 4));
}
