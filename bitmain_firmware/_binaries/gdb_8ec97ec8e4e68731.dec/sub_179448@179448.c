void __fastcall sub_179448(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  unsigned int v6; // r7
  int v7; // r0
  unsigned int v8; // r2
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r4
  int v14; // r0
  void *v15; // r0
  unsigned int v16; // [sp+0h] [bp-10h] BYREF
  _DWORD v17[2]; // [sp+8h] [bp-8h] BYREF

  v4 = sub_15ECB4(a1);
  v5 = ((int (__fastcall *)(int, int, int))loc_16A3AC)(v4, a1, a2);
  if ( v5 )
    a2 = v5;
  sub_1B240C(&v16, a2);
  v6 = v16;
  v7 = ((int (__fastcall *)(int))loc_1B7C78)(a2);
  v8 = __clz(v6);
  if ( !v7 )
    a2 = 1;
  v9 = v8 >> 5;
  if ( v7 )
    a2 = v9;
  if ( !a2 )
  {
    v10 = sub_21B790(v6);
    if ( v10 )
    {
      v11 = sub_338BD4(v10, " thunk to ");
      if ( v11 )
      {
        sub_1B141C((int)v17, (char *)(v11 + 10));
        if ( v17[0] )
        {
          v12 = *(__int16 *)(v17[0] + 22);
          if ( v12 == -1 )
          {
            v15 = (void *)sub_94700((int)"gnu-v3-abi.c", 1212, "Section index is uninitialized");
            if ( v15 )
              free(v15);
          }
          else
          {
            v13 = *(_DWORD *)(v17[0] + 8) + *(_DWORD *)(*(_DWORD *)(v17[1] + 144) + 4 * v12);
            v14 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v4, v13, &dword_4899A0);
            if ( v14 )
              v13 = v14;
            ((int (__fastcall *)(int, int, int))loc_16A3AC)(v4, a1, v13);
          }
        }
      }
    }
  }
}
