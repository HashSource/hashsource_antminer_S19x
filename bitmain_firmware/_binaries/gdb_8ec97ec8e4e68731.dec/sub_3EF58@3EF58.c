int __fastcall sub_3EF58(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r8
  int (__fastcall *v8)(int, int, int *); // r7
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r0
  char *v14; // r0
  int v15; // r4
  char *v16; // r0
  int v17; // [sp+Ch] [bp-164h] BYREF
  int v18; // [sp+10h] [bp-160h]
  int v19; // [sp+14h] [bp-15Ch]
  int v20[2]; // [sp+18h] [bp-158h] BYREF
  _BYTE v21[336]; // [sp+20h] [bp-150h] BYREF

  v17 = a1;
  v18 = a2;
  v19 = a3;
  v20[1] = 0;
  if ( !sub_98F68(&v17) )
  {
    v11 = sub_94700(
            "linux-thread-db.c",
            354,
            "%s: Assertion `%s' failed.",
            "thread_info* thread_from_lwp(ptid_t)",
            "ptid_get_lwp (ptid) != 0");
    goto LABEL_11;
  }
  v3 = ps_getpid_0(&v17);
  v4 = dword_471BF4;
  if ( !dword_471BF4 )
  {
LABEL_9:
    MEMORY[0x10] = v17;
    MEMORY[0x14] = v18;
    MEMORY[0x18] = v19;
    __und(0);
  }
  while ( v3 != *(_DWORD *)(v4 + 4) )
  {
    v4 = *(_DWORD *)v4;
    if ( !v4 )
      goto LABEL_9;
  }
  v5 = v18;
  v6 = v19;
  v7 = *(_DWORD *)(v4 + 28);
  v8 = *(int (__fastcall **)(int, int, int *))(v4 + 44);
  *(_DWORD *)(v4 + 16) = v17;
  *(_DWORD *)(v4 + 20) = v5;
  *(_DWORD *)(v4 + 24) = v6;
  v9 = sub_98F68(&v17);
  v10 = v8(v7, v9, v20);
  if ( v10 )
  {
    v15 = sub_98F68(&v17);
    v16 = sub_3E4C0(v10);
    sub_946E0("Cannot find user-level thread for LWP %ld: %s", v15, v16);
  }
  v11 = (*(int (__fastcall **)(int *, _BYTE *))(v4 + 52))(v20, v21);
  if ( v11 )
  {
LABEL_11:
    v14 = sub_3E4C0(v11);
    sub_946E0("thread_get_info_callback: cannot get thread info: %s", v14);
  }
  v12 = sub_23E408(v17, v18, v19);
  return sub_3EDDC(v12, v17, v18, v19, v20, (int)v21);
}
