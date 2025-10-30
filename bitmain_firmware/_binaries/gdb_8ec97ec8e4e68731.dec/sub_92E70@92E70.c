void __fastcall __noreturn sub_92E70(int a1, int a2, int a3)
{
  void *v3; // r0
  int v4; // r12
  int v5; // r3

  v3 = sub_92614();
  sub_92620(v3);
  sub_92B44(2);
  v4 = dword_475210;
  v5 = dword_475210 + 400;
  *(_DWORD *)(dword_475210 + 400) = a1;
  *(_DWORD *)(v5 + 4) = a2;
  *(_DWORD *)(v5 + 8) = a3;
  longjmp((struct __jmp_buf_tag *)(v4 + 8), a1);
}
