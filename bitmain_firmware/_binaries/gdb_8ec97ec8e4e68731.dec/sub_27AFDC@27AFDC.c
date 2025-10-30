int sub_27AFDC(int a1, int a2, char *a3, ...)
{
  int (__fastcall *v4)(int, char *); // r5
  va_list varg_r3; // [sp+1Ch] [bp+10h] BYREF

  va_start(varg_r3, a3);
  sub_25A7C0(a1, a2, "__gdb_stack[__gdb_tos] = ");
  sub_256808(a2, a3, varg_r3);
  v4 = *(int (__fastcall **)(int, char *))(*(_DWORD *)a2 + 16);
  if ( v4 == sub_60124 )
    return (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)a2 + 8))(a2, ";\n", 2);
  else
    return v4(a2, ";\n");
}
