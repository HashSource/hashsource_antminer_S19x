void __fastcall sub_61A80(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11

  *(_DWORD *)(v6 - 8) = a1;
  if ( *(_DWORD *)(v6 - 8) )
  {
    snprintf((char *)(v6 - 7116), 0x800u, "%s: reset pic error!\n\n", "_update_pic_app_program_1704");
    sub_3AF5C(0, (const char *)(v6 - 7116), 0, v6 - 7116);
  }
  else
  {
    *(_DWORD *)(v6 - 8) = 0;
  }
  __asm { POP             {R11,PC} }
}
