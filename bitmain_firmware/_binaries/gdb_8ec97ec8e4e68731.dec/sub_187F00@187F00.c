void __fastcall sub_187F00(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r5
  int v8; // r6
  int v9; // r0
  const char *v10; // r0
  int v11; // r5
  int v12; // r6
  int v13; // r7
  const char *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // [sp+Ch] [bp-48h] BYREF
  int v18; // [sp+10h] [bp-44h]
  int v19; // [sp+14h] [bp-40h]
  void *ptr; // [sp+1Ch] [bp-38h] BYREF
  char v21; // [sp+24h] [bp-30h] BYREF
  int (**v22)(); // [sp+34h] [bp-20h] BYREF
  char *v23; // [sp+38h] [bp-1Ch]
  int v24; // [sp+3Ch] [bp-18h]
  char v25; // [sp+40h] [bp-14h] BYREF
  int varg_r3; // [sp+6Ch] [bp+18h] BYREF

  v17 = a1;
  v18 = a2;
  v19 = a3;
  sub_277578(&ptr, a7);
  sub_256760(&v22);
  v23 = &v25;
  v22 = &off_3F2924;
  v24 = 0;
  v25 = 0;
  v7 = ps_getpid_0((int)&v17);
  v8 = sub_98F68((int)&v17);
  v9 = sub_98F70((int)&v17);
  sub_25678C(&v22, "infrun: target_wait (%d.%ld.%ld", v7, v8, v9);
  if ( ps_getpid_0((int)&v17) != -1 )
  {
    v10 = (const char *)sub_23095C(v17, v18, v19);
    sub_25678C(&v22, " [%s]", v10);
  }
  sub_25678C(&v22, ", status) =\n");
  v11 = ps_getpid_0((int)&varg_r3);
  v12 = sub_98F68((int)&varg_r3);
  v13 = sub_98F70((int)&varg_r3);
  v14 = (const char *)sub_23095C(varg_r3, a5, a6);
  sub_25678C(&v22, "infrun:   %d.%ld.%ld [%s],\n", v11, v12, v13, v14);
  v15 = sub_25678C(&v22, "infrun:   %s\n", (const char *)ptr);
  v16 = (_DWORD *)sub_242FC8(v15);
  sub_2594B0(*v16, "%s", v23);
  sub_256478(&v22);
  if ( ptr != &v21 )
    sub_339E64(ptr);
}
