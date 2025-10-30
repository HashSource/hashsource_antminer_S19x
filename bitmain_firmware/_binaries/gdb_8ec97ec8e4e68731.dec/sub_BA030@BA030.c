int sub_BA030(char *s2, int a2, ...)
{
  _DWORD *v3; // r0
  void *v4; // r1
  int v5; // r5
  char *v7; // r0
  const char *v8; // r2
  void *ptr; // [sp+4h] [bp-1Ch] BYREF
  void *v10; // [sp+8h] [bp-18h] BYREF
  char v11; // [sp+10h] [bp-10h] BYREF
  int varg_r1; // [sp+2Ch] [bp+Ch]
  va_list varg_r2; // [sp+30h] [bp+10h] BYREF

  va_start(varg_r2, a2);
  varg_r1 = a2;
  ptr = 0;
  if ( dword_478228 )
  {
    va_copy(v10, varg_r2);
    v3 = (_DWORD *)sub_242FC8(s2);
    sub_259344(*v3, varg_r1, (char *)varg_r2);
  }
  if ( sub_B9380(s2, (const char **)&ptr) )
  {
    v4 = ptr;
    v5 = 1;
  }
  else
  {
    ((void (*)(void))loc_B9CF8)();
    v5 = sub_B9380(s2, (const char **)&ptr);
    v4 = ptr;
    if ( v5 )
    {
      v5 = 1;
    }
    else
    {
      sub_946B0(
        "File \"%s\" auto-loading has been declined by your `auto-load safe-path' set to \"%s\".",
        (const char *)ptr,
        (const char *)dword_478248);
      if ( dword_47824C )
      {
        v4 = ptr;
      }
      else
      {
        v7 = getenv("HOME");
        v8 = "$HOME";
        if ( v7 )
          v8 = v7;
        sub_931D8((char **)&v10, "%s/%s", v8, ".gdbinit");
        sub_259F10(
          "To enable execution of this file add\n"
          "\tadd-auto-load-safe-path %s\n"
          "line to your configuration file \"%s\".\n"
          "To completely disable this security protection add\n"
          "\tset auto-load safe-path /\n"
          "line to your configuration file \"%s\".\n"
          "For more information about this security protection see the\n"
          "\"Auto-loading safe path\" section in the GDB manual.  E.g., run from the shell:\n"
          "\tinfo \"(gdb)Auto-loading safe path\"\n",
          (const char *)ptr,
          (const char *)v10,
          (const char *)v10);
        dword_47824C = 1;
        if ( v10 != &v11 )
          sub_339E64(v10);
        v4 = ptr;
        v5 = 0;
      }
    }
  }
  if ( v4 )
    free(v4);
  return v5;
}
