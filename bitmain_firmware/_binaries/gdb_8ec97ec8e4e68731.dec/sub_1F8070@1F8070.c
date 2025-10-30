void __fastcall sub_1F8070(const char *a1, char *a2, int a3)
{
  char *v6; // r3
  int v7; // r5
  void *ptr; // [sp+0h] [bp-18h] BYREF
  char v9; // [sp+8h] [bp-10h] BYREF

  if ( dword_48794C == 1 )
    sub_946E0("Already in reverse mode.  Use '%s' or 'set exec-dir forward'.", a1);
  if ( !off_489B48(&dword_4899A0) )
    sub_946E0("Target %s does not support this command.", (const char *)dword_4899A4);
  v6 = "";
  if ( a2 )
    v6 = a2;
  sub_931D8((char **)&ptr, "%s %s", a1, v6);
  v7 = dword_48794C;
  dword_48794C = 1;
  sub_2435B0(ptr, a3);
  dword_48794C = v7;
  if ( ptr != &v9 )
    sub_339E64(ptr);
}
