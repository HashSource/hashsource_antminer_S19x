bool __fastcall sub_1E7390(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  void *v4; // r6
  unsigned int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  unsigned int v13; // r4
  char *v14; // r6
  char *v15; // r10
  char *v16; // r12
  int v17; // r5
  int v18; // r3
  _BOOL4 v19; // r4
  int v21; // r0

  if ( ((int (*)(void))loc_166E9C)() <= a2 )
  {
    sub_94700(
      (int)"remote.c",
      797,
      "%s: Assertion `%s' failed.",
      "int remote_register_number_and_offset(gdbarch*, int, int*, int*)",
      "regnum < gdbarch_num_regs (gdbarch)");
    sub_339E64(v4);
    sub_338FFC(v21);
  }
  v9 = ((int (__fastcall *)(int))loc_166E9C)(a1);
  v13 = v9;
  if ( v9 )
  {
    if ( v9 > 0xAAAAAAA )
      sub_33D01C(v9, v10);
    v14 = (char *)sub_9836C(24 * v9);
    v15 = v14 + 24;
    do
    {
      v16 = v15 - 24;
      --v13;
      v15 += 24;
      *(_DWORD *)v16 = 0;
      *((_DWORD *)v16 + 1) = 0;
      *((_DWORD *)v16 + 2) = 0;
      *((_DWORD *)v16 + 3) = 0;
      v16 += 16;
      *(_DWORD *)v16 = 0;
      *((_DWORD *)v16 + 1) = 0;
    }
    while ( v13 );
    sub_1E1110(a1, (int)v14, 0, 0);
  }
  else
  {
    sub_1E1110(a1, 0, v11, v12);
    v14 = 0;
  }
  v17 = 24 * a2;
  v18 = *(_DWORD *)&v14[v17];
  *a3 = *(_DWORD *)&v14[v17 + 8];
  *a4 = v18;
  v19 = *a3 != -1;
  if ( v14 )
    sub_339E64(v14);
  return v19;
}
