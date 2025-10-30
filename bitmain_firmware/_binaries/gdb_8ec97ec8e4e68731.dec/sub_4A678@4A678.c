int __fastcall sub_4A678(const char *a1, int a2)
{
  int v4; // r0
  int v5; // r0
  const char *v6; // r0
  const char *v8; // r0
  _DWORD v9[5]; // [sp+0h] [bp-24h] BYREF
  int v10; // [sp+14h] [bp-10h] BYREF
  int v11; // [sp+18h] [bp-Ch]
  int v12; // [sp+1Ch] [bp-8h]

  if ( !a1 || !*a1 )
    sub_946E0("Requires argument (checkpoint id to detach)");
  v4 = sub_14CC00(a1);
  sub_4A628(v9, v4);
  v10 = v9[0];
  v11 = v9[1];
  v12 = v9[2];
  if ( sub_98F78(&v10, &dword_46BBCC) )
    sub_946E0("No such checkpoint id, %s", a1);
  if ( sub_98F78(&v10, &dword_4878EC) )
    sub_946E0("Please switch to another checkpoint before detaching the current one");
  v5 = ps_getpid_0(&v10);
  if ( ptrace(PTRACE_DETACH, v5, 0, 0) )
  {
    v8 = (const char *)sub_23095C(v10, v11, v12);
    sub_946E0("Unable to detach %s", v8);
  }
  if ( a2 )
  {
    v6 = (const char *)sub_23095C(v10, v11, v12);
    sub_259F10("Detached %s\n", v6);
  }
  return sub_4A304(v10, v11, v12);
}
