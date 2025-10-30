void __fastcall sub_263A50(int a1)
{
  int v2; // r5
  int *v3; // r0
  int v4; // [sp+0h] [bp-Ch] BYREF

  if ( *(_DWORD *)(a1 + 84) )
  {
    v2 = sub_15F7E8((_BOOL4)"no frame selected");
    v3 = sub_C32A8(v2, 0);
    sub_21CDC4((int)&v4, a1, (int)v3);
    if ( v4 )
      JUMPOUT(0x15B3A0);
    sub_946E0("current stack frame does not contain a variable named `%s'", *(const char **)(a1 + 84));
  }
  sub_946E0("no `this' in current language");
}
