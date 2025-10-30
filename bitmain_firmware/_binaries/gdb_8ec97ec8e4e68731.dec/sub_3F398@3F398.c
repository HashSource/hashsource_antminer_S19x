int __fastcall sub_3F398(int *a1, int *a2)
{
  int v2; // r4
  int v4; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r0
  _DWORD *v9; // r0
  int v10; // r0
  char *v11; // r0
  int v12; // [sp+Ch] [bp-160h] BYREF
  int v13; // [sp+10h] [bp-15Ch]
  int v14; // [sp+14h] [bp-158h]
  _BYTE v15[8]; // [sp+18h] [bp-154h] BYREF
  int v16; // [sp+20h] [bp-14Ch]
  int v17; // [sp+58h] [bp-114h]

  v2 = *a2;
  v4 = (*(int (__fastcall **)(int *, _BYTE *))(*a2 + 52))(a1, v15);
  if ( v4 )
  {
    v11 = sub_3E4C0(v4);
    sub_946E0("find_new_threads_callback: cannot get thread info: %s", v11);
  }
  v5 = v17;
  if ( v17 != -1 )
  {
    if ( v16 )
    {
      if ( *(_DWORD *)(v2 + 32) )
      {
        v10 = sub_4B918(v17);
        v6 = v10;
        if ( v10 == -1 )
        {
          v6 = *(_DWORD *)(v2 + 4);
          v5 = v17;
        }
        else
        {
          if ( *(_DWORD *)(v2 + 4) != v10 )
            return 0;
          v5 = v17;
        }
      }
      else
      {
        v6 = *(_DWORD *)(v2 + 4);
      }
      sub_98F48(&v12, v6, v5, 0);
      v7 = sub_23E408(v12, v13, v14);
      if ( !v7 || !*(_DWORD *)(v7 + 248) )
        sub_3EDDC(v7, v12, v13, v14, a1, (int)v15);
      return 0;
    }
    *(_DWORD *)(v2 + 32) = 0;
    return 0;
  }
  if ( !dword_471BF0 )
    return 0;
  v9 = (_DWORD *)sub_242FC8(0);
  sub_2594B0(*v9, "thread_db: skipping exited and joined thread (0x%lx)\n", v16);
  return 0;
}
