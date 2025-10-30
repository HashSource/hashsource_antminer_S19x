void __fastcall __noreturn sub_29121C(int a1, int a2)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  v2 = sub_2945C8(a1, a2);
  v3 = sub_28D50C(v2);
  v4 = sub_29703C(v3);
  v5 = sub_293324(v4);
  for ( dword_48AAA0 &= ~0x1000u; dword_48B6F4; v5 = sub_292904(v5) )
    ;
  dword_48AAD0 = 0;
  longjmp((struct __jmp_buf_tag *)&unk_48FF38, 1);
}
