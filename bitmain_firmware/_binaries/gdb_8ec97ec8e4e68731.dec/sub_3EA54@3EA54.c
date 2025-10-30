char *__fastcall sub_3EA54(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v9; // r5
  int v10; // r0
  int v11; // [sp+Ch] [bp-10h] BYREF
  int v12; // [sp+10h] [bp-Ch]
  int v13; // [sp+14h] [bp-8h]

  v11 = a2;
  v12 = a3;
  v13 = a4;
  v5 = sub_23E408(a2, a3, a4);
  if ( v5 && (v6 = *(_DWORD *)(v5 + 248)) != 0 )
  {
    v9 = *(_DWORD *)(v6 + 16);
    v10 = sub_98F68(&v11);
    snprintf(byte_471BFC, 0x40u, "Thread 0x%lx (LWP %ld)", v9, v10);
    return byte_471BFC;
  }
  else
  {
    v7 = sub_23192C(a1);
    return (char *)(*(int (__fastcall **)(int, int, int, int))(v7 + 268))(v7, v11, v12, v13);
  }
}
