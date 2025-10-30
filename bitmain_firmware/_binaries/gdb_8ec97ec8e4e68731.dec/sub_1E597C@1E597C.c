int sub_1E597C(const char *a1, ...)
{
  int v1; // r0
  int v2; // r0
  _BYTE **v3; // r4
  signed int v4; // r6
  size_t v5; // r0
  __int64 v6; // r0
  int varg_r1; // [sp+6Ch] [bp+14h] BYREF
  va_list varg_r1a; // [sp+6Ch] [bp+14h]
  va_list varg_r2; // [sp+70h] [bp+18h] BYREF

  va_start(varg_r2, a1);
  va_start(varg_r1a, a1);
  varg_r1 = va_arg(varg_r2, _DWORD);
  v1 = sub_16F654((int)a1);
  v2 = ((int (__fastcall *)(int))loc_1E2770)(v1);
  v3 = (_BYTE **)dword_488C94;
  v4 = sub_1E2890(v2);
  **v3 = 0;
  if ( vsnprintf(*v3, v4, a1, varg_r1a) >= v4 )
  {
    v6 = sub_94700((int)"remote.c", 8446, "Too long remote packet.");
LABEL_5:
    sub_946E0("Communication problem with target.", HIDWORD(v6));
  }
  v5 = strlen(*v3);
  if ( sub_1E51C4((int)*v3, v5) < 0 )
    goto LABEL_5;
  **v3 = 0;
  sub_1E4EB8(v3, (size_t *)v3 + 1, 0, 0, 0);
  return sub_1E1700(*v3);
}
