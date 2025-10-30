void __fastcall sub_1934F8(int a1)
{
  const char *v1; // r0
  char *v2; // r4
  char *v3; // r3
  char *v4; // r0
  int (*v5)(void); // r6
  _DWORD *v6; // r6
  _DWORD *v7; // r0
  void *v8; // r3
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  void *handle; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    sub_946E0("No reader name provided.");
  v1 = (const char *)sub_29B910(a1);
  v2 = (char *)v1;
  if ( dword_4879DC )
    sub_946E0("JIT reader already loaded.  Run jit-reader-unload first.");
  if ( *v1 != 47 )
  {
    v3 = sub_93140("%s%s%s", (const char *)dword_4879E4, (const char *)&word_398974, v1);
    v4 = v2;
    v2 = v3;
    free(v4);
  }
  if ( dword_4879D8 )
  {
    v11 = (_DWORD *)sub_242FC8(v1);
    sub_2594B0(*v11, "Opening shared object %s.\n", v2);
  }
  sub_1634C0(&handle, v2);
  v5 = (int (*)(void))sub_163504(&handle, "gdb_init_reader");
  if ( !v5 )
    sub_946E0("Could not locate initialization function: %s.", "gdb_init_reader");
  if ( !sub_163504(&handle, "plugin_is_GPL_compatible") )
    sub_946E0("Reader not GPL compatible.");
  v6 = (_DWORD *)v5();
  if ( *v6 != 1 )
    sub_946E0("Reader version does not match GDB version.");
  v7 = sub_9836C(8u);
  v8 = handle;
  *v7 = v6;
  dword_4879DC = (int)v7;
  v7[1] = v8;
  v9 = sub_15D778();
  v10 = sub_16F654(v9);
  sub_1933D4(v10);
  if ( v2 )
    free(v2);
}
