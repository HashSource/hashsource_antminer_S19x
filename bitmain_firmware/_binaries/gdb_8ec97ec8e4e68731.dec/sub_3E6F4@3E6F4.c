int __fastcall sub_3E6F4(int a1, int a2, int *a3)
{
  int *v3; // r5
  int v4; // r7
  int v5; // r8
  int v7; // r3
  int v8; // r8
  int v9; // r6
  int v10; // r0
  int result; // r0
  _DWORD *v12; // r0
  __int64 v13; // kr00_8
  int v14; // r0
  _DWORD *v15; // r6
  _DWORD *v16; // r0
  int v17; // r0
  int v18; // [sp+10h] [bp-8h] BYREF
  int v19; // [sp+14h] [bp-4h]

  v7 = *(_DWORD *)(a1 + 48);
  v18 = a1;
  v19 = 0;
  if ( v7 )
  {
    v4 = a2;
    v3 = a3;
    v8 = sub_92E28(0);
    v9 = (*(int (__fastcall **)(_DWORD, int (*)(), int *, _DWORD, int, _DWORD, int))(a1 + 48))(
           *(_DWORD *)(a1 + 28),
           sub_3F398,
           &v18,
           0,
           -20,
           0,
           -1);
    v10 = sub_92E40(v8);
  }
  else
  {
    v13 = sub_94700(
            "linux-thread-db.c",
            1250,
            "%s: Assertion `%s' failed.",
            "int find_new_threads_once(thread_db_info*, int, td_err_e*)",
            "info->td_ta_thr_iter_p != NULL");
    sub_92E40(v5);
    if ( HIDWORD(v13) != 1 )
    {
      v17 = sub_339E78(v13);
      sub_92E60(v17);
    }
    v14 = sub_339E78(v13);
    v15 = (_DWORD *)v14;
    if ( dword_471BF0 )
    {
      v16 = (_DWORD *)sub_242FC8(v14);
      v14 = sub_154B88(*v16, *v15, v15[1], v15[2], "Warning: find_new_threads_once: ");
    }
    v10 = sub_339EF8(v14);
    v9 = 1;
  }
  if ( dword_471BF0 )
  {
    v12 = (_DWORD *)sub_242FC8(v10);
    sub_2594B0(*v12, "Found %d new threads in iteration %d.\n", v19, v4);
  }
  result = v19;
  *v3 = v9;
  return result;
}
